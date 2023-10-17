//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (GKCachingAdditions)
+ (id)stringForScoreAndPercentileWithRank:(float)arg1 totalScores:(float)arg2 formattedScore:(id)arg3;	// IMP=0x00200000002290ea
+ (id)stringForRankAndPercentileWithRank:(float)arg1 totalScores:(float)arg2;	// IMP=0x0010000000228f4b
+ (id)stringForParanthenticalPercentileRankingWithRank:(float)arg1 totalScores:(float)arg2;	// IMP=0x0010000000228e16
+ (id)stringForPercentileRankingWithRank:(float)arg1 totalScores:(float)arg2;	// IMP=0x0010000000228d4a
+ (id)stringForPercentileWithRank:(float)arg1 totalScores:(float)arg2 asPercentile:(_Bool)arg3 isTop:(_Bool *)arg4;	// IMP=0x0010000000228c92
+ (id)_gkUUIDString;	// IMP=0x00100000002285a6
- (id)cacheKeyRepresentation;	// IMP=0x0020000000132c67
- (id)_gkSHA256Hash;	// IMP=0x0010000000229570
- (id)_gkArrayByTokenizingString;	// IMP=0x0010000000229237
- (id)_gkStringByUnescapingFromURLQuery;	// IMP=0x00100000002291d9
- (id)_gkLocaleSensitiveUppercaseString;	// IMP=0x0010000000228c3d
- (_Bool)_gkSearchMatchesItem:(id)arg1 withSearchTerms:(id)arg2;	// IMP=0x00100000002288ea
- (_Bool)_gkIsMixedDirection;	// IMP=0x00100000002287f2
- (_Bool)_gkIsNaturallyRTL;	// IMP=0x00100000002286fc
- (void)processUTF16CharactersForBidi:(CDUnknownBlockType)arg1;	// IMP=0x00100000002285e8
@end
