//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface MLDDatabaseValidationController : NSObject
{
    _Bool _suspended;	// 8 = 0x8
    int _languageChangeNotificationToken;	// 12 = 0xc
    int _homeSharingCachesClearedNotificationToken;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_validationQueue;	// 24 = 0x18
    NSMutableArray *_suspendedValidations;	// 32 = 0x20
    NSMutableSet *_validatedDatabasePaths;	// 40 = 0x28
    NSMutableSet *_validatingDatabasePaths;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000040b5
@property(nonatomic, getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
@property(nonatomic) int homeSharingCachesClearedNotificationToken; // @synthesize homeSharingCachesClearedNotificationToken=_homeSharingCachesClearedNotificationToken;
@property(nonatomic) int languageChangeNotificationToken; // @synthesize languageChangeNotificationToken=_languageChangeNotificationToken;
@property(retain, nonatomic) NSMutableSet *validatingDatabasePaths; // @synthesize validatingDatabasePaths=_validatingDatabasePaths;
@property(retain, nonatomic) NSMutableSet *validatedDatabasePaths; // @synthesize validatedDatabasePaths=_validatedDatabasePaths;
@property(retain, nonatomic) NSMutableArray *suspendedValidations; // @synthesize suspendedValidations=_suspendedValidations;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *validationQueue; // @synthesize validationQueue=_validationQueue;
- (void)_tearDownLanguageChangeNotifications;	// IMP=0x0010000000003f9f
- (void)_registerForLanguageChangeNotifications;	// IMP=0x0010000000003e1c
- (void)_exitForLocalizationChange;	// IMP=0x0010000000003d23
- (void)_purgePendingDatabaseValidations;	// IMP=0x0010000000003b3b
- (_Bool)shouldValidateDatabaseForLibrary:(id)arg1;	// IMP=0x0010000000003a77
- (void)resumeValidations;	// IMP=0x0010000000003a2c
- (void)clearValidatedPaths;	// IMP=0x0010000000003986
- (void)suspendValidations;	// IMP=0x001000000000393b
- (_Bool)isValidatedPath:(id)arg1;	// IMP=0x001000000000386d
- (void)validateMusicLibrary:(id)arg1 shouldTruncateDatabase:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000003481
- (void)dealloc;	// IMP=0x0010000000003443
- (id)init;	// IMP=0x001000000000338e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
