//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPShape;

__attribute__((visibility("hidden")))
@interface CPZoneBorderNeighbor : NSObject
{
    CPShape *neighborShape;	// 8 = 0x8
    int shapeSide;	// 16 = 0x10
}

- (int)shapeSide;	// IMP=0x0000000000061574
- (void)setShapeSide:(int)arg1;	// IMP=0x000000000006156b
- (id)neighborShape;	// IMP=0x0000000000061561
- (void)setNeighborShape:(id)arg1;	// IMP=0x0000000000061533
- (void)dealloc;	// IMP=0x00000000000614f8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000614d4
- (id)initSuper;	// IMP=0x00000000000614a5
- (id)init;	// IMP=0x0000000000061462

@end

