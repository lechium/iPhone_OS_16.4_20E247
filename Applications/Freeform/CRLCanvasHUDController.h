//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CRLCanvasView, NSMutableSet, NSString, NSTimer;

@interface CRLCanvasHUDController : UIViewController
{
    double _lastTimeUpdated;	// 8 = 0x8
    NSString *_lastStringSet;	// 16 = 0x10
    NSTimer *_stringTimer;	// 24 = 0x18
    NSMutableSet *_objectsShowingHUD;	// 32 = 0x20
    CRLCanvasView *_canvasView;	// 40 = 0x28
    struct CGPoint _touchPoint;	// 48 = 0x30
    struct CGPoint _HUDPoint;	// 64 = 0x40
    struct CGPoint _anchorPoint;	// 80 = 0x50
    unsigned long long _HUDOffset;	// 96 = 0x60
}

+ (id)sharedHUDController;	// IMP=0x00200000002c4c45
- (void).cxx_destruct;	// IMP=0x00200000002c68b6
@property(readonly, nonatomic) NSString *clraxLastStringSet;
- (void)p_setHidden:(_Bool)arg1;	// IMP=0x00100000002c6855
- (struct CGRect)p_touchRectForHUDWithFrame:(struct CGRect)arg1;	// IMP=0x00100000002c6816
- (struct CGRect)p_frameForHUDWithSize:(struct CGSize)arg1 anchoredAtPoint:(struct CGPoint)arg2 insideRect:(struct CGRect)arg3;	// IMP=0x00100000002c66ab
- (struct CGRect)p_HUDFrame:(struct CGRect)arg1 offset:(unsigned long long)arg2 fromTouchRect:(struct CGRect)arg3 insideRect:(struct CGRect)arg4 overlap:(double *)arg5 shift:(double *)arg6;	// IMP=0x00100000002c6490
- (void)p_layoutUpdatingOffset:(_Bool)arg1;	// IMP=0x00100000002c5d25
- (void)p_displayText:(id)arg1;	// IMP=0x00100000002c5aae
- (_Bool);	// IMP=0x00100000002c5aa6
- (void)p_hideHUD;	// IMP=0x00100000002c59c1
- (void)p_showHUDAtPoint:(struct CGPoint)arg1 inCanvasView:(id)arg2 withNudge:(struct CGSize)arg3 size:(unsigned long long)arg4 anchorPoint:(struct CGPoint)arg5;	// IMP=0x00100000002c51a7
- (void)loadView;	// IMP=0x00100000002c5152
- (id)hudView;	// IMP=0x00100000002c50f3
- (id)init;	// IMP=0x00100000002c50a3
- (void)p_labelTextTimerFired;	// IMP=0x00100000002c504b
- (void)hideHUDForKey:(id)arg1;	// IMP=0x00100000002c4f53
- (void)showHUDForKey:(id)arg1 forTouchPoint:(struct CGPoint)arg2 inCanvasView:(id)arg3 withNudge:(struct CGSize)arg4 size:(unsigned long long)arg5 anchorPoint:(struct CGPoint)arg6;	// IMP=0x00100000002c4ea3
- (void)showHUDForKey:(id)arg1 forTouchPoint:(struct CGPoint)arg2 inCanvasView:(id)arg3 withNudge:(struct CGSize)arg4 size:(unsigned long long)arg5;	// IMP=0x00100000002c4e83
- (void)showHUDForKey:(id)arg1 forTouchPoint:(struct CGPoint)arg2 inCanvasView:(id)arg3 withUpwardsNudge:(double)arg4 size:(unsigned long long)arg5;	// IMP=0x00100000002c4e61
- (void)showHUDForKey:(id)arg1 forTouchPoint:(struct CGPoint)arg2 inCanvasView:(id)arg3 withUpwardsNudge:(double)arg4;	// IMP=0x00100000002c4e49
- (void)setLabelText:(id)arg1;	// IMP=0x00100000002c4cca
- (void)dealloc;	// IMP=0x00100000002c4bfc
- (void)p_commonInit;	// IMP=0x00100000002c4bcc

@end
