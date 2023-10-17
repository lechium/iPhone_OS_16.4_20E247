//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLStencilDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLStencilDescriptorInternal : MTLStencilDescriptor
{
    struct MTLStencilDescriptorPrivate _private;	// 8 = 0x8
}

- (void)setWriteMask:(unsigned int)arg1;	// IMP=0x0000000000102f90
- (unsigned int)writeMask;	// IMP=0x0000000000102f7f
- (void)setReadMask:(unsigned int)arg1;	// IMP=0x0000000000102f6e
- (unsigned int)readMask;	// IMP=0x0000000000102f5d
- (void)setDepthStencilPassOperation:(unsigned long long)arg1;	// IMP=0x0000000000102f4b
- (unsigned long long)depthStencilPassOperation;	// IMP=0x0000000000102f39
- (void)setDepthFailureOperation:(unsigned long long)arg1;	// IMP=0x0000000000102f27
- (unsigned long long)depthFailureOperation;	// IMP=0x0000000000102f15
- (void)setStencilFailureOperation:(unsigned long long)arg1;	// IMP=0x0000000000102f03
- (unsigned long long)stencilFailureOperation;	// IMP=0x0000000000102ef1
- (void)setStencilCompareFunction:(unsigned long long)arg1;	// IMP=0x0000000000102ee0
- (unsigned long long)stencilCompareFunction;	// IMP=0x0000000000102ecf
- (id)description;	// IMP=0x0000000000102ebb
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000102c85
@property(readonly) const struct MTLStencilDescriptorPrivate *stencilPrivate;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000102c09
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000102b81
- (unsigned long long)hash;	// IMP=0x0000000000102b44
- (id)init;	// IMP=0x0000000000102ae7

@end
