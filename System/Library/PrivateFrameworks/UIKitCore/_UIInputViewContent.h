//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIInputView;

__attribute__((visibility("hidden")))
@interface _UIInputViewContent : UIView
{
    double _contentHeight;	// 144 = 0x90
    double _contentWidth;	// 152 = 0x98
    UIInputView *_inputView;	// 160 = 0xa0
    unsigned long long _unclippableCorners;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00000000009cdc91
@property(nonatomic) unsigned long long _unclippableCorners; // @synthesize _unclippableCorners;
- (void)_updateCornerClipping;	// IMP=0x00000000009cda22
- (struct CGSize)_contentSize;	// IMP=0x00000000009cda04
- (void)addSubview:(id)arg1;	// IMP=0x00000000009cd961
- (struct CGSize)_sizeFittingContentViews;	// IMP=0x00000000009cd759
- (void)_setToolbarBackgroundViewWithImage:(id)arg1;	// IMP=0x00000000009cd587
- (void)_setToolbarBackgroundImage:(id)arg1;	// IMP=0x00000000009cd441
- (_Bool)_isToolbar;	// IMP=0x00000000009cd385
- (id)initWithFrame:(struct CGRect)arg1 inputView:(id)arg2;	// IMP=0x00000000009cd2e7

@end
