//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SKUIChartColumnHeaderView : UIControl
{
    NSArray *_buttons;	// 8 = 0x8
    long long _selectedTitleIndex;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002a57e9
@property(nonatomic) long long selectedTitleIndex; // @synthesize selectedTitleIndex=_selectedTitleIndex;
- (void)_reloadSelectedButton;	// IMP=0x00000000002a5729
@property(readonly, nonatomic) double edgePadding;
- (void)_buttonAction:(id)arg1;	// IMP=0x00000000002a5690
- (void)sizeToFit;	// IMP=0x00000000002a5424
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000002a53a4
- (void)layoutSubviews;	// IMP=0x00000000002a50a0
@property(copy, nonatomic) NSArray *titles;
- (void)dealloc;	// IMP=0x00000000002a4822

@end

