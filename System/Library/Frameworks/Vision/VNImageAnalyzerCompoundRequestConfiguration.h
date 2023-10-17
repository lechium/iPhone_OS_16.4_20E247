//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VNImageAnalyzerCompoundRequestConfiguration
{
    NSString *_detectorType;	// 8 = 0x8
    NSDictionary *_detectorConfigurationOptions;	// 16 = 0x10
    NSArray *_originalRequestConfigurations;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000068155
@property(copy, nonatomic) NSArray *originalRequestConfigurations; // @synthesize originalRequestConfigurations=_originalRequestConfigurations;
@property(copy, nonatomic) NSDictionary *detectorConfigurationOptions; // @synthesize detectorConfigurationOptions=_detectorConfigurationOptions;
@property(copy, nonatomic) NSString *detectorType; // @synthesize detectorType=_detectorType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006804a

@end
