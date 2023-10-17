//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet;

@interface MapsAppTestSearchHome
{
    NSMutableSet *_updatedDataFetchers;	// 8 = 0x8
    unsigned long long _numberOfDataFetchers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000009efc7c
@property(nonatomic) unsigned long long numberOfDataFetchers; // @synthesize numberOfDataFetchers=_numberOfDataFetchers;
@property(retain, nonatomic) NSMutableSet *updatedDataFetchers; // @synthesize updatedDataFetchers=_updatedDataFetchers;
- (void)runScrollTest;	// IMP=0x00100000009efb13
- (void)continueAfterCollectingDataFromDataFetchers;	// IMP=0x00100000009efa63
- (void)didUpdateDataFetcher:(id)arg1;	// IMP=0x00100000009ef8c3
- (_Bool)runTest;	// IMP=0x00100000009ef533
- (id)initWithApplication:(id)arg1 testName:(id)arg2 options:(id)arg3;	// IMP=0x00100000009ef4d6

@end
