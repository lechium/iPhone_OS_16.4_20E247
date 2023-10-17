//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface SDShareSheetProxyLoaderChangeDetails : NSObject
{
    NSMutableArray *_proxySections;	// 8 = 0x8
    NSMutableDictionary *_resultsBySectionType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000173351
- (void);	// IMP=0x0010000000173340
@property(retain, nonatomic) NSMutableDictionary *resultsBySectionType; // @synthesize resultsBySectionType=_resultsBySectionType;
@property(retain, nonatomic) NSMutableArray *proxySections; // @synthesize proxySections=_proxySections;
- (id)failedIndexesForProxySection:(id)arg1;	// IMP=0x0010000000173232
- (id)loadedIndexesForProxySection:(id)arg1;	// IMP=0x0010000000173149
- (void)addResult:(id)arg1 forProxySection:(id)arg2;	// IMP=0x0010000000172f55
@property(readonly, nonatomic) NSArray *changedProxySections;
- (id)init;	// IMP=0x0010000000172e73

@end
