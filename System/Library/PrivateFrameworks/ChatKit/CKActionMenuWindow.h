//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAutoRotatingWindow.h>

@class CKActionMenuView;

__attribute__((visibility("hidden")))
@interface CKActionMenuWindow : UIAutoRotatingWindow
{
    _Bool _shouldDismissOnTap;	// 17 = 0x11
    CKActionMenuView *_actionMenuView;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0060000000382e39
- (void).cxx_destruct;	// IMP=0x000000000038357e
@property(nonatomic) _Bool shouldDismissOnTap; // @synthesize shouldDismissOnTap=_shouldDismissOnTap;
@property(retain, nonatomic) CKActionMenuView *actionMenuView; // @synthesize actionMenuView=_actionMenuView;
- (_Bool)_canAffectStatusBarAppearance;	// IMP=0x0000000000383531
- (void)actionMenuGestureRecognized:(id)arg1;	// IMP=0x00000000003834bf
- (void)dismissActionMenuViewAnimated:(_Bool)arg1;	// IMP=0x0000000000383392
- (void)presentActionMenuView:(id)arg1 fromPoint:(struct CGPoint)arg2 inView:(id)arg3 animated:(_Bool)arg4;	// IMP=0x0000000000382f5e
- (_Bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x0000000000382db1
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000382d54

@end

