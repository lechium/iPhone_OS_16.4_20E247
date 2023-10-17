//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLCanvasLayout, CRLMutableRectList, CRLWPColumn, NSArray;
@protocol CRLWPLayoutTarget;

@protocol CRLWPTextWrap
- (_Bool)checkForUnobstructedSpan:(struct CGRect)arg1 wrappableAttachments:(NSArray *)arg2 userInfo:(id)arg3;
- (double)nextUnobstructedSpanStartingAt:(struct CGRect)arg1 wrappableAttachments:(NSArray *)arg2 userInfo:(id)arg3;
- (void)splitLine:(struct CGRect)arg1 lineSegmentRects:(inout CRLMutableRectList *)arg2 wrappableAttachments:(NSArray *)arg3 ignoreFloatingGraphics:(_Bool)arg4 canvasCausedWrap:(out _Bool *)arg5 skipHint:(out double *)arg6 userInfo:(id)arg7;
- (id)beginWrappingToColumn:(CRLWPColumn *)arg1 columnTransformFromWP:(struct CGAffineTransform)arg2 target:(CRLCanvasLayout<CRLWPLayoutTarget> *)arg3 hasWrappables:(out _Bool *)arg4;
@end
