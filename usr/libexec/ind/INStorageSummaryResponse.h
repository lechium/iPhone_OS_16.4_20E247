//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccount/AAResponse.h>

@class ICQCloudStorageSummary;

@interface INStorageSummaryResponse : AAResponse
{
    ICQCloudStorageSummary *_cloudStorageSummary;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000008bc2
@property(readonly, nonatomic) ICQCloudStorageSummary *cloudStorageSummary;
- (id)_parseUsageByMedia:(id)arg1;	// IMP=0x0010000000008850
- (id)_parseiCloudPlusFeature:(id)arg1;	// IMP=0x00100000000086c0
- (id)_parseSpecifierInfo:(id)arg1;	// IMP=0x0010000000007f66
- (id)_parseSubscriptionInfo:(id)arg1;	// IMP=0x0010000000007d48
- (id)_parseTipIcon:(id)arg1;	// IMP=0x0010000000007af6
- (id)_parseTipCriteria:(id)arg1;	// IMP=0x0010000000007895
- (id)_parseTipActionLink:(id)arg1;	// IMP=0x001000000000762f
- (id)_parseTipAction:(id)arg1;	// IMP=0x0010000000007345
- (id)_parseTip:(id)arg1;	// IMP=0x0010000000006d60
- (id)_parseTips:(id)arg1;	// IMP=0x0010000000006b26
- (void)_parseResponseDict;	// IMP=0x000000000000645a
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;	// IMP=0x001000000000633a

@end

