//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IXSHealthKitDataUninstallAlert
{
}

+ (void)viewHealthKitDataForAppWithBundleID:(id)arg1;	// IMP=0x0020000000061dd8
+ (void)healthKitDataPresentForAppWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000061a01
+ (Class)hkBehaviorClass;	// IMP=0x00100000000617e0
+ (Class)hkSourceStoreClass;	// IMP=0x00100000000617bb
+ (Class)hkHealthStoreClass;	// IMP=0x0010000000061796
+ (void)openHealthKitClasses;	// IMP=0x001000000006167c
- (id)cancelButtonLabel;	// IMP=0x00400000000619e1
- (id)defaultButtonLabel;	// IMP=0x00100000000619c1
- (id)message;	// IMP=0x0010000000061947
- (id)title;	// IMP=0x0010000000061875
- (id)initWithAppRecord:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x0010000000061805

@end

