//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PAMediaConversionServiceSetCaptionImageMetadataPolicy
{
    NSString *_caption;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000000040d1
+ (id)policyWithCaption:(id)arg1;	// IMP=0x001000000000407f
- (void).cxx_destruct;	// IMP=0x00200000000044e0
@property(copy) NSString *caption; // @synthesize caption=_caption;
- (id)processMetadata:(id)arg1;	// IMP=0x00100000000042fd
- (_Bool)metadataNeedsProcessing:(id)arg1;	// IMP=0x00100000000041ea
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000004171
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000040d9

@end
