//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, PDSQLiteDatabase;
@protocol OS_dispatch_queue;

@interface PDXPCDisabledAppsManager : NSObject
{
    PDSQLiteDatabase *_database;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000bd6f9
- (_Bool)_migrateToVersion1:(id *)arg1;	// IMP=0x00100000000bd5cd
- (_Bool)_migrateIfNeeded;	// IMP=0x00100000000bd4ab
- (_Bool)_performTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bd146
- (_Bool)_updateAppDisabledStateForAppIdentifier:(id)arg1 toDisabled:(_Bool)arg2;	// IMP=0x00100000000bccd9
- (_Bool)enableAppWithAppIdentifier:(id)arg1;	// IMP=0x00100000000bccc5
- (_Bool)disableAppWithAppIdentifier:(id)arg1;	// IMP=0x00100000000bccae
- (void)_resetIfNeeded;	// IMP=0x00100000000bcac1
- (void)reset;	// IMP=0x00100000000bc9b4
- (_Bool)setResetting:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00100000000bc89c
@property(readonly, nonatomic, getter=isResetting) _Bool resetting;
- (id)database;	// IMP=0x00100000000bc45c
@property(readonly, nonatomic) NSArray *disabledAppIDs;
- (void)onQueueDo:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bc257
- (_Bool)isOnQueue;	// IMP=0x00100000000bc235
- (void)dealloc;	// IMP=0x00100000000bc1f3
- (id)init;	// IMP=0x00100000000bc10e

@end
