//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKAcknowledgmentGlyphView.h"

@class CKAcknowledgmentGlyphImageView;

__attribute__((visibility("hidden")))
@interface CKQuestionAcknowledgmentGlyphView : CKAcknowledgmentGlyphView
{
    CKAcknowledgmentGlyphImageView *_glyph;	// 40 = 0x28
    CKAcknowledgmentGlyphImageView *_dot;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000005514f7
@property(retain, nonatomic) CKAcknowledgmentGlyphImageView *dot; // @synthesize dot=_dot;
@property(retain, nonatomic) CKAcknowledgmentGlyphImageView *glyph; // @synthesize glyph=_glyph;
- (double)animationDuration;	// IMP=0x000000000055149f
- (void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000551092
- (struct CGPoint)glyphOffset;	// IMP=0x0000000000551050
- (long long)acknowledgmentType;	// IMP=0x0000000000551045
- (void)setGlyphColor:(id)arg1;	// IMP=0x0000000000550e7d
- (void)layoutSubviews;	// IMP=0x0000000000550a3b
- (id)initWithFrame:(struct CGRect)arg1 color:(BOOL)arg2;	// IMP=0x0000000000550878

@end

