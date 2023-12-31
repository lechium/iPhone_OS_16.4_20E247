//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EFProcessTransaction, NSString, UMUserSyncTask;

@interface MFUserSyncStakeholder : NSObject
{
    _Bool _runningInSyncBubble;	// 8 = 0x8
    EFProcessTransaction *_transaction;	// 16 = 0x10
    UMUserSyncTask *_task;	// 24 = 0x18
    _Bool _exitWhenDone;	// 32 = 0x20
}

+ (id)sharedStakeholder;	// IMP=0x00200000000c86ee
- (void).cxx_destruct;	// IMP=0x00200000000c8eb3
- (void)_processingDidFinish:(id)arg1;	// IMP=0x00100000000c8e3a
- (void)_processingDidStart:(id)arg1;	// IMP=0x00100000000c8dfa
- (void)_networkConfigurationChanged:(id)arg1;	// IMP=0x00100000000c8cf4
- (void)processQueueAndExit;	// IMP=0x00100000000c8c6e
- (void)printDeliveryQueue;	// IMP=0x00100000000c8be5
- (void)willSwitchUser;	// IMP=0x00100000000c8af3
- (void)uploadContent;	// IMP=0x00100000000c88c6
- (void)endTask;	// IMP=0x00100000000c8894
- (void)createAndStartTask;	// IMP=0x00100000000c87a4
- (id)init;	// IMP=0x00100000000c84c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

