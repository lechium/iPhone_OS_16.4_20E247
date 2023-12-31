//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

@class NSArray, NSString;

@interface NSAttributedString (UIKitAdditions)
+ (id)_systemTextSearchTextAttributesForStyle:(unsigned long long)arg1;	// IMP=0x0010000000cbe752
+ (long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1;	// IMP=0x0010000000d7b740
+ (id)writableTypeIdentifiersForItemProvider;	// IMP=0x0010000000d7b63c
+ (id)_objectWithItemProviderFileURL:(id)arg1 typeIdentifier:(id)arg2 isInPlace:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0010000000d7b1f0
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000d7b1d4
+ (id)_objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 userInfo:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000d7aa03
+ (id)_objectWithRTFDAtURL:(id)arg1 userInfo:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000d7a860
+ (long long)_preferredRepresentationForItemProviderReadableTypeIdentifier:(id)arg1;	// IMP=0x0010000000d7a7e1
+ (id)readableTypeIdentifiersForItemProvider;	// IMP=0x0010000000d7a695
- (id)_ui_glyphImageViewsScale:(double)arg1 outImageRect:(struct CGRect *)arg2 outLineRect:(struct CGRect *)arg3 outBaselineOffset:(double *)arg4;	// IMP=0x001000000000ea6f
- (id)_ui_attributedStringWithOriginalFontAttributes;	// IMP=0x001000000000e9b6
- (long long)_ui_resolvedWritingDirectionForUserInterfaceLayoutDirection:(long long)arg1;	// IMP=0x001000000000e905
- (long long)_ui_resolvedWritingDirection;	// IMP=0x001000000000e8ca
- (long long)_ui_resolvedTextAlignmentForParagraphStyle:(id)arg1;	// IMP=0x001000000000e85b
- (long long)_ui_resolvedTextAlignmentForUserInterfaceLayoutDirection:(long long)arg1;	// IMP=0x001000000000e7b9
- (long long)_ui_resolvedTextAlignmentForParagraphStyle:(id)arg1 userInterfaceLayoutDirection:(long long)arg2;	// IMP=0x001000000000e735
- (long long)_ui_resolvedTextAlignment;	// IMP=0x001000000000e6fa
- (id)_ui_attributedStringAdjustedToTraitCollection:(id)arg1;	// IMP=0x001000000000f701
- (id)_ui_rtfDataError:(id *)arg1;	// IMP=0x001000000000f62d
- (id)_ui_rtfdFileWrapperError:(id *)arg1;	// IMP=0x001000000000f559
- (id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000d7bb29
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000d7b81d
- (long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1;	// IMP=0x0010000000d7b7d8
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000d7b591

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

