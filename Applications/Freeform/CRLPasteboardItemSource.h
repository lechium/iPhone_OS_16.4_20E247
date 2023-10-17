//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLPasteboard, CRLPasteboardController, NSString;

@interface CRLPasteboardItemSource : NSObject
{
    CRLPasteboardController *_pbController;	// 8 = 0x8
    CRLPasteboard *_pasteboard;	// 16 = 0x10
    CDUnknownBlockType _cancellationHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000005acbfa
@property(copy) CDUnknownBlockType cancellationHandler; // @synthesize cancellationHandler=_cancellationHandler;
@property(readonly, nonatomic) __weak CRLPasteboardController *pasteboardController; // @synthesize pasteboardController=_pbController;
@property(readonly, nonatomic) CRLPasteboard *pasteboard; // @synthesize pasteboard=_pasteboard;
- (id)loadImportedImagesForAssetOwner:(id)arg1 compatibilityAlertPresenter:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000005abd9f
- (id)loadProvidersForImportedBoardItemsUsingBoardItemFactory:(id)arg1 WithLoadHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000005abcf1
- (id)loadProvidersForNativeBoardItemsWithBoardItemFactory:(id)arg1 loadHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000005abc3c
- (id)loadTextStorageUsingBoardItemFactory:(id)arg1 forTargetContext:(id)arg2 targetStorage:(id)arg3 loadHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000005abb5c
@property(readonly, nonatomic) _Bool hasNativeBoardItemsContainingText;
@property(readonly, nonatomic) _Bool hasNativeText;
@property(readonly, nonatomic) _Bool hasNativeTextStorages;
@property(readonly, nonatomic) _Bool hasOnlyNativeTextBoxItems;
@property(readonly, nonatomic) _Bool hasNativeFreehandDrawingBoardItems;
@property(readonly, nonatomic) _Bool hasOnlyNativeFreehandDrawingBoardItems;
@property(readonly, nonatomic) _Bool hasSingleNativeMovieBoardItem;
@property(readonly, nonatomic) _Bool hasSingleNativeImageBoardItem;
@property(readonly, nonatomic) _Bool canProduceBoardItems;
@property(readonly, nonatomic) _Bool hasNativeBoardItems;
@property(readonly, nonatomic) _Bool hasNativeTypes;
- (id)loadImportedTextStringWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000005ab3bc
- (id)loadImportedRichTextStringWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000005ab2ff
@property(readonly, nonatomic) _Bool hasImportableRichText;
@property(readonly, nonatomic) _Bool hasImportableText;
- (_Bool)hasImportableBoardItemsDetectingImportableURLsInText:(_Bool)arg1;	// IMP=0x00100000005ab203
- (_Bool)hasImportableBoardItemsDetectingImportableURLsInText:(_Bool)arg1 skipFileURLs:(_Bool)arg2;	// IMP=0x00100000005ab17a
@property(readonly, nonatomic) _Bool hasImportableImages;
- (unsigned long long)preferredImportableDataTypeDetectingImportableURLsInText:(_Bool)arg1;	// IMP=0x00100000005ab0f0
- (unsigned long long)preferredImportableDataTypeDetectingImportableURLsInText:(_Bool)arg1 skipFileURLs:(_Bool)arg2;	// IMP=0x00100000005ab067
- (_Bool)canLoadItemsOfClass:(Class)arg1;	// IMP=0x00100000005ab014
@property(readonly, nonatomic) unsigned long long itemCount;
- (id)init;	// IMP=0x00100000005aad16
- (id)initWithPasteboard:(id)arg1 pasteboardController:(id)arg2;	// IMP=0x00100000005aac7d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
