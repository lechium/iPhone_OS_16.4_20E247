//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@class CNContactViewHostViewController, NSString;

__attribute__((visibility("hidden")))
@interface CNContactViewExtensionHostContext : NSExtensionContext
{
    CNContactViewHostViewController *_viewController;	// 8 = 0x8
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x00100000000e2a52
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x00100000000e2a39
- (void).cxx_destruct;	// IMP=0x00000000000e334d
@property(nonatomic) __weak CNContactViewHostViewController *viewController; // @synthesize viewController=_viewController;
- (void)asyncShouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;	// IMP=0x00000000000e322f
- (void)presentCancelConfirmationAlert;	// IMP=0x00000000000e31d0
- (void)didExecuteDeleteFromDowntimeWhitelistAction;	// IMP=0x00000000000e314b
- (void)didExecuteClearRecentsDataAction;	// IMP=0x00000000000e30c6
- (void)viewDidAppear;	// IMP=0x00000000000e3067
- (void)didChangePreferredContentSize:(struct CGSize)arg1;	// IMP=0x00000000000e2fea
- (void)isPresentingEditingController:(_Bool)arg1;	// IMP=0x00000000000e2f80
- (void)isPresentingFullscreen:(_Bool)arg1;	// IMP=0x00000000000e2f16
- (void)didDeleteContact:(id)arg1;	// IMP=0x00000000000e2e79
- (void)didCompleteWithContact:(id)arg1;	// IMP=0x00000000000e2ddc
- (void)updateEditing:(_Bool)arg1 doneButtonEnabled:(_Bool)arg2 doneButtonText:(id)arg3;	// IMP=0x00000000000e2d2e
- (_Bool)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;	// IMP=0x00000000000e2d07
- (void)didChangeToShowTitle:(_Bool)arg1;	// IMP=0x00000000000e2cbb
- (void)performConfirmedCancel;	// IMP=0x00000000000e2c7e
- (void)toggleEditing;	// IMP=0x00000000000e2c41
- (void)editCancel;	// IMP=0x00000000000e2c04
- (void)didChangeToEditMode:(_Bool)arg1;	// IMP=0x00000000000e2bb8
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e2b32
- (id)protocolService;	// IMP=0x00000000000e2a6b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

