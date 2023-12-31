//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PRSRankingConfiguration, SPCalculationDatastore;

@interface SPCalculationDatastoreToken : NSObject
{
    _Bool _canceled;	// 8 = 0x8
    SPCalculationDatastore *_store;	// 16 = 0x10
    unsigned long long _type;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000258dd
@property _Bool canceled; // @synthesize canceled=_canceled;
@property unsigned long long type; // @synthesize type=_type;
@property(readonly) SPCalculationDatastore *store; // @synthesize store=_store;
- (void)cancel;	// IMP=0x0010000000025897
- (id)initWithStore:(id)arg1;	// IMP=0x0010000000025824

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain) PRSRankingConfiguration *rankingInfo;
@property(readonly) Class superclass;

@end

