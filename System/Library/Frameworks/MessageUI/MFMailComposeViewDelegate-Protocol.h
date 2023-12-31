//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MessageUI/UIDocumentPickerDelegate-Protocol.h>
#import <MessageUI/UIPickerViewDelegate-Protocol.h>
#import <MessageUI/UIPopoverPresentationControllerDelegate-Protocol.h>

@class MFAttachment, MFComposeWebView, MFMailAccountProxy, MFMailComposeView, MFMailPopoverManager, NSArray, NSDictionary, NSString, UIViewController, _MFMailCompositionContext;

@protocol MFMailComposeViewDelegate <UIPickerViewDelegate, UIDocumentPickerDelegate, UIPopoverPresentationControllerDelegate>
- (void)markupAttachment:(MFAttachment *)arg1;
- (UIViewController *)presentationViewController;
- (void)changeQuoteLevel:(long long)arg1;
- (void)didInsertBodyText:(NSString *)arg1;
- (void)didRemoveAttachment:(MFAttachment *)arg1;
- (void)didInsertAttachment:(MFAttachment *)arg1;
- (_MFMailCompositionContext *)compositionContext;
- (MFMailPopoverManager *)popoverManager;
- (void)scanDocument;
- (void)insertDrawing;
- (void)importDocument;
- (void)showPhotoPickerWithSourceType:(long long)arg1 fromSource:(id)arg2;
- (void)insertPhotoOrVideo;
- (long long)compositionType;
- (NSString *)currentScaleImageSize;
- (_Bool)hasAttachments;
- (_Bool)bccAddressesDirtied;
- (_Bool)sendingEmailDirtied;
- (_Bool)canShowAttachmentPicker;
- (_Bool)canShowImageSizeField;
- (_Bool)canShowFromField;
- (MFMailAccountProxy *)sendingAccountProxy;
- (void)updateSignature;
- (_Bool)isHideMyEmailMessage;
- (_Bool)isAddressHideMyEmail:(NSString *)arg1;
- (void)setHideMyEmailAddressForMailToURLAddressString:(NSString *)arg1;
- (void)setSendingEmailAddressAsHME:(NSString *)arg1 isComposeTypeReply:(_Bool)arg2;
- (void)setSendingEmailAddress:(NSString *)arg1;
- (NSString *)sendingEmailAddress;
- (NSString *)sendingEmailAddressIfExists;
- (NSArray *)emailAddresses;

@optional
- (void)takeFocusFromComposeWebView:(MFComposeWebView *)arg1 inDirection:(unsigned long long)arg2;
- (void)showMissingAttachmentDataAlert;
- (struct UIEdgeInsets)additionalContentInsetForComposeWebView:(MFComposeWebView *)arg1;
- (_Bool)canShowContentVariationPicker;
- (NSString *)contentVariationName;
- (void)showStyleSelector:(id)arg1;
- (void)composeViewBodyTextChanged:(MFMailComposeView *)arg1;
- (void)composeWebViewDidResignFirstResponder;
- (void)composeWebViewDidChangeFontAttributes:(NSDictionary *)arg1;
- (void)composeWebViewDidFinishLoad;
@end

