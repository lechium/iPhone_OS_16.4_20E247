//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BCSQRCodeParser, BCSVisualCode, NSString, _SFLinkRedirectionResolver;
@protocol BCSAction, BCSActionCoordinatorDelegate, OS_dispatch_queue;

@interface BCSActionCoordinator : NSObject
{
    BCSVisualCode *_currentCode;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_parsingQueue;	// 16 = 0x10
    id <BCSAction> _parsedAction;	// 24 = 0x18
    BCSQRCodeParser *_qrCodeParser;	// 32 = 0x20
    CDUnknownBlockType _actionPickerItemBlock;	// 40 = 0x28
    CDUnknownBlockType _firstTimePromptBlock;	// 48 = 0x30
    _SFLinkRedirectionResolver *_linkResolver;	// 56 = 0x38
    _Bool _deviceIsBeingUnlocked;	// 64 = 0x40
    id <BCSActionCoordinatorDelegate> _delegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000010abe
@property(readonly, nonatomic) _Bool deviceIsBeingUnlocked; // @synthesize deviceIsBeingUnlocked=_deviceIsBeingUnlocked;
@property(nonatomic) __weak id <BCSActionCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)safariViewControllerDidFinish:(id)arg1;	// IMP=0x0010000000010a32
- (void)alertControllerDidCancel:(id)arg1;	// IMP=0x00100000000109d2
- (void)alertControllerDidAllow:(id)arg1;	// IMP=0x00100000000109a0
- (void)alertController:(id)arg1 didSelectActionItem:(id)arg2;	// IMP=0x0010000000010970
- (void)_launchBarcodeScannerAppFromLockscreenWithQueryOptions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010552
- (void)_handleCalendarICSString:(id)arg1;	// IMP=0x001000000001023c
- (_Bool)_handleActionPickerItemIfCalendarAction:(id)arg1;	// IMP=0x0010000000010151
- (_Bool)_handleActionPickerItemIfHomeAction:(id)arg1;	// IMP=0x0010000000010018
- (void)_handleContactInfo:(id)arg1;	// IMP=0x001000000000fc86
- (id)_tempVCardFileURL;	// IMP=0x001000000000fab4
- (_Bool)_handleActionPickerItemIfContactsAction:(id)arg1;	// IMP=0x001000000000fa28
- (void)requestDeviceUnlockIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f8b7
- (_Bool)_handleActionPickerItemIfSpecialHandlingRequired:(id)arg1;	// IMP=0x001000000000f840
- (void)performActionPickerItem:(id)arg1;	// IMP=0x001000000000f7f6
- (_Bool)_performActionAndReturnIfLogged:(id)arg1;	// IMP=0x001000000000f3a6
- (void)performAction:(id)arg1;	// IMP=0x001000000000f359
- (void)logActivatedEventForAction:(id)arg1;	// IMP=0x001000000000f2a2
- (id)homeScreenAppIconWithIdentifier:(id)arg1;	// IMP=0x001000000000f00c
- (id)_calendarAppIcon;	// IMP=0x001000000000ed22
- (id)homeScreenAppIconForAction:(id)arg1;	// IMP=0x001000000000ebb8
- (void)showItemsWithAction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e954
- (void)_resolveRedirectionForURL:(id)arg1;	// IMP=0x001000000000e76b
- (void)showFirstTimePromptIfNecessary:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e32a
- (void)_updateParsedActionWithURL:(id)arg1 appLink:(id)arg2;	// IMP=0x001000000000e1ce
- (_Bool)_handleSpecialCodesForAction:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x001000000000e125
- (void)_parseVisualCode:(id)arg1;	// IMP=0x001000000000dcb3
- (id)actionForVisualCode:(id)arg1;	// IMP=0x001000000000daf2
- (void)startParsingVisualCode:(id)arg1;	// IMP=0x001000000000da32
- (id)init;	// IMP=0x001000000000d99f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

