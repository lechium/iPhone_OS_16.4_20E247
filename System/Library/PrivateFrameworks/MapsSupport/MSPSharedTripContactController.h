//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSPSharingRestorationStorage, NSMutableOrderedSet, NSMutableSet, NSOrderedSet, NSSet;
@protocol MSPSharedTripContactControllerDelegate, MSPSharedTripXPCServer, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MSPSharedTripContactController : NSObject
{
    NSMutableOrderedSet *_contactsValues;	// 8 = 0x8
    NSSet *_activeHandles;	// 16 = 0x10
    NSMutableSet *_pendingContacts;	// 24 = 0x18
    id <MSPSharedTripXPCServer> _sharedTripServer;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 40 = 0x28
    id <MSPSharedTripContactControllerDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000071289
@property(nonatomic) __weak id <MSPSharedTripContactControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_archivedSharingStorage;	// IMP=0x0000000000070fd0
@property(readonly, nonatomic) MSPSharingRestorationStorage *archivedSharingStorage;
- (void)_updateActiveSharingHandles:(id)arg1;	// IMP=0x0000000000070a7b
- (void)updateActiveSharingHandles:(id)arg1;	// IMP=0x000000000007097c
- (id)_existingValueForContact:(id)arg1;	// IMP=0x00000000000707f2
- (_Bool)_contactIsActive:(id)arg1;	// IMP=0x000000000007076e
- (_Bool)contactIsActive:(id)arg1;	// IMP=0x0000000000070623
- (id)_activeContactsValues;	// IMP=0x0000000000070527
@property(readonly, nonatomic) NSOrderedSet *activeContactsValues;
- (void)_stopAllSharingWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000701a0
- (void)stopAllSharingWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000070070
- (void)_stopSharingWithContactValue:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006fb8b
- (void)stopSharingWithContactValue:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006fa32
- (void)_didStartSharingWithContact:(id)arg1 withCapabilityType:(unsigned long long)arg2 error:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000006f738
- (void)_shareWithContactValue:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006e4b5
- (void)shareWithContactValue:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006e35c
- (void)_notifyDelegateContactsChanged;	// IMP=0x000000000006e216
- (id)initWithSharedTripServer:(id)arg1;	// IMP=0x000000000006e098

@end

