//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLComputePassSampleBufferAttachmentDescriptorArray.h"

@class MTLComputePassSampleBufferAttachmentDescriptorInternal;

__attribute__((visibility("hidden")))
@interface MTLComputePassSampleBufferAttachmentDescriptorArrayInternal : MTLComputePassSampleBufferAttachmentDescriptorArray
{
    MTLComputePassSampleBufferAttachmentDescriptorInternal *_sampleDescriptors[4];	// 8 = 0x8
}

- (id)_descriptorAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007ef16
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;	// IMP=0x000000000007ee97
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x000000000007ee1c
- (void)dealloc;	// IMP=0x000000000007edbc

@end
