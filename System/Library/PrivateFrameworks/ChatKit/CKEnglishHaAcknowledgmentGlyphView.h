//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKAcknowledgmentGlyphView.h"

@class CKAcknowledgmentGlyphImageView;

__attribute__((visibility("hidden")))
@interface CKEnglishHaAcknowledgmentGlyphView : CKAcknowledgmentGlyphView
{
    CKAcknowledgmentGlyphImageView *_h1;	// 40 = 0x28
    CKAcknowledgmentGlyphImageView *_a1;	// 48 = 0x30
    CKAcknowledgmentGlyphImageView *_h2;	// 56 = 0x38
    CKAcknowledgmentGlyphImageView *_a2;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000054fb0a
@property(retain, nonatomic) CKAcknowledgmentGlyphImageView *a2; // @synthesize a2=_a2;
@property(retain, nonatomic) CKAcknowledgmentGlyphImageView *h2; // @synthesize h2=_h2;
@property(retain, nonatomic) CKAcknowledgmentGlyphImageView *a1; // @synthesize a1=_a1;
@property(retain, nonatomic) CKAcknowledgmentGlyphImageView *h1; // @synthesize h1=_h1;
- (double)animationDuration;	// IMP=0x000000000054fa68
- (void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000054f69c
- (struct CGPoint)glyphOffset;	// IMP=0x000000000054f65a
- (long long)acknowledgmentType;	// IMP=0x000000000054f64f
- (void)setGlyphColor:(id)arg1;	// IMP=0x000000000054f374
- (void)layoutSubviews;	// IMP=0x000000000054f016
- (id)initWithFrame:(struct CGRect)arg1 color:(BOOL)arg2;	// IMP=0x000000000054ec19

@end
