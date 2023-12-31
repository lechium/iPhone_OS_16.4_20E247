//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CRLPathIntersection : NSObject
{
    long long mSegment;	// 8 = 0x8
    double mT;	// 16 = 0x10
    long long mSegmentB;	// 24 = 0x18
    double mTB;	// 32 = 0x20
    struct CGPoint mPoint;	// 40 = 0x28
}

@property(readonly, nonatomic) double tB; // @synthesize tB=mTB;
@property(readonly, nonatomic) long long segmentB; // @synthesize segmentB=mSegmentB;
@property(nonatomic) struct CGPoint point; // @synthesize point=mPoint;
@property(readonly, nonatomic) double t; // @synthesize t=mT;
@property(readonly, nonatomic) long long segment; // @synthesize segment=mSegment;
- (long long)compareT:(id)arg1;	// IMP=0x00100000003c866d
- (long long)compareSegmentAndT:(id)arg1;	// IMP=0x00100000003c85eb
- (id)description;	// IMP=0x00100000003c85a6
- (id)initWithSegment:(long long)arg1 atT:(double)arg2 onSegmentB:(long long)arg3 atT:(double)arg4 atPoint:(struct CGPoint)arg5;	// IMP=0x00100000003c8522
- (id)initWithSegment:(long long)arg1 atT:(double)arg2 atPoint:(struct CGPoint)arg3;	// IMP=0x00100000003c8502

@end

