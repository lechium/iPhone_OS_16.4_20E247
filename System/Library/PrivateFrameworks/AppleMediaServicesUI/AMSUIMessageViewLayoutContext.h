//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSUIMessageView, NSMutableArray, UIBezierPath;

__attribute__((visibility("hidden")))
@interface AMSUIMessageViewLayoutContext : NSObject
{
    _Bool _isDirty;	// 8 = 0x8
    NSMutableArray *_footerButtonFrames;	// 16 = 0x10
    NSMutableArray *_separatorViewFrames;	// 24 = 0x18
    AMSUIMessageView *_messageView;	// 32 = 0x20
    NSMutableArray *_footerButtonFramesPreFlatten;	// 40 = 0x28
    UIBezierPath *_textViewExclusionPath;	// 48 = 0x30
    struct CGSize _contentSize;	// 56 = 0x38
    struct CGSize _lastFittingSize;	// 72 = 0x48
    struct CGSize _lastSize;	// 88 = 0x58
    struct CGSize _textViewContentHuggingSize;	// 104 = 0x68
    struct CGRect _accessoryViewFrame;	// 120 = 0x78
    struct CGRect _accessorySecondaryViewFrame;	// 152 = 0x98
    struct CGRect _imageViewFrame;	// 184 = 0xb8
    struct CGRect _maskViewFrame;	// 216 = 0xd8
    struct CGRect _textViewFrame;	// 248 = 0xf8
    struct CGRect _mainContentFrame;	// 280 = 0x118
    struct CGRect _footerContainerViewFrame;	// 312 = 0x138
}

- (void).cxx_destruct;	// IMP=0x000000000004d832
@property(retain, nonatomic) UIBezierPath *textViewExclusionPath; // @synthesize textViewExclusionPath=_textViewExclusionPath;
@property(nonatomic) _Bool isDirty; // @synthesize isDirty=_isDirty;
@property(nonatomic) struct CGSize textViewContentHuggingSize; // @synthesize textViewContentHuggingSize=_textViewContentHuggingSize;
@property(retain, nonatomic) NSMutableArray *footerButtonFramesPreFlatten; // @synthesize footerButtonFramesPreFlatten=_footerButtonFramesPreFlatten;
@property(nonatomic) struct CGRect footerContainerViewFrame; // @synthesize footerContainerViewFrame=_footerContainerViewFrame;
@property(nonatomic) struct CGRect mainContentFrame; // @synthesize mainContentFrame=_mainContentFrame;
@property(nonatomic) struct CGSize lastSize; // @synthesize lastSize=_lastSize;
@property(nonatomic) struct CGSize lastFittingSize; // @synthesize lastFittingSize=_lastFittingSize;
@property(nonatomic) __weak AMSUIMessageView *messageView; // @synthesize messageView=_messageView;
@property(nonatomic) struct CGRect textViewFrame; // @synthesize textViewFrame=_textViewFrame;
@property(retain, nonatomic) NSMutableArray *separatorViewFrames; // @synthesize separatorViewFrames=_separatorViewFrames;
@property(nonatomic) struct CGRect maskViewFrame; // @synthesize maskViewFrame=_maskViewFrame;
@property(nonatomic) struct CGRect imageViewFrame; // @synthesize imageViewFrame=_imageViewFrame;
@property(retain, nonatomic) NSMutableArray *footerButtonFrames; // @synthesize footerButtonFrames=_footerButtonFrames;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) struct CGRect accessorySecondaryViewFrame; // @synthesize accessorySecondaryViewFrame=_accessorySecondaryViewFrame;
@property(nonatomic) struct CGRect accessoryViewFrame; // @synthesize accessoryViewFrame=_accessoryViewFrame;
- (double)totalFooterButtonHeight;	// IMP=0x000000000004d3ed
- (double)separatorThickness;	// IMP=0x000000000004d38a
- (double)leadingContentTextBaseline;	// IMP=0x000000000004d0f1
- (_Bool)isImageViewHidden;	// IMP=0x000000000004d030
@property(readonly, nonatomic) double accessorySpacing;
@property(readonly, nonatomic) _Bool shouldUseStackedLayout;
- (_Bool)_shouldTextViewTextFillUnderCloseButton;	// IMP=0x000000000004ce69
- (_Bool)_shouldOffsetFooterButtonFromMainContentView;	// IMP=0x000000000004ce01
- (double)_scaledUIValueForValue:(double)arg1;	// IMP=0x000000000004cd48
- (_Bool)_isTextOnlyBanner;	// IMP=0x000000000004ccc9
- (_Bool)_isSymbolImage;	// IMP=0x000000000004cc34
- (_Bool)_isFooterButtonPartOfContentFrame;	// IMP=0x000000000004cbdf
- (_Bool)_isIconImageTopAligned;	// IMP=0x000000000004cb20
- (_Bool)_isAccessoryViewLeading;	// IMP=0x000000000004cb18
- (double)_interitemSpacing;	// IMP=0x000000000004ca63
- (double)_imageToLabelSpacing;	// IMP=0x000000000004c9f8
- (double)_imageLength;	// IMP=0x000000000004c46e
- (struct CGRect)_effectiveTextViewFrame;	// IMP=0x000000000004c38c
- (double)_footerMinimumHeight;	// IMP=0x000000000004c2f5
- (double)_footerButtonSpacing;	// IMP=0x000000000004c27e
- (unsigned long long)effectiveImageStyle;	// IMP=0x000000000004c1ea
- (double)_bannerMaxTextWidth;	// IMP=0x000000000004c16d
- (struct CGSize)_makeImageViewSize;	// IMP=0x000000000004c060
@property(readonly, nonatomic) struct NSDirectionalEdgeInsets contentLayoutMargins;
- (void)_calculateFooterButtonFrames;	// IMP=0x000000000004b7c3
- (void)calculateTextViewExclusionFrame;	// IMP=0x000000000004b381
- (void)calculateTextViewSizeInFrame:(struct CGRect)arg1 dirty:(_Bool)arg2;	// IMP=0x000000000004af18
- (void)calculateMainContentFrameRootFrame:(struct CGRect)arg1;	// IMP=0x000000000004ac10
- (void)calculateAccessorySecondaryViewSize;	// IMP=0x000000000004aaf6
- (void)calculateAccessoryViewSize;	// IMP=0x000000000004a9dc
- (void)calculateAccessorySecondaryViewFrame;	// IMP=0x000000000004a8be
- (void)calculateAccessoryViewFrame;	// IMP=0x000000000004a6dc
- (void)_updateWithRootFrame:(struct CGRect)arg1;	// IMP=0x000000000004881a
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000004832c
- (void)layoutSubviewFrames;	// IMP=0x00000000000481fd
- (void)invalidate;	// IMP=0x00000000000481ba
- (id)initWithMessageView:(id)arg1;	// IMP=0x0000000000048040

@end

