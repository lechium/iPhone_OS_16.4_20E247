//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_HMCameraControl.h"

@class HMCameraSnapshot;
@protocol _HMCameraSnapshotControlDelegate;

__attribute__((visibility("hidden")))
@interface _HMCameraSnapshotControl : _HMCameraControl
{
    HMCameraSnapshot *_mostRecentSnapshot;	// 16 = 0x10
    id <_HMCameraSnapshotControlDelegate> _delegate;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x006000000003ad46
- (void).cxx_destruct;	// IMP=0x000000000003aaa9
- (void)_handleMostRecentSnapshotUpdatedMessage:(id)arg1;	// IMP=0x000000000003a946
- (void)_handleCreateSnapshotWithBulletinContext:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003a6ce
- (void)_notifyDelegateOfMostRecentSnapshotUpdated;	// IMP=0x000000000003a5a4
- (void)_notifyDelegateOfDidTakeSnapshot:(id)arg1 error:(id)arg2;	// IMP=0x000000000003a450
- (void)_handleMostRecentSnapshot:(id)arg1;	// IMP=0x000000000003a436
- (void)_handleSnapshot:(id)arg1 error:(id)arg2 isMostRecent:(_Bool)arg3;	// IMP=0x000000000003a038
- (void)_fetchCameraSnapshotForBulletinContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000039995
- (void)_takeSnapshot;	// IMP=0x00000000000395c9
- (void)_registerNotificationHandlers;	// IMP=0x000000000003954c
- (void)__configureWithContext:(id)arg1 home:(id)arg2;	// IMP=0x0000000000039398
- (void)mergeNewSnapshotControl:(id)arg1;	// IMP=0x0000000000039133
- (void)fetchCameraSnapshotForBulletinContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000038e31
- (void)takeSnapshot;	// IMP=0x0000000000038cf4
@property(retain) HMCameraSnapshot *mostRecentSnapshot; // @synthesize mostRecentSnapshot=_mostRecentSnapshot;
@property __weak id <_HMCameraSnapshotControlDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithCameraProfile:(id)arg1 profileUniqueIdentifier:(id)arg2 mostRecentSnapshot:(id)arg3;	// IMP=0x0000000000038b53

@end
