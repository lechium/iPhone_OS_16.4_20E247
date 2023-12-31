//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLFill, CRLWrapSegments, NSArray, _TtC8Freeform11CRLWPLayout;

@protocol _TtP8Freeform17CRLWPLayoutParent_
- (long long)naturalAlignmentFor:(_TtC8Freeform11CRLWPLayout *)arg1;
- (_Bool)textLayoutShouldLayoutVertically:(_TtC8Freeform11CRLWPLayout *)arg1;
- (CRLWrapSegments *)interiorWrapSegmentsFor:(_TtC8Freeform11CRLWPLayout *)arg1;
- (_Bool)textLayoutShouldWrapAroundExternalDrawables:(_TtC8Freeform11CRLWPLayout *)arg1;
@property(nonatomic, readonly) CRLFill *instructionalTextCharacterFill;
@property(nonatomic) _Bool supportsInstructionalText;
- (double)maxAutoGrowBlockHeightFor:(_TtC8Freeform11CRLWPLayout *)arg1;
- (double)maxAutoGrowLineWidthFor:(_TtC8Freeform11CRLWPLayout *)arg1;
@property(nonatomic, readonly) _Bool descendersCannotClip;
- (Class)repClassFor:(_TtC8Freeform11CRLWPLayout *)arg1;
- (NSArray *)dependentsOf:(_TtC8Freeform11CRLWPLayout *)arg1;
- (struct CGRect)autosizedFrameFor:(_TtC8Freeform11CRLWPLayout *)arg1 textSize:(struct CGSize)arg2;
- (struct CGRect)nonAutosizedFrameFor:(_TtC8Freeform11CRLWPLayout *)arg1;
- (long long)verticalAlignmentFor:(_TtC8Freeform11CRLWPLayout *)arg1;
- (unsigned long long)autosizeFlagsFor:(_TtC8Freeform11CRLWPLayout *)arg1;
@end

