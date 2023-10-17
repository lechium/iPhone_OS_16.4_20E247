//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface (null) (ManagedSettingsAgent)
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x002000000002c990
- (void)handleAction:(long long)arg1 webDomain:(id)arg2 categoryIdentifier:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000002d1d0
- (void)handleAction:(long long)arg1 categoryIdentifier:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002d140
- (void)handleAction:(long long)arg1 bundleIdentifier:(id)arg2 categoryIdentifier:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000002d100
- (void)fetchConfigurationForWebDomain:(id)arg1 categoryIdentifier:(id)arg2 categoryName:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000002cfd0
- (void)fetchConfigurationForCategoryIdentifier:(id)arg1 categoryName:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002cf00
- (void)fetchConfigurationForBundleIdentifier:(id)arg1 categoryIdentifier:(id)arg2 categoryName:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000002cec0
- (void)askToOverrideUnremovabilityOfApplication:(id)arg1 teamIdentifier:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002cea0
- (void)clearAllSettingsForRecordIdentifier:(id)arg1 storeContainer:(id)arg2 storeName:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000002cd60
- (void)removeValuesForSettingNames:(id)arg1 recordIdentifier:(id)arg2 storeContainer:(id)arg3 storeName:(id)arg4 replyHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000002cd40
- (void)setValues:(id)arg1 recordIdentifier:(id)arg2 storeContainer:(id)arg3 storeName:(id)arg4 replyHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000002cbc0
- (void)getValuesForSettingNames:(id)arg1 recordIdentifier:(id)arg2 storeContainer:(id)arg3 storeName:(id)arg4 replyHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000002cba0
- (void)effectiveMediaSettings:(CDUnknownBlockType)arg1;	// IMP=0x001000000002cb50
- (void)updateEffectiveSettings:(CDUnknownBlockType)arg1;	// IMP=0x001000000002caf0
- (void)clearEffectiveSubscription:(_Bool)arg1;	// IMP=0x001000000002d340
- (void)subscribeToEffectiveChangesForGroups:(id)arg1 objC:(_Bool)arg2;	// IMP=0x001000000002d2f0
@end
