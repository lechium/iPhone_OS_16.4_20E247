//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class DOMNode, NSArray, NSObject, NSString, UIDocumentMenuViewController, UIImagePickerController, UIPopoverController, UIWebDocumentView;
@protocol UIWebFileUploadPanelDelegate, WebOpenPanelResultListener;

__attribute__((visibility("hidden")))
@interface UIWebFileUploadPanel : UIViewController
{
    UIDocumentMenuViewController *_documentMenuController;	// 8 = 0x8
    UIImagePickerController *_imagePicker;	// 16 = 0x10
    UIViewController *_presentationViewController;	// 24 = 0x18
    UIPopoverController *_presentationPopover;	// 32 = 0x20
    struct CGPoint _interactionPoint;	// 40 = 0x28
    DOMNode *_interactionElement;	// 56 = 0x38
    _Bool _allowMultipleFiles;	// 64 = 0x40
    _Bool _isUsingCamera;	// 65 = 0x41
    NSArray *_mimeTypes;	// 72 = 0x48
    UIWebDocumentView *_documentView;	// 80 = 0x50
    NSObject<WebOpenPanelResultListener> *_resultListener;	// 88 = 0x58
    id <UIWebFileUploadPanelDelegate> _delegate;	// 96 = 0x60
    long long _mediaCaptureType;	// 104 = 0x68
}

@property(nonatomic) long long mediaCaptureType; // @synthesize mediaCaptureType=_mediaCaptureType;
@property(nonatomic) id <UIWebFileUploadPanelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isUsingCamera; // @synthesize isUsingCamera=_isUsingCamera;
@property(nonatomic) _Bool allowMultipleFiles; // @synthesize allowMultipleFiles=_allowMultipleFiles;
@property(retain, nonatomic) NSObject<WebOpenPanelResultListener> *resultListener; // @synthesize resultListener=_resultListener;
@property(nonatomic) UIWebDocumentView *documentView; // @synthesize documentView=_documentView;
@property(copy, nonatomic) NSArray *mimeTypes; // @synthesize mimeTypes=_mimeTypes;
- (void)imagePickerControllerDidCancel:(id)arg1;	// IMP=0x000000000079513c
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;	// IMP=0x0000000000794ddf
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;	// IMP=0x0000000000794b2f
- (_Bool)_willMultipleSelectionDelegateBeCalled;	// IMP=0x0000000000794b0a
- (void)_uploadItemFromMediaInfo:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000007948eb
- (void)_uploadItemForJPEGRepresentationOfImage:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000079476d
- (void)_uploadItemForImageData:(id)arg1 imageName:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000079466a
- (void)_processMediaInfoDictionaries:(id)arg1 atIndex:(unsigned long long)arg2 processedResults:(id)arg3 processedImageCount:(unsigned long long)arg4 processedVideoCount:(unsigned long long)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;	// IMP=0x00000000007943f6
- (void)_processMediaInfoDictionaries:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000794393
- (id)_displayStringForPhotos:(unsigned long long)arg1 videos:(unsigned long long)arg2;	// IMP=0x0000000000794191
- (void)_dismissDisplayAnimated:(_Bool)arg1;	// IMP=0x00000000007940be
- (void)documentPickerWasCancelled:(id)arg1;	// IMP=0x000000000079408b
- (void)documentPicker:(id)arg1 didPickDocumentAtURL:(id)arg2;	// IMP=0x0000000000793f7e
- (void)documentMenuWasCancelled:(id)arg1;	// IMP=0x0000000000793f4b
- (void)documentMenu:(id)arg1 didPickDocumentPicker:(id)arg2;	// IMP=0x0000000000793ef9
- (void)dismiss;	// IMP=0x0000000000793ec9
- (void)popoverControllerDidDismissPopover:(id)arg1;	// IMP=0x0000000000793eb7
- (void)present;	// IMP=0x0000000000793dea
- (void)_presentFullscreenViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000793d6b
- (void)_presentPopoverWithContentViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000793c84
- (void)_presentForCurrentInterfaceIdiom:(id)arg1;	// IMP=0x0000000000793c46
- (void)_showDocumentPickerMenu;	// IMP=0x0000000000793a75
- (id)_cameraButtonLabel;	// IMP=0x0000000000793995
- (void)_showPhotoPickerWithSourceType:(long long)arg1;	// IMP=0x0000000000793922
- (id)_photoPickerWithSourceType:(long long)arg1;	// IMP=0x0000000000793847
- (id)_documentPickerMenuMediaTypes;	// IMP=0x000000000079380c
- (id)_mediaTypesForPickerSourceType:(long long)arg1;	// IMP=0x00000000007937aa
- (id)_UTIsForMIMETypes;	// IMP=0x0000000000793596
- (_Bool)_string:(id)arg1 hasPrefixCaseInsensitive:(id)arg2;	// IMP=0x0000000000793565
- (_Bool)_shouldMediaCaptureOpenMediaDevice;	// IMP=0x0000000000793535
- (void)_adjustMediaCaptureType;	// IMP=0x0000000000793497
- (void)_chooseFilenames:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3;	// IMP=0x0000000000793424
- (void)_chooseFilename:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3;	// IMP=0x00000000007933b1
- (void)_cancel;	// IMP=0x0000000000793373
- (void)_dispatchDidDismiss;	// IMP=0x0000000000793323
- (void)dealloc;	// IMP=0x0000000000793238
- (id)initWithResultListener:(id)arg1 configuration:(id)arg2 documentView:(id)arg3;	// IMP=0x0000000000793122

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
