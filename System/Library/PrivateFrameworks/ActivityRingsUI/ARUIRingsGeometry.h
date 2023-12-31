//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ARUIRingsGeometry : NSObject
{
    unsigned int _circleSegments;	// 8 = 0x8
    float _startingRadian;	// 12 = 0xc
    float _endingRadian;	// 16 = 0x10
}

@property(nonatomic) float endingRadian; // @synthesize endingRadian=_endingRadian;
@property(nonatomic) float startingRadian; // @synthesize startingRadian=_startingRadian;
@property(nonatomic) unsigned int circleSegments; // @synthesize circleSegments=_circleSegments;
- (unsigned short *)disconnectedIndiciesGeometry;	// IMP=0x000000000001eaa7
- (unsigned int)disconnectedIndexCount;	// IMP=0x000000000001ea8c
- (unsigned short *)connectedIndiciesGeometry;	// IMP=0x000000000001e92a
- (unsigned int)indexCount;	// IMP=0x000000000001e912
- (void)enumerateVertexGeometryWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e7f3
- (unsigned int)vertexCount;	// IMP=0x000000000001e7de
- (id)init;	// IMP=0x000000000001e79c

@end

