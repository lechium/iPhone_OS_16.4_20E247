//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBApplicationServerDelegate-Protocol.h>

@class NSString, SBApplicationServer;
@protocol FBSServiceFacilityClientHandle;

@protocol SBApplicationServerMultitaskingShortcutDelegate <SBApplicationServerDelegate>
- (void)applicationServer:(SBApplicationServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 fetchSupportedShortcutActionsForBundleIdentifier:(NSString *)arg3 withCompletion:(void (^)(unsigned long long))arg4;
- (void)applicationServer:(SBApplicationServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 performShortcutAction:(long long)arg3 forBundleIdentifier:(NSString *)arg4;
@end
