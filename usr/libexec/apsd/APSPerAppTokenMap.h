//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface APSPerAppTokenMap : NSObject
{
    NSMutableDictionary *_perAppTokenMap;	// 8 = 0x8
    long long _missingTokens;	// 16 = 0x10
    _Bool _enumerating;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000078089
- (id)description;	// IMP=0x0010000000078075
- (id)debugDescription;	// IMP=0x001000000007805f
- (void)enumerateTokensWithInfoUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000077c6f
- (void)enumerateTokensUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000778a1
- (void)enumerateMissingTokensUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000777a6
- (id)identifiersForTopic:(id)arg1;	// IMP=0x00100000000776c0
- (id)topics;	// IMP=0x0010000000077625
- (_Bool)isEmpty;	// IMP=0x00100000000775c9
- (_Bool)hasMissingTokens;	// IMP=0x001000000007758f
- (id)tokensForTopic:(id)arg1;	// IMP=0x0010000000077319
- (id)allPerAppTokens;	// IMP=0x0010000000077110
- (void)setFlag:(_Bool)arg1 forTopic:(id)arg2 identifier:(id)arg3;	// IMP=0x0010000000077008
- (_Bool)flagForTopic:(id)arg1 identifier:(id)arg2;	// IMP=0x0010000000076efa
- (id)infoForTopic:(id)arg1 identifier:(id)arg2;	// IMP=0x0010000000076dd4
- (id)tokenForTopic:(id)arg1 identifier:(id)arg2;	// IMP=0x0010000000076cba
- (void)removeAllTokens;	// IMP=0x00100000000768f8
- (void)setToken:(id)arg1 forInfo:(id)arg2;	// IMP=0x001000000007663d
- (void)setToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3;	// IMP=0x0010000000076598
- (void)removeIdentifier:(id)arg1 forTopic:(id)arg2;	// IMP=0x001000000007641e
- (id)init;	// IMP=0x00100000000763c8

@end

