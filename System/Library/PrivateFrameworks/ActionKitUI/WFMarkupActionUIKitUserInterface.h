//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUICore/WFActionUserInterface.h>

@class NSArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface WFMarkupActionUIKitUserInterface : WFActionUserInterface
{
    NSArray *_previewItems;	// 8 = 0x8
    NSMutableDictionary *_editedPreviewItems;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000004d1be
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSMutableDictionary *editedPreviewItems; // @synthesize editedPreviewItems=_editedPreviewItems;
@property(retain, nonatomic) NSArray *previewItems; // @synthesize previewItems=_previewItems;
- (id)editedItems;	// IMP=0x000000000004d0c2
- (void)previewControllerDidDismiss:(id)arg1;	// IMP=0x000000000004d0ae
- (void)previewController:(id)arg1 didSaveEditedCopyOfPreviewItem:(id)arg2 atURL:(id)arg3;	// IMP=0x000000000004cfe1
- (long long)previewController:(id)arg1 editingModeForPreviewItem:(id)arg2;	// IMP=0x000000000004cfd6
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;	// IMP=0x000000000004cf77
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;	// IMP=0x000000000004cf33
- (void)cancelPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004ce90
- (void)finishWithError:(id)arg1;	// IMP=0x000000000004cdcc
- (void)showWithPreviewItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004cba5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *userInterfaceType;

@end
