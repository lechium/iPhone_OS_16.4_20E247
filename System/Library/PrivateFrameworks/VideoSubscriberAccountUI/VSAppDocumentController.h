//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKAppDocument, IKViewElement, NSError, NSString, VSViewModel;
@protocol VSAppDocumentControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSAppDocumentController : NSObject
{
    IKAppDocument *_appDocument;	// 8 = 0x8
    id <VSAppDocumentControllerDelegate> _delegate;	// 16 = 0x10
    VSViewModel *_viewModel;	// 24 = 0x18
    NSError *_viewModelError;	// 32 = 0x20
    IKViewElement *_templateElement;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000028251
@property(retain, nonatomic) IKViewElement *templateElement; // @synthesize templateElement=_templateElement;
@property(retain, nonatomic) NSError *viewModelError; // @synthesize viewModelError=_viewModelError;
@property(retain, nonatomic) VSViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <VSAppDocumentControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IKAppDocument *appDocument; // @synthesize appDocument=_appDocument;
- (void)userInterfaceStyleDidUpdate;	// IMP=0x0000000000027e7c
- (void)_notiftyDidFailToUpdateViewModelWithError:(id)arg1;	// IMP=0x0000000000027e02
- (void)_notiftyDidUpdateViewModel:(id)arg1;	// IMP=0x0000000000027d88
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000002791c
- (id)_imageItemProviderWithImageElement:(id)arg1;	// IMP=0x00000000000278af
- (void)_stopObservingViewModel:(id)arg1;	// IMP=0x0000000000027836
- (void)_startObservingViewModel:(id)arg1;	// IMP=0x00000000000277b1
- (_Bool)_updateViewModel:(id)arg1 WithError:(id *)arg2;	// IMP=0x00000000000277a9
- (id)_newViewModel;	// IMP=0x0000000000027798
- (_Bool)document:(id)arg1 evaluateStyleMediaQuery:(id)arg2;	// IMP=0x00000000000276b8
- (void)documentDidUpdate:(id)arg1;	// IMP=0x00000000000274b6
- (void)documentNeedsUpdate:(id)arg1;	// IMP=0x0000000000027411
- (void)dealloc;	// IMP=0x000000000002739b
- (id)initWithAppDocument:(id)arg1;	// IMP=0x0000000000027247
- (id)init;	// IMP=0x00000000000271d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
