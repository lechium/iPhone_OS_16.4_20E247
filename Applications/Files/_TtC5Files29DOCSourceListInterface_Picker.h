//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor, UIImage;

@interface _TtC5Files29DOCSourceListInterface_Picker
{
}

- (id)init;	// IMP=0x00200000003cd920
- (id)nonThumbnailedIconForItem:(id)arg1;	// IMP=0x00100000003cd910
- (_Bool)iconForSourceRequireHierarchicalColors:(id)arg1;	// IMP=0x00100000003cd900
- (id)iconForSource:(id)arg1;	// IMP=0x00100000003cd8d0
- (id)ejectIconFor:(long long)arg1 iconColor:(id)arg2;	// IMP=0x00100000003cd820
@property(nonatomic, readonly) UIImage *iconForSyncError;
@property(nonatomic, readonly) UIImage *iconForShared;
@property(nonatomic, readonly) UIImage *iconForRecents;
@property(nonatomic, readonly) _Bool overridesBackgroundColorUsingEffectiveAppearance;
@property(nonatomic, readonly) UIColor *nonDynamicEnabledTextColor;

@end

