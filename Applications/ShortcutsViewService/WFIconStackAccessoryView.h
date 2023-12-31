//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, WFIconStackView;

@interface WFIconStackAccessoryView : UIView
{
    WFIconStackView *_stackView;	// 8 = 0x8
    NSString *_workflowID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000047ef
@property(readonly, copy, nonatomic) NSString *workflowID; // @synthesize workflowID=_workflowID;
@property(readonly, nonatomic) WFIconStackView *stackView; // @synthesize stackView=_stackView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 forLayoutMode:(long long)arg2;	// IMP=0x00100000000047af
- (id)appIconAverageColor;	// IMP=0x001000000000475f
- (void)openShortcutInEditor;	// IMP=0x001000000000464b
- (void)layoutSubviews;	// IMP=0x00100000000045b5
- (void)transitionToIconOnlyState;	// IMP=0x0010000000004578
- (void)transitionToStackedState;	// IMP=0x001000000000453b
- (id)initWithIcon:(id)arg1 workflowID:(id)arg2;	// IMP=0x00100000000043d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

