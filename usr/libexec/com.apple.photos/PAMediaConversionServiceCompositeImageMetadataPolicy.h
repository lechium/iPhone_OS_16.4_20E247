//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface PAMediaConversionServiceCompositeImageMetadataPolicy
{
    NSArray *_policies;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000002abb
+ (id)policyWithPolicies:(id)arg1;	// IMP=0x00100000000029ee
- (void).cxx_destruct;	// IMP=0x00200000000029db
@property(retain) NSArray *policies; // @synthesize policies=_policies;
- (id)processMetadata:(id)arg1;	// IMP=0x0010000000002806
- (_Bool)metadataNeedsProcessing:(id)arg1;	// IMP=0x001000000000269c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000002623
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000259a

@end
