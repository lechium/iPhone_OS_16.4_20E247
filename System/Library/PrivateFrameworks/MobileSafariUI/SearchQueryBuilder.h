//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _SFSearchEngineInfo;

__attribute__((visibility("hidden")))
@interface SearchQueryBuilder : NSObject
{
    NSString *queryString;	// 8 = 0x8
    _SFSearchEngineInfo *engineInfo;	// 16 = 0x10
}

+ (id)searchQueryBuilderWithXWebSearchURL:(id)arg1;	// IMP=0x00600000000e3827
+ (id)searchQueryBuilderWithQuery:(id)arg1;	// IMP=0x00600000000e37da
- (void).cxx_destruct;	// IMP=0x00000000000e3918
- (id)searchEngineInfo;	// IMP=0x00000000000e390a
- (_Bool)searchEngineIsDefault;	// IMP=0x00000000000e389c
- (id)queryString;	// IMP=0x00000000000e388e
- (id)searchURL;	// IMP=0x00000000000e3874
- (id)initWithXWebSearchURL:(id)arg1;	// IMP=0x00000000000e35f0
- (id)initWithQueryString:(id)arg1;	// IMP=0x00000000000e3551
- (id)initWithSearchEngineInfo:(id)arg1 queryString:(id)arg2;	// IMP=0x00000000000e34a9

@end
