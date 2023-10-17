//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface AutocompleteMatchInfo : NSObject
{
    NSHashTable *_observers;	// 8 = 0x8
    _Bool _shownToUser;	// 16 = 0x10
    _Bool _hasClientRankingDebug;	// 17 = 0x11
    _Bool _hasSortPriorityDebug;	// 18 = 0x12
    int _ageInSeconds;	// 20 = 0x14
    unsigned long long _matchType;	// 24 = 0x18
    double _peopleSuggesterRank;	// 32 = 0x20
    double _fractionOfMatch;	// 40 = 0x28
    double _clientRankingDebug;	// 48 = 0x30
    long long _sortPriorityDebug;	// 56 = 0x38
}

+ (id)matchInfoWithType:(unsigned long long)arg1;	// IMP=0x002000000096166b
- (void).cxx_destruct;	// IMP=0x0020000000961af2
@property(nonatomic) long long sortPriorityDebug; // @synthesize sortPriorityDebug=_sortPriorityDebug;
@property(readonly, nonatomic) _Bool hasSortPriorityDebug; // @synthesize hasSortPriorityDebug=_hasSortPriorityDebug;
@property(nonatomic) double clientRankingDebug; // @synthesize clientRankingDebug=_clientRankingDebug;
@property(readonly, nonatomic) _Bool hasClientRankingDebug; // @synthesize hasClientRankingDebug=_hasClientRankingDebug;
@property(nonatomic) _Bool shownToUser; // @synthesize shownToUser=_shownToUser;
@property(nonatomic) double fractionOfMatch; // @synthesize fractionOfMatch=_fractionOfMatch;
@property(nonatomic) int ageInSeconds; // @synthesize ageInSeconds=_ageInSeconds;
@property(nonatomic) double peopleSuggesterRank; // @synthesize peopleSuggesterRank=_peopleSuggesterRank;
@property(readonly, nonatomic) unsigned long long matchType; // @synthesize matchType=_matchType;
- (void)notifyObserversOfChange;	// IMP=0x001000000096194d
- (void)removeObserver:(id)arg1;	// IMP=0x001000000096185b
- (void)addObserver:(id)arg1;	// IMP=0x0010000000961845
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000096172b
- (id)initWithType:(unsigned long long)arg1;	// IMP=0x00100000009616a2

@end
