//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, _TtC8Freeform12CRLWPStorage;

@interface CRLWPStorageAccessibility
{
}

+ (Class)crlaxBaseSafeCategoryClass;	// IMP=0x00200000000e1f9a
+ (id)crlaxTargetClassName;	// IMP=0x00100000000e1f8d
- (void)_crlaxUpdateInferredBaseFontSize;	// IMP=0x00100000000e3920
- (id)crlaxHyperLinksInRange:(struct _NSRange)arg1;	// IMP=0x00100000000e38b7
- (struct _NSRange)crlaxPreviousInferredHeadingRangeFromCharacterIndex:(unsigned long long)arg1 wrap:(_Bool)arg2;	// IMP=0x00100000000e364c
- (struct _NSRange)crlaxNextInferredHeadingRangeFromCharacterIndex:(unsigned long long)arg1 wrap:(_Bool)arg2;	// IMP=0x00100000000e3419
- (unsigned short)crlaxCharacterAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000e330c
- (struct _NSRange)crlaxTextRangeForParagraphAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000e31e3
- (struct _NSRange)_crlaxInfferredHeadingRangeForParagraphIndex:(unsigned long long)arg1 withBaseFontSize:(unsigned long long)arg2 excludingCharacters:(id)arg3;	// IMP=0x00100000000e2f98
- (struct _NSRange)crlaxInferredHeadingRangeForParagraphIndex:(unsigned long long)arg1 withBaseFontSize:(unsigned long long)arg2;	// IMP=0x00100000000e2e8a
- (id)crlaxInferredHeadingRangesWithBaseFontSize:(unsigned long long)arg1;	// IMP=0x00100000000e2c9c
@property(readonly, nonatomic) NSArray *crlaxInferredHeadingRanges;
- (id)crlaxParagraphStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;	// IMP=0x00100000000e2c63
- (id)crlaxTargetStringForAnnotation:(id)arg1;	// IMP=0x00100000000e2c2f
- (struct _NSRange)crlaxRangeForAnnotation:(id)arg1;	// IMP=0x00100000000e2afa
- (_Bool)crlaxContainsAnnotationInRange:(struct _NSRange)arg1;	// IMP=0x00100000000e29f1
- (id)crlaxEditableAnnotationForInsertionPointSelection:(id)arg1 includeComments:(_Bool)arg2 withOutRange:(struct _NSRange *)arg3 outSelectionIsOnEdge:(_Bool *)arg4;	// IMP=0x00100000000e286c
- (_Bool)crlaxSelectionContainsVisibleTrackedChanges:(id)arg1;	// IMP=0x00100000000e2864
- (void)crlaxEnumerateSmartFieldsWithAttributeKind:(unsigned long long)arg1 inRange:(struct _NSRange)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e2678
- (void)crlaxEnumerateSmartFieldsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e261b
- (void)crlaxEnumerateAttachmentsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e2449
- (id)crlaxAttachmentOrFootnoteAtCharIndex:(unsigned long long)arg1;	// IMP=0x00100000000e23cf
- (id)crlaxSubstringWithRange:(struct _NSRange)arg1;	// IMP=0x00100000000e227f
- (unsigned long long)crlaxSelectionRangeMaxForCharIndex:(unsigned long long)arg1;	// IMP=0x00100000000e21a1
@property(readonly, nonatomic) unsigned long long crlaxUpdatedInferredBaseFontSize;
@property(readonly, nonatomic) unsigned long long crlaxParagraphCount;
@property(readonly, nonatomic) unsigned long long crlaxCharacterCount;
@property(readonly, nonatomic) unsigned long long crlaxChangeCount;
@property(readonly, nonatomic) struct _NSRange crlaxRange;
@property(readonly, nonatomic) NSString *crlaxString;
@property(readonly, nonatomic) _TtC8Freeform12CRLWPStorage *crlaxTarget;
@property(nonatomic, setter=crlaxSetInferredBaseFontSize:) unsigned long long crlaxInferredBaseFontSize;
- (id)accessibilityLabel;	// IMP=0x001000000026035c

@end

