//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, UIBarButtonItem, UIView;

__attribute__((visibility("hidden")))
@interface _UIButtonBarSpacerLayout
{
    UIBarButtonItem *_item;	// 24 = 0x18
    UIView *_spacer;	// 32 = 0x20
    NSLayoutConstraint *_requestedSize;	// 40 = 0x28
    NSLayoutConstraint *_minimumSize;	// 48 = 0x30
    NSLayoutConstraint *_equalSize;	// 56 = 0x38
    _Bool _flexible;	// 64 = 0x40
    long long _spacerType;	// 72 = 0x48
}

+ (long long)typeOfSpacerBetweenLayout:(id)arg1 andLayout:(id)arg2;	// IMP=0x006000000012d810
+ (id)spacerForLayoutMetrics:(id)arg1 betweenLayout:(id)arg2 andLayout:(id)arg3;	// IMP=0x006000000012d6fe
+ (id)_updateSpacer:(id)arg1 layoutMetrics:(id)arg2 spacerType:(long long)arg3;	// IMP=0x006000000012d664
- (void).cxx_destruct;	// IMP=0x000000000012ddae
@property(readonly, nonatomic) long long spacerType; // @synthesize spacerType=_spacerType;
- (id)description;	// IMP=0x000000000012dc93
- (void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;	// IMP=0x000000000012db80
- (_Bool)suppressSpacing;	// IMP=0x000000000012db78
- (void)_addLayoutViews:(id)arg1;	// IMP=0x000000000012db55
- (void)_configure;	// IMP=0x000000000012d884
- (id)barButtonItem;	// IMP=0x000000000012d86f
- (_Bool)isSpaceLayout;	// IMP=0x000000000012d867
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1;	// IMP=0x000000000012d820
- (id)initWithLayoutMetrics:(id)arg1 barButtonItem:(id)arg2;	// IMP=0x000000000012d526
- (id)initWithLayoutMetrics:(id)arg1;	// IMP=0x000000000012d512

@end
