//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitServices/UISApplicationSupportDisplayEdgeInfo.h>

@interface UISApplicationSupportDisplayEdgeInfo (SpringBoard)
+ (id)sb_displayEdgeInfoForApplication:(id)arg1;	// IMP=0x00800000007275f7
+ (id)sb_floatingApplicationDisplayEdgeInfo;	// IMP=0x00800000007273cd
+ (id)sb_insetForHomeAffordanceApplicationDisplayEdgeInfo;	// IMP=0x00800000007273bb
+ (id)sb_thisDeviceDisplayEdgeInfo;	// IMP=0x0080000000727314
+ (id)sb_legacy_homeButtonDeviceDisplayEdgeInfo;	// IMP=0x0080000000727bce
+ (id)sb_legacy_roundCornerPadDisplayEdgeInfo;	// IMP=0x0080000000727acc
- (struct UIEdgeInsets)sb_orientedEdgeInsetsForInterfaceOrientation:(long long)arg1 traitCollection:(id)arg2;	// IMP=0x00100000007278df
- (void)sb_applyDisplayEdgeInfoToSceneSettings:(id)arg1;	// IMP=0x00100000007277c6
- (id)sb_displayEdgeInfoWithSafeAreaInsetsForStatusBarHeight:(double)arg1;	// IMP=0x0010000000727695
@end

