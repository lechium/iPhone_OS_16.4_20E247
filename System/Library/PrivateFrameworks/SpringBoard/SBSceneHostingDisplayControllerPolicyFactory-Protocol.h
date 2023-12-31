//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class FBSDisplayConfiguration, FBSDisplayConfigurationBuilder, FBSDisplayIdentity;
@protocol SBSceneHostingDisplayControllerPolicy;

@protocol SBSceneHostingDisplayControllerPolicyFactory <NSObject>
- (void)transformDisplayConfiguration:(FBSDisplayConfiguration *)arg1 forControllersWithBuilder:(FBSDisplayConfigurationBuilder *)arg2;
- (id <SBSceneHostingDisplayControllerPolicy>)policyForConnectingDisplay:(FBSDisplayIdentity *)arg1;
@end

