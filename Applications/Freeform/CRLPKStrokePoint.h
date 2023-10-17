//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLPKStroke;

@interface CRLPKStrokePoint : NSObject
{
    _Bool _inflight;	// 8 = 0x8
    CRLPKStroke *_stroke;	// 16 = 0x10
    void *_point;	// 24 = 0x18
    _Bool _pointOwned;	// 32 = 0x20
}

+ (struct _CRLPKStrokePoint)decompressStrokePoint:(struct CRLPKCompressedStrokePoint)arg1 withTimestamp:(double)arg2;	// IMP=0x00400000000834f3
+ (struct CRLPKCompressedStrokePoint)compressStrokePoint:(struct _CRLPKStrokePoint)arg1 withTimestamp:(double)arg2;	// IMP=0x00100000000833b0
- (void).cxx_destruct;	// IMP=0x0020000000083eab
- (void)dealloc;	// IMP=0x0010000000083e63
- (id)_stringFromPoint:(struct CGPoint)arg1;	// IMP=0x0010000000083e4c
- (id)description;	// IMP=0x0010000000083a9d
- (double)_aspectRatio;	// IMP=0x0010000000083a76
- (void)_setAspectRatio:(double)arg1;	// IMP=0x0010000000083a3f
- (double)_edgeWidth;	// IMP=0x0010000000083a18
- (void)_setEdgeWidth:(double)arg1;	// IMP=0x00100000000839e1
- (double)_opacity;	// IMP=0x00100000000839ba
- (void)_setOpacity:(double)arg1;	// IMP=0x0010000000083988
- (double)_radius;	// IMP=0x0010000000083961
- (void)_setRadius:(double)arg1;	// IMP=0x001000000008392a
- (double)_length;	// IMP=0x0010000000083910
- (void)_setLength:(double)arg1;	// IMP=0x00100000000838fb
- (long long)_estimationUpdateIndex;	// IMP=0x00100000000838de
- (void)_setEstimationUpdateIndex:(long long)arg1;	// IMP=0x00100000000838ca
- (_Bool)_hasEstimatedVelocity;	// IMP=0x00100000000838af
- (void)_setHasEstimatedVelocity:(_Bool)arg1;	// IMP=0x001000000008389c
@property(readonly) double velocity;
- (_Bool)_hasEstimatedAzimuthAndAltitude;	// IMP=0x0010000000083878
- (void)_setHasEstimatedAzimuthAndAltitude:(_Bool)arg1;	// IMP=0x0010000000083865
@property double altitude;
@property double azimuth;
- (_Bool)_hasEstimatedForce;	// IMP=0x00100000000837b0
- (void)_setHasEstimatedForce:(_Bool)arg1;	// IMP=0x001000000008379d
@property double force;
- (_Bool)_hasEstimatedLocation;	// IMP=0x0010000000083737
- (void)_setHasEstimatedLocation:(_Bool)arg1;	// IMP=0x0010000000083724
@property struct CGPoint location;
@property double timestamp;
- (void *)_strokePoint;	// IMP=0x001000000008367b
- (id)initWithStroke:(id)arg1 strokePoint:(void *)arg2 inflight:(_Bool)arg3;	// IMP=0x00100000000835f8
- (id)init;	// IMP=0x0010000000083588

@end
