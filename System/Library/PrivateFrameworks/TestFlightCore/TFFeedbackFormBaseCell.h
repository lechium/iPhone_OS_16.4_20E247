//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UIView;
@protocol TFFeedbackDataUpdateProxy;

__attribute__((visibility("hidden")))
@interface TFFeedbackFormBaseCell : UITableViewCell
{
    id <TFFeedbackDataUpdateProxy> _updateProxy;	// 8 = 0x8
    UIView *_topSeparator;	// 16 = 0x10
    UIView *_bottomSeparator;	// 24 = 0x18
}

+ (struct CGSize)sizeForEntry:(id)arg1 dataSource:(id)arg2 fittingSize:(struct CGSize)arg3 inTraitEnvironment:(id)arg4;	// IMP=0x0010000000002594
- (void).cxx_destruct;	// IMP=0x000000000000294c
@property(retain, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain, nonatomic) UIView *topSeparator; // @synthesize topSeparator=_topSeparator;
@property(nonatomic) __weak id <TFFeedbackDataUpdateProxy> updateProxy; // @synthesize updateProxy=_updateProxy;
- (struct CGRect)_separatorFrameForTop:(_Bool)arg1 inLayoutBounds:(struct CGRect)arg2;	// IMP=0x00000000000027f2
- (id)_createSeparatorSubview;	// IMP=0x0000000000002779
- (void)_setupSeparatorViewsForAppearingInSectionLocation:(int)arg1;	// IMP=0x00000000000025d2
- (void)setDisplayedDataImageCollection:(id)arg1;	// IMP=0x00000000000025cc
- (void)setDisplayedDataNumber:(id)arg1;	// IMP=0x00000000000025c6
- (void)setDisplayedDataString:(id)arg1;	// IMP=0x00000000000025c0
- (void)setDisplayedDataGroupInclusionBool:(_Bool)arg1;	// IMP=0x00000000000025ba
- (unsigned long long)displayableDataType;	// IMP=0x00000000000025a2
- (void)prepareSeparatorsForCellInSectionLocation:(int)arg1;	// IMP=0x0000000000002566
- (void)applyContentsOfEntry:(id)arg1;	// IMP=0x0000000000002551
- (void)layoutSubviews;	// IMP=0x000000000000232d
@property(readonly, nonatomic, getter=isSelectable) _Bool selectable;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000022b3

@end

