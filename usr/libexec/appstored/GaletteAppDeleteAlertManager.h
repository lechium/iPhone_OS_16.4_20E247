//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GaletteAppDeleteAlertManager : NSObject
{
}

+ (void)_appDeleteAlertIsEnabledWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0040000000272d0d
+ (id)_galetteAppForBundleID:(id)arg1;	// IMP=0x0010000000272aaa
+ (void)_cleanupAfterUninstallingBundleID:(id)arg1;	// IMP=0x0010000000272830
+ (void)_showUninstallAlertForApp:(id)arg1 bundleID:(id)arg2;	// IMP=0x0010000000272350
+ (void)handleUninstalledAppsWithBundleIDs:(id)arg1;	// IMP=0x0010000000271e75
+ (void)handleInstalledAppsWithBundleIDs:(id)arg1;	// IMP=0x0010000000271a4e

@end

