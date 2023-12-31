//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CRLConnectionLineEditor
{
    _Bool _outsetTrackingLoopActive;	// 8 = 0x8
}

- (void)saveDefaultInsertionPreset:(id)arg1;	// IMP=0x00200000003f8eaf
- (_Bool)p_canSaveDefaultInsertionPreset;	// IMP=0x00100000003f8e66
- (void)addMiniFormatterElementsToArray:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x00100000003f8d0d
- (void)endChangingConnectionOutset;	// IMP=0x00100000003f8ace
- (void)didChangeConnectionRightOutset:(double)arg1;	// IMP=0x00100000003f8aba
- (void)didChangeConnectionLeftOutset:(double)arg1;	// IMP=0x00100000003f8aa3
- (void)p_setDynamicOutsetFrom:(id)arg1;	// IMP=0x00100000003f8a4b
- (void)p_didChangeConnectionOutset:(double)arg1 onLeft:(_Bool)arg2;	// IMP=0x00100000003f8763
- (void)beginChangingConnectionOutset;	// IMP=0x00100000003f8547
- (double)rightOutset;	// IMP=0x00100000003f8533
- (double)leftOutset;	// IMP=0x00100000003f851c
- (double)p_outsetOnLeft:(_Bool)arg1;	// IMP=0x00100000003f8414
- (id)connectionLines;	// IMP=0x00100000003f8293
- (id)anyConnectionLine;	// IMP=0x00100000003f8148
- (void)setConnectionLineType:(long long)arg1;	// IMP=0x00100000003f7e8d
- (void)toggleLineType:(id)arg1;	// IMP=0x00100000003f7be0
- (long long)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00100000003f7b42
- (id)selectedObjectsSupportingConnectionLineAttributes;	// IMP=0x00100000003f7b30

@end

