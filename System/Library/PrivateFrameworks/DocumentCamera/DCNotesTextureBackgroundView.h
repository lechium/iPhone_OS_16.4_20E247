//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class DCNotesTextureView, NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface DCNotesTextureBackgroundView : UIView
{
    _Bool _scrollsTexture;	// 8 = 0x8
    DCNotesTextureView *_textureView;	// 16 = 0x10
    NSLayoutConstraint *_textureYConstraint;	// 24 = 0x18
    NSLayoutConstraint *_textureHeightConstraint;	// 32 = 0x20
}

+ (id)colorWithPaperTexturePatternImage;	// IMP=0x006000000003ea43
+ (id)textureImage;	// IMP=0x006000000003ea23
- (void).cxx_destruct;	// IMP=0x000000000003f400
@property(retain, nonatomic) NSLayoutConstraint *textureHeightConstraint; // @synthesize textureHeightConstraint=_textureHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textureYConstraint; // @synthesize textureYConstraint=_textureYConstraint;
@property _Bool scrollsTexture; // @synthesize scrollsTexture=_scrollsTexture;
@property(readonly, nonatomic) DCNotesTextureView *textureView; // @synthesize textureView=_textureView;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000003f29c
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000003f1b5
- (void)setContentOffset:(struct CGPoint)arg1;	// IMP=0x000000000003eff7
- (void)commonInitWithScrollingTextures:(_Bool)arg1 hasAlpha:(_Bool)arg2;	// IMP=0x000000000003ec78
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003ec25
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000003ec0f
- (id)initWithFrame:(struct CGRect)arg1 scrollingTextures:(_Bool)arg2 hasAlpha:(_Bool)arg3;	// IMP=0x000000000003eb9c
- (double)heightByCoveringHeight:(double)arg1 withImage:(id)arg2;	// IMP=0x000000000003eb19

@end

