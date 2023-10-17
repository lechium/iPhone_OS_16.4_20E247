//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface PADAlgorithmFACResult : NSObject
{
    _Bool _isHeadMovementDetected;	// 8 = 0x8
    double _assessment;	// 16 = 0x10
    NSArray *_faceprints;	// 24 = 0x18
    NSArray *_referenceFrameIndices;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000149a3
@property(retain, nonatomic) NSArray *referenceFrameIndices; // @synthesize referenceFrameIndices=_referenceFrameIndices;
@property(nonatomic) _Bool isHeadMovementDetected; // @synthesize isHeadMovementDetected=_isHeadMovementDetected;
@property(retain, nonatomic) NSArray *faceprints; // @synthesize faceprints=_faceprints;
@property(nonatomic) double assessment; // @synthesize assessment=_assessment;

@end
