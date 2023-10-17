//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPARAsset, NSString;

__attribute__((visibility("hidden")))
@interface LPFetcherARAssetResponse
{
    LPARAsset *_arAsset;	// 24 = 0x18
}

+ (id)responseForFetcher:(id)arg1 withData:(id)arg2 MIMEType:(id)arg3;	// IMP=0x0010000000030501
+ (id)arAssetPropertiesForFetcher:(id)arg1;	// IMP=0x00100000000304e8
+ (_Bool)isValidMIMEType:(id)arg1;	// IMP=0x00100000000304cf
- (void).cxx_destruct;	// IMP=0x00000000000306c5
@property(readonly, retain, nonatomic) LPARAsset *arAsset; // @synthesize arAsset=_arAsset;
- (id)initWithARAsset:(id)arg1 fetcher:(id)arg2;	// IMP=0x0000000000030624

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
