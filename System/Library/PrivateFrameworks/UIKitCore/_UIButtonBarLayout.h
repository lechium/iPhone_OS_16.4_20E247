//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UIBarButtonItem;
@protocol _UIButtonBarLayoutMetricsData;

__attribute__((visibility("hidden")))
@interface _UIButtonBarLayout : NSObject
{
    id <_UIButtonBarLayoutMetricsData> _layoutMetrics;	// 8 = 0x8
    _Bool _dirty;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000012d502
@property(nonatomic, getter=isDirty) _Bool dirty; // @synthesize dirty=_dirty;
- (id)description;	// IMP=0x000000000012d452
- (void)addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;	// IMP=0x000000000012d3da
- (void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;	// IMP=0x000000000012d3d4
- (void)addLayoutGuides:(id)arg1;	// IMP=0x000000000012d382
- (void)_addLayoutGuides:(id)arg1;	// IMP=0x000000000012d37c
- (void)addLayoutViews:(id)arg1;	// IMP=0x000000000012d32a
- (void)_addLayoutViews:(id)arg1;	// IMP=0x000000000012d324
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1;	// IMP=0x000000000012d31b
- (void)addLayoutViews:(id)arg1 layoutGuides:(id)arg2 constraintsToActivate:(id)arg3 constraintsToDeactivate:(id)arg4;	// IMP=0x000000000012d257
- (void)setUseGroupSizing:(_Bool)arg1;	// IMP=0x000000000012d251
- (_Bool)useGroupSizing;	// IMP=0x000000000012d249
- (void)setSuppressSpacing:(_Bool)arg1;	// IMP=0x000000000012d243
- (_Bool)suppressSpacing;	// IMP=0x000000000012d23b
- (void)dirtyLayoutForPlainAppearanceChange:(_Bool)arg1 doneAppearanceChanged:(_Bool)arg2;	// IMP=0x000000000012d235
- (_Bool)compact;	// IMP=0x000000000012d20d
- (void)configure;	// IMP=0x000000000012d1cf
- (id)_metricsData;	// IMP=0x000000000012d1c1
@property(readonly, nonatomic) NSArray *subLayouts;
@property(readonly, nonatomic) UIBarButtonItem *barButtonItem;
@property(readonly, nonatomic) _Bool isGroupLayout;
@property(readonly, nonatomic) _Bool isSpaceLayout;
- (void)_configure;	// IMP=0x000000000012d19b
- (_Bool)_shouldBeDirty;	// IMP=0x000000000012d193
- (_Bool)shouldHorizontallyCenterView:(id)arg1;	// IMP=0x000000000012d18b
- (id)initWithLayoutMetrics:(id)arg1;	// IMP=0x000000000012d114
- (id)init;	// IMP=0x000000000012d0e9

@end
