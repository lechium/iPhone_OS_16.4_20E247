//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppSupportUI/NUIContainerGridView.h>

@class MISSING_TYPE;

@interface _TtC9Reminders19TTRIPinnedListsView : NUIContainerGridView
{
    MISSING_TYPE *pinnedListsViewDelegate;	// 8 = 0x8
    MISSING_TYPE *selectedPinnedList;	// 1667719007 = 0x63675f5f
    MISSING_TYPE *dynamicDateGlyphCache;	// 1953523043 = 0x74706563
    MISSING_TYPE *pinnedLists;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *selectedStateShowsPinnedListColor;	// 0 = 0x0
    MISSING_TYPE *trailingLayoutMarginForControls;	// 5433976 = 0x52ea78
    MISSING_TYPE *selectionFollowsFocus;	// 272 = 0x110
    MISSING_TYPE *usesLargeTextLayout;	// 0 = 0x0
    MISSING_TYPE *dropTargetPinnedListID;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00400000002695f0
- (id)initWithArrangedSubviewRows:(id)arg1;	// IMP=0x0010000000269590
- (void)didSelectControl:(id)arg1;	// IMP=0x0010000000269340
- (void)didTapControl:(id)arg1;	// IMP=0x00100000002692e0
- (_Bool)_accessibilityHitTestShouldFallbackToNearestChild;	// IMP=0x00100000002672d0
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000266550
@property(nonatomic) _Bool userInteractionEnabled;
- (_Bool)isUserInteractionEnabled;	// IMP=0x0010000000266380
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000266350

@end

