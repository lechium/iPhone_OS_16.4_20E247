//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSDateFormatter, NSString, UIButton, UIImageView, _UICalendarDataModel, _UIDatePickerLinkedLabel;
@protocol _UICalendarHeaderViewDelegate;

__attribute__((visibility("hidden")))
@interface _UICalendarHeaderView : UIView
{
    NSDateFormatter *_longFormatter;	// 8 = 0x8
    NSDateFormatter *_shortFormatter;	// 16 = 0x10
    UIView *_monthYearContainer;	// 24 = 0x18
    _UIDatePickerLinkedLabel *_monthYearLabel;	// 32 = 0x20
    UIImageView *_chevron;	// 40 = 0x28
    UIButton *_previousMonthButton;	// 48 = 0x30
    UIButton *_nextMonthButton;	// 56 = 0x38
    _Bool _expanded;	// 64 = 0x40
    id <_UICalendarHeaderViewDelegate> _delegate;	// 72 = 0x48
    _UICalendarDataModel *_dataModel;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000001364c97
@property(readonly, nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) _UICalendarDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) __weak id <_UICalendarHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateMonthButtonVisibility;	// IMP=0x0000000001364bc8
- (void)_updateMonthButtonEnablement;	// IMP=0x0000000001364a51
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x0000000001364820
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000001364667
- (void)setExpanded:(_Bool)arg1;	// IMP=0x0000000001364653
- (void)_didTap:(id)arg1;	// IMP=0x0000000001364607
- (void)_adjustMonth:(id)arg1;	// IMP=0x0000000001364594
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;	// IMP=0x00000000013643f1
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000013643df
- (void)layoutSubviews;	// IMP=0x0000000001363b4f
- (void)_updateFont;	// IMP=0x000000000136386c
- (void)_updateMonthYearLabel;	// IMP=0x000000000136367c
- (void)tintColorDidChange;	// IMP=0x000000000136362e
- (void)didMoveToWindow;	// IMP=0x00000000013635c0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000013634e0
- (void)didUpdateDateRange;	// IMP=0x00000000013634ce
- (void)didUpdateFontDesign;	// IMP=0x00000000013634bc
- (void)didUpdateVisibleMonth;	// IMP=0x000000000136348e
- (void)didUpdateTimeZone;	// IMP=0x0000000001363460
- (void)didUpdateLocale;	// IMP=0x0000000001363432
- (void)didUpdateCalendar;	// IMP=0x0000000001363404
- (void)_setupViewHierarchy;	// IMP=0x0000000001362efb
- (void)_setupDateFormatter;	// IMP=0x0000000001362d1c
- (id)initWithDataModel:(id)arg1;	// IMP=0x0000000001362c33

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

