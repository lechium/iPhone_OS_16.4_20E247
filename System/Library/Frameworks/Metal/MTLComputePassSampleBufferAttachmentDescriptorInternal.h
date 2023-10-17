//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLComputePassSampleBufferAttachmentDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLComputePassSampleBufferAttachmentDescriptorInternal : MTLComputePassSampleBufferAttachmentDescriptor
{
    struct MTLComputePassSampleBufferAttachmentDescriptorPrivate _private;	// 8 = 0x8
}

- (unsigned long long)hash;	// IMP=0x000000000007ed20
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007eca5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007ec5a
- (unsigned long long)endOfEncoderSampleIndex;	// IMP=0x000000000007ec48
- (void)setEndOfEncoderSampleIndex:(unsigned long long)arg1;	// IMP=0x000000000007ec36
- (unsigned long long)startOfEncoderSampleIndex;	// IMP=0x000000000007ec24
- (void)setStartOfEncoderSampleIndex:(unsigned long long)arg1;	// IMP=0x000000000007ec12
- (id)sampleBuffer;	// IMP=0x000000000007ec01
- (void)setSampleBuffer:(id)arg1;	// IMP=0x000000000007ebc3
- (const struct MTLComputePassSampleBufferAttachmentDescriptorPrivate *)_descriptorPrivate;	// IMP=0x000000000007ebb3
- (void)dealloc;	// IMP=0x000000000007eb71
- (id)init;	// IMP=0x000000000007eb31

@end
