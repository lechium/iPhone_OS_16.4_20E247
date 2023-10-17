//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface REMeshLevelOfDetailDescriptor : NSObject
{
    unsigned int _meshPartEndIndex;	// 8 = 0x8
    float _minScreenArea;	// 12 = 0xc
    float _maxViewDepth;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000030f4c7
@property(readonly, nonatomic) float maxViewDepth; // @synthesize maxViewDepth=_maxViewDepth;
@property(readonly, nonatomic) float minScreenArea; // @synthesize minScreenArea=_minScreenArea;
@property(readonly, nonatomic) unsigned int meshPartEndIndex; // @synthesize meshPartEndIndex=_meshPartEndIndex;
- (_Bool)validateWithPartCount:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000030f6be
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000030f62a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000030f528
- (id)initWithMeshPartEndIndex:(unsigned int)arg1 minScreenArea:(float)arg2 maxViewDepth:(float)arg3;	// IMP=0x000000000030f4cf
- (struct MeshLodLevelInfo)lodLevelInfo;	// IMP=0x00000000002f2b02
- (id)initWithLodLevelInfo:(const struct MeshLodLevelInfo *)arg1;	// IMP=0x00000000002f2ae2

@end
