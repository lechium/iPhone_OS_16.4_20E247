//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAlertController.h>

@class LAUIPearlGlyphView;

@interface FaceIdAlertViewController : UIAlertController
{
    LAUIPearlGlyphView *_glyph;	// 8 = 0x8
    CDUnknownBlockType _onDismiss;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000040e0
@property(copy, nonatomic) CDUnknownBlockType onDismiss; // @synthesize onDismiss=_onDismiss;
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000004033
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000000402b
- (int)_preferredStatusBarVisibility;	// IMP=0x0010000000004023
- (void)dismissWithDelay:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003d41
- (void)_shakeTitleLabel;	// IMP=0x001000000000383c
- (void)shake;	// IMP=0x00100000000037ba
@property(nonatomic) __weak LAUIPearlGlyphView *glyph; // @synthesize glyph=_glyph;

@end
