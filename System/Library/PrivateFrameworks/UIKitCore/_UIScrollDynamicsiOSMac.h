//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIScrollDynamicsiOSMac
{
    double _durationUntilStop;	// 8 = 0x8
    double _durationUntilStopIgnoringRubberbanding;	// 16 = 0x10
    struct CGSize _absDisplacementVectorIgnoringRubberbanding;	// 24 = 0x18
    double _linearDisplacementIgnoringRubberbanding;	// 40 = 0x28
    struct CGPoint _destinationIgnoringRubberbanding;	// 48 = 0x30
    double _durationUntilRubberband;	// 64 = 0x40
    struct CGPoint _initialRubberbandingOrigin;	// 72 = 0x48
    struct CGVector _initialRubberbandingVelocity;	// 88 = 0x58
    unsigned long long _rubberBandingAxis;	// 104 = 0x68
    double _decelerationRate;	// 112 = 0x70
}

- (_Bool)isRubberBandingAfterDuration:(double)arg1;	// IMP=0x0000000001421c30
- (struct CGPoint)positionAfterDuration:(double)arg1;	// IMP=0x000000000142184b
- (struct CGVector)velocityAfterDuration:(double)arg1;	// IMP=0x00000000014217ac
- (double)speedAfterDuration:(double)arg1;	// IMP=0x0000000001421622
- (double)durationUntilStop;	// IMP=0x0000000001421610
- (void)calculateToReachDecelerationTarget;	// IMP=0x0000000001420bed
- (void)calculateDecelerationTarget;	// IMP=0x000000000141fd62
- (id)init;	// IMP=0x000000000141fd19

@end

