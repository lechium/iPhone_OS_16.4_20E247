//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_$s12GameCenterUI17DynamicTypeButtonCN.h"

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI19RoundedTitledButton : _$s12GameCenterUI17DynamicTypeButtonCN
{
    MISSING_TYPE *height;	// 0 = 0x0
    MISSING_TYPE *usesCapsuleRounding;	// 0 = 0x0
    MISSING_TYPE *tapHandler;	// 6702320 = 0x6644f0
    MISSING_TYPE *visualEffectView;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000046dfa0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000046df00
- (void)layoutSubviews;	// IMP=0x000000000046ded0
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;	// IMP=0x000000000046dc60
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000046dc20
- (void)_setCornerRadius:(double)arg1;	// IMP=0x000000000046db60
@property(nonatomic) double _cornerRadius;
- (void)didTapButton:(id)arg1;	// IMP=0x000000000046daa0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000046d9a0

@end

