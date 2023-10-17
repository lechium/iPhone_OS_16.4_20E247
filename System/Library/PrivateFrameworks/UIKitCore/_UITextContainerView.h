//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSDictionary, NSLayoutManager, NSString, NSTextContainer, UIColor, UIScrollView, UITextView, _UITextLayoutControllerBase;
@protocol _UITextCanvas, _UITextContainerViewDelegate, _UITextLayoutController;

__attribute__((visibility("hidden")))
@interface _UITextContainerView : UIView
{
    struct UIEdgeInsets _textContainerInset;	// 144 = 0x90
    struct CGPoint _textContainerOrigin;	// 176 = 0xb0
    struct CGSize _minSize;	// 192 = 0xc0
    struct CGSize _maxSize;	// 208 = 0xd0
    NSTextContainer *_textContainer;	// 224 = 0xe0
    NSDictionary *_linkTextAttributes;	// 232 = 0xe8
    unsigned long long _invalidationSeqNo;	// 240 = 0xf0
    long long _invalidationSeqClipsToBounds;	// 248 = 0xf8
    struct {
        unsigned int textContainerOriginInvalid:1;
        unsigned int verticalLayout:2;
        unsigned int horizontallyResizable:1;
        unsigned int verticallyResizable:1;
        unsigned int freezeTextContainerSize:1;
        unsigned int usesStandardTextScaling:1;
    } _tcvFlags;	// 256 = 0x100
    UITextView *_textView;	// 264 = 0x108
    _UITextLayoutControllerBase<_UITextLayoutController> *_textLayoutController;	// 272 = 0x110
    id <_UITextContainerViewDelegate> _delegate;	// 280 = 0x118
    UIView<_UITextCanvas> *_canvasView;	// 288 = 0x120
}

- (void).cxx_destruct;	// IMP=0x0000000001279a04
@property(readonly, nonatomic) UIView<_UITextCanvas> *canvasView; // @synthesize canvasView=_canvasView;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) struct CGSize minSize; // @synthesize minSize=_minSize;
@property(nonatomic) __weak id <_UITextContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NSTextContainer *textContainer; // @synthesize textContainer=_textContainer;
@property(readonly, nonatomic) _UITextLayoutControllerBase<_UITextLayoutController> *textLayoutController; // @synthesize textLayoutController=_textLayoutController;
- (struct CGRect)visibleRect;	// IMP=0x0000000001279856
@property(readonly, copy) NSString *description;
- (id)attributedSubstringForMarkedRange;	// IMP=0x00000000012796ce
@property(readonly, nonatomic) NSDictionary *markedTextStyle;
@property(nonatomic) struct _NSRange markedRange;
- (void)setLayoutOrientation:(long long)arg1;	// IMP=0x00000000012793fb
@property(readonly, nonatomic) long long layoutOrientation;
- (id)layoutManager:(id)arg1 effectiveCUICatalogForTextEffect:(id)arg2;	// IMP=0x0000000001279373
- (void)_ensureLayoutCompleteForRect:(struct CGRect)arg1;	// IMP=0x0000000001279168
- (void)_ensureLayoutCompleteToEndOfCharacterRange:(struct _NSRange)arg1;	// IMP=0x0000000001279075
- (void)layoutSubviews;	// IMP=0x0000000001278e13
- (_Bool)drawTextInRectIfNeeded:(struct CGRect)arg1;	// IMP=0x0000000001278e0b
- (void)didRemoveTextAttachmentViews:(id)arg1;	// IMP=0x0000000001278e05
- (void)didLayoutTextAttachmentView:(id)arg1 inFragmentRect:(struct CGRect)arg2;	// IMP=0x0000000001278dff
- (void)didAddTextAttachmentViews:(id)arg1;	// IMP=0x0000000001278df9
- (void)textContainerUsageDidChangeToSize:(struct CGSize)arg1;	// IMP=0x0000000001278dc1
@property(readonly, nonatomic) struct CGRect _clipRectForFadedEdges;
@property(readonly, nonatomic) struct CGPoint drawingScale;
@property(readonly, nonatomic, getter=isEditable) _Bool editable;
@property(readonly, nonatomic) UIScrollView *enclosingScrollView;
@property(readonly, nonatomic) UIColor *textColor;
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x0000000001278c26
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 avoidAdditionalLayout:(_Bool)arg2;	// IMP=0x0000000001278b0b
- (void)updateInsertionPointStateAndRestartTimer:(_Bool)arg1;	// IMP=0x00000000012789aa
@property(nonatomic) _Bool usesStandardTextScaling;
- (_Bool)_ensureLayoutForCappedSize;	// IMP=0x00000000012786e7
- (_Bool)_shouldCapSizeToFitLayoutRange:(out struct _NSRange *)arg1;	// IMP=0x000000000127833a
- (void)sizeToFit;	// IMP=0x0000000001278255
- (void)_sizeToConstrainedContainerUsedRect;	// IMP=0x0000000001278149
@property(nonatomic, getter=isVerticallyResizable) _Bool verticallyResizable;
@property(nonatomic, getter=isHorizontallyResizable) _Bool horizontallyResizable;
- (void)setConstrainedFrameSize:(struct CGSize)arg1;	// IMP=0x0000000001277eca
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000001277dd9
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000001277ceb
- (void)_setNeedsContentsFormatUpdate;	// IMP=0x0000000001277cce
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;	// IMP=0x0000000001277c4e
- (void)setNeedsDisplay;	// IMP=0x0000000001277c31
- (void)_setFrameOrBounds:(struct CGRect)arg1 oldRect:(struct CGRect)arg2 isFrameRect:(_Bool)arg3 settingAction:(CDUnknownBlockType)arg4;	// IMP=0x0000000001277733
- (void)_ensureMinAndMaxSizesConsistentWithBounds;	// IMP=0x00000000012776c3
- (void)invalidateTextContainerOrigin;	// IMP=0x00000000012776b2
- (_Bool)reconfigureWithLayoutManager:(id)arg1 triggeredBySelector:(SEL)arg2;	// IMP=0x0000000001277646
@property(readonly, nonatomic) struct CGPoint textContainerOrigin;
@property(nonatomic) struct UIEdgeInsets textContainerInset;
@property(nonatomic, getter=_freezeTextContainerSize, setter=_setFreezeTextContainerSize:) _Bool freezeTextContainerSize;
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000012770a9
- (void)tintColorDidChange;	// IMP=0x0000000001277048
- (id)linkAttributesForLink:(id)arg1 forCharacterAtIndex:(unsigned long long)arg2;	// IMP=0x0000000001276fcf
- (id)linkTextAttributes;	// IMP=0x0000000001276f80
@property(readonly, nonatomic) NSLayoutManager *layoutManager;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000001276eb5
- (id)initWithFrame:(struct CGRect)arg1 textLayoutController:(id)arg2 textContainer:(id)arg3 delegate:(id)arg4;	// IMP=0x0000000001276b8a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
