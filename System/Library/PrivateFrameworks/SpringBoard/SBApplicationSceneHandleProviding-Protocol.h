//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBApplicationSceneIdentityProviding-Protocol.h>

@class SBApplicationSceneHandle, SBApplicationSceneHandleRequest;

@protocol SBApplicationSceneHandleProviding <SBApplicationSceneIdentityProviding>
- (SBApplicationSceneHandle *)fetchOrCreateApplicationSceneHandleForRequest:(SBApplicationSceneHandleRequest *)arg1;
@end
