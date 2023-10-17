//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSDAutoscroll, TSDInteractiveCanvasController;

@protocol TSDAutoscrollDelegate
@property(nonatomic) struct CGPoint autoscrollPoint;
@property(retain, nonatomic) TSDAutoscroll *autoscroll;
@property(readonly, nonatomic) TSDInteractiveCanvasController *icc;
- (void)autoscrollWillNotStart;
- (void)updateAfterAutoscroll:(TSDAutoscroll *)arg1;

@optional
- (_Bool)autoscrollWithDirection:(int)arg1 proposedContentOffset:(struct CGPoint)arg2 completionBlock:(void (^)(void))arg3;
- (int)allowedAutoscrollDirections;
- (unsigned long long)maximumAutoscrollDeltaForCount:(unsigned long long)arg1;
- (double)unscaledStartAutoscrollThreshold;
@end
