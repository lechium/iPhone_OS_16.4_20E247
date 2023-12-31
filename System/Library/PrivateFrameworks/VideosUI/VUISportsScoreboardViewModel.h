//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUISportsScoreboardViewModel : NSObject
{
    NSDictionary *_dictionaryRepresentation;	// 8 = 0x8
    _Bool _showScoreboard;	// 16 = 0x10
    _Bool _configureScoreUpdates;	// 17 = 0x11
    _Bool _isVersus;	// 18 = 0x12
    NSString *_canonicalId;	// 24 = 0x18
    NSDictionary *_leagueContext;	// 32 = 0x20
    NSArray *_scores;	// 40 = 0x28
    NSDictionary *_contentMetadata;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000295936
@property(readonly, nonatomic) NSDictionary *contentMetadata; // @synthesize contentMetadata=_contentMetadata;
@property(readonly, nonatomic) _Bool isVersus; // @synthesize isVersus=_isVersus;
@property(nonatomic) _Bool configureScoreUpdates; // @synthesize configureScoreUpdates=_configureScoreUpdates;
@property(readonly, nonatomic) _Bool showScoreboard; // @synthesize showScoreboard=_showScoreboard;
@property(readonly, nonatomic) NSArray *scores; // @synthesize scores=_scores;
@property(readonly, nonatomic) NSDictionary *leagueContext; // @synthesize leagueContext=_leagueContext;
@property(readonly, nonatomic) NSString *canonicalId; // @synthesize canonicalId=_canonicalId;
- (void)removeUnicodeFromScoreValuesIfNeeded;	// IMP=0x0000000000295655
- (id)dictionaryRepresentation;	// IMP=0x0000000000295637
- (id)jsContextDictionary;	// IMP=0x000000000029558f
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002953f8

@end

