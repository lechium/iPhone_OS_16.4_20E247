//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIWindow.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface _SKUIClickThroughWindow : UIWindow
{
    UIView *_interactionView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002b0e6d
@property(retain, nonatomic) UIView *interactionView; // @synthesize interactionView=_interactionView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000002b0de2
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000002b0ce6

@end

