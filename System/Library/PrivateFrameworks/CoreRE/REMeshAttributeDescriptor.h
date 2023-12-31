//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface REMeshAttributeDescriptor : NSObject
{
    unsigned int _payloadOffset;	// 8 = 0x8
    unsigned int _count;	// 12 = 0xc
    unsigned long long _format;	// 16 = 0x10
    unsigned long long _stepFunction;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000030b844
@property(readonly, nonatomic) unsigned long long stepFunction; // @synthesize stepFunction=_stepFunction;
@property(readonly, nonatomic) unsigned long long format; // @synthesize format=_format;
@property(readonly, nonatomic) unsigned int count; // @synthesize count=_count;
@property(readonly, nonatomic) unsigned int payloadOffset; // @synthesize payloadOffset=_payloadOffset;
@property(readonly, nonatomic) unsigned long long bufferSize;
- (_Bool)validateWithPayloadSize:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000030bdec
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000030bd49
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000030b8a8
- (id)initWithPayloadOffset:(unsigned int)arg1 count:(unsigned int)arg2 format:(unsigned long long)arg3 stepFunction:(unsigned long long)arg4;	// IMP=0x000000000030b84c
- (void)addBufferToArray:(void *)arg1 name:(const char *)arg2 payloadBuffer:(const struct Buffer *)arg3;	// IMP=0x00000000002efd02
- (id)initWithVertexAttributeDescriptor:(const struct VertexAttributeDescriptor *)arg1 payloadOffset:(unsigned int)arg2 count:(unsigned int)arg3;	// IMP=0x00000000002efcdf
- (id)initWithMeshAssetBuffer:(const void *)arg1 payloadBuilder:(void *)arg2;	// IMP=0x00000000002efb66

@end

