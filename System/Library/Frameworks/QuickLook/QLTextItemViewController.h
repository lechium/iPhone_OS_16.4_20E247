//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLookUICore/QLItemViewController.h>

@class NSAttributedString, NSLayoutConstraint, NSString, UIPrintPageRenderer, UISimpleTextPrintFormatter, UITextView;

__attribute__((visibility("hidden")))
@interface QLTextItemViewController : QLItemViewController
{
    UITextView *_textView;	// 8 = 0x8
    NSAttributedString *_content;	// 16 = 0x10
    NSLayoutConstraint *_leftConstraint;	// 24 = 0x18
    NSLayoutConstraint *_rightConstraint;	// 32 = 0x20
    UISimpleTextPrintFormatter *_printFormatter;	// 40 = 0x28
    UIPrintPageRenderer *_pageRenderer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000002d321
- (void)_updateConstraintConstants:(_Bool)arg1;	// IMP=0x000000000002d160
- (void)_updateViewConstraintsFromKeyboardAppearanceInfo:(id)arg1 notificationName:(id)arg2;	// IMP=0x000000000002cd67
- (void)_keyboardWillDisappear:(id)arg1;	// IMP=0x000000000002ccd2
- (void)_keyboardWillAppear:(id)arg1;	// IMP=0x000000000002cc3d
- (long long)preferredWhitePointAdaptivityStyle;	// IMP=0x000000000002cc32
- (void)provideCurrentPageAndVisibleRectWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002cc05
- (void)pdfDataForPageAtIndex:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002ca03
- (void)prepareForDrawingPages:(struct _NSRange)arg1 ofSize:(struct CGSize)arg2;	// IMP=0x000000000002c9fd
- (void)numberOfPagesWithSize:(struct CGSize)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002c82f
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;	// IMP=0x000000000002c7b9
@property(readonly) UIPrintPageRenderer *pageRenderer; // @synthesize pageRenderer=_pageRenderer;
@property(readonly) UISimpleTextPrintFormatter *printFormatter; // @synthesize printFormatter=_printFormatter;
- (_Bool)canClickToToggleFullscreen;	// IMP=0x000000000002c6c5
- (_Bool)canToggleFullScreen;	// IMP=0x000000000002c6a1
- (_Bool)automaticallyUpdateScrollViewIndicatorInset;	// IMP=0x000000000002c699
- (_Bool)automaticallyUpdateScrollViewContentInset;	// IMP=0x000000000002c691
- (_Bool)automaticallyUpdateScrollViewContentOffset;	// IMP=0x000000000002c689
- (id)scrollView;	// IMP=0x000000000002c674
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000002c629
- (_Bool)shouldRecognizeGestureRecognizer:(id)arg1;	// IMP=0x000000000002c3df
- (id)registeredKeyCommands;	// IMP=0x000000000002c3a1
- (_Bool)canPinchToDismiss;	// IMP=0x000000000002c399
- (_Bool)canSwipeToDismiss;	// IMP=0x000000000002c391
- (id)printer;	// IMP=0x000000000002c388
- (void)buttonPressedWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002c2b2
- (id)toolbarButtonsForTraitCollection:(id)arg1;	// IMP=0x000000000002c1b5
- (void)previewDidAppear:(_Bool)arg1;	// IMP=0x000000000002c16c
- (void)viewDidLoad;	// IMP=0x000000000002c00a
- (_Bool)_documentAttributesContainTextColors:(id)arg1;	// IMP=0x000000000002bd4e
- (void)_setupTextViewColorsWithDocumentAttributes:(id)arg1;	// IMP=0x000000000002bb73
- (_Bool)_isContentPotentiallySuspicious:(id)arg1 context:(id)arg2;	// IMP=0x000000000002b8ae
- (struct UIEdgeInsets)customEdgeInsets;	// IMP=0x000000000002b6c0
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002ae7f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
