//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class FBSDisplayIdentity, SBAppLayout, SBAppSwitcherSnapshotImageCache;
@protocol SBApplicationSceneHandleProviding;

@protocol SBAppSwitcherSnapshotImageCacheDelegate <NSObject>
- (FBSDisplayIdentity *)displayIdentityForImageCache:(SBAppSwitcherSnapshotImageCache *)arg1;
- (id <SBApplicationSceneHandleProviding>)sceneHandleProviderForImageCache:(SBAppSwitcherSnapshotImageCache *)arg1;
- (struct CGSize)snapshotSizeForItemWithRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2 interfaceOrientation:(long long)arg3 inImageCache:(SBAppSwitcherSnapshotImageCache *)arg4;
- (double)scaleForDownscaledSnapshotsOfAppLayout:(SBAppLayout *)arg1 inImageCache:(SBAppSwitcherSnapshotImageCache *)arg2;
- (long long)orientationForSnapshotOfAppLayout:(SBAppLayout *)arg1 inImageCache:(SBAppSwitcherSnapshotImageCache *)arg2;
@end

