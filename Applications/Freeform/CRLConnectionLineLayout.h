//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CRLConnectionLineLayout
{
    double _startClipT;	// 808 = 0x328
    double _endClipT;	// 816 = 0x330
}

- (void)dynamicallyMovedSmartShapeKnobTo:(struct CGPoint)arg1 withTracker:(id)arg2;	// IMP=0x0020000000040630
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;	// IMP=0x001000000004044b
- (struct CGPoint)controlPointForPointA:(struct CGPoint)arg1 pointB:(struct CGPoint)arg2 andOriginalA:(struct CGPoint)arg3 originalB:(struct CGPoint)arg4;	// IMP=0x00100000000401dd
- (id)createConnectedPathFrom:(id)arg1 to:(id)arg2 withControlPoints:(struct CGPoint [3])arg3;	// IMP=0x001000000003feb2
- (id)quadraticCurve:(struct CGPoint [3])arg1;	// IMP=0x001000000003fc3e

@end
