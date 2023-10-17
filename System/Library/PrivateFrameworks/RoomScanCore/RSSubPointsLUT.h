//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RSSubPointsLUT : NSObject
{
    float _camW;	// 8 = 0x8
    float _camH;	// 12 = 0xc
    unsigned long long _begin;	// 16 = 0x10
    unsigned long long _end;	// 24 = 0x18
    unsigned long long _size;	// 32 = 0x20
    unsigned long long _rawSize;	// 40 = 0x28
    CDStruct_8e0628e6 _intrinsics;	// 48 = 0x30
    CDStruct_14d5dc5e _pose;	// 96 = 0x60
}

@property(nonatomic) float camH; // @synthesize camH=_camH;
@property(nonatomic) float camW; // @synthesize camW=_camW;
@property(nonatomic) unsigned long long rawSize; // @synthesize rawSize=_rawSize;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) CDStruct_8e0628e6 intrinsics; // @synthesize intrinsics=_intrinsics;
@property(nonatomic) CDStruct_14d5dc5e pose; // @synthesize pose=_pose;
@property(nonatomic) unsigned long long end; // @synthesize end=_end;
@property(nonatomic) unsigned long long begin; // @synthesize begin=_begin;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d1426
- (_Bool)isEqualToRSSubPointsLUT:(id)arg1;	// IMP=0x00000000000d128c
- (id)dictionaryRepresentation;	// IMP=0x00000000000d0e3e
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000d097c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d08e8
- (id)init;	// IMP=0x00000000000d087a

@end
