//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, UIButton, UILabel, UIStepper, UISwitch, WKWebView;
@protocol SSSDittoDebugViewDelegate;

@interface SSSDittoDebugView : UIView
{
    UIButton *_addScreenshotsButton;	// 8 = 0x8
    UIStepper *_numberOfScreenshotsToAddStepper;	// 16 = 0x10
    UISwitch *_snapshotPDFSwitch;	// 24 = 0x18
    UILabel *_snapshotPDFLabel;	// 32 = 0x20
    UISwitch *_multipagePDFSwitch;	// 40 = 0x28
    UILabel *_multipagePDFLabel;	// 48 = 0x30
    UIButton *_uiCatalogButton;	// 56 = 0x38
    WKWebView *_webView;	// 64 = 0x40
    CDUnknownBlockType _blockToRunForAddScreenshotsButton;	// 72 = 0x48
    MISSING_TYPE *_delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000018cc3
@property(nonatomic) __weak id <SSSDittoDebugViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType blockToRunForAddScreenshotsButton; // @synthesize blockToRunForAddScreenshotsButton=_blockToRunForAddScreenshotsButton;
- (void)layoutSubviews;	// IMP=0x0010000000018766
- (void)_updateScreenshotCount;	// IMP=0x00100000000186cd
- (void)_uiCatalogButtonPushed;	// IMP=0x0010000000018661
@property(readonly, nonatomic) long long numberOfScreenshotsToAdd;
- (void)resetScrollOffset;	// IMP=0x00100000000185e1
- (void)advanceScrollOffset;	// IMP=0x001000000001850b
- (id)generatePDF:(struct CGRect *)arg1;	// IMP=0x0010000000017fd2
- (_Bool)shouldIncludePDF;	// IMP=0x0010000000017fb5
- (void)_addScreenshotPushed;	// IMP=0x0010000000017f7d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000001793e

@end

