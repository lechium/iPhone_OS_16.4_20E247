//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICConnectionConfiguration, ICUserIdentity, ICUserIdentityStore, ML3MusicLibrary;
@protocol ICDBackgroundTaskScheduling;

@interface BaseRequestHandler : NSObject
{
    _Bool _active;	// 8 = 0x8
    ICUserIdentity *_userIdentity;	// 16 = 0x10
    ICUserIdentityStore *_userIdentityStore;	// 24 = 0x18
    ICConnectionConfiguration *_configuration;	// 32 = 0x20
    ML3MusicLibrary *_musicLibrary;	// 40 = 0x28
    id <ICDBackgroundTaskScheduling> _taskScheduler;	// 48 = 0x30
}

+ (id)accountlessHandler;	// IMP=0x00200000000219bb
+ (_Bool)supportsAccountlessHandling;	// IMP=0x00100000000219b3
+ (id)managedConfigurations;	// IMP=0x00100000000218b4
+ (id)deleteHandlerForConfiguration:(id)arg1;	// IMP=0x001000000002176a
+ (id)handlerForConfiguration:(id)arg1;	// IMP=0x0010000000021628
+ (id)handlers;	// IMP=0x00100000000215f9
+ (id)globalSerialQueue;	// IMP=0x0010000000021596
- (void).cxx_destruct;	// IMP=0x0020000000021541
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) id <ICDBackgroundTaskScheduling> taskScheduler; // @synthesize taskScheduler=_taskScheduler;
@property(readonly, nonatomic) ML3MusicLibrary *musicLibrary; // @synthesize musicLibrary=_musicLibrary;
@property(readonly, nonatomic) ICConnectionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) ICUserIdentityStore *userIdentityStore; // @synthesize userIdentityStore=_userIdentityStore;
@property(readonly, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
- (void)updateLibraryWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000214e6
- (id)description;	// IMP=0x00100000000213fb
- (void)cancelOperationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000213f5
- (void)increasePriorityForAllOperations;	// IMP=0x00100000000213ef
- (void)decreasePriorityForAllOperations;	// IMP=0x00100000000213e9
- (void)onCalloutQueue:(CDUnknownBlockType)arg1;	// IMP=0x0010000000021346
- (void)cancellAllOperations;	// IMP=0x0010000000021340
- (void)performInitialLibraryUpdate;	// IMP=0x001000000002133a
- (void)becomeInactiveWithDeauthentication:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000021334
- (void)becomeActive;	// IMP=0x001000000002132e
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0010000000021245
- (id)init;	// IMP=0x0010000000021203

@end

