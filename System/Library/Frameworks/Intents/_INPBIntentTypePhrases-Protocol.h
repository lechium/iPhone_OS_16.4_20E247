//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBIntentType;

@protocol _INPBIntentTypePhrases <NSObject>
@property(readonly, nonatomic) unsigned long long intentVocabularyExamplesCount;
@property(copy, nonatomic) NSArray *intentVocabularyExamples;
@property(readonly, nonatomic) _Bool hasIntentType;
@property(retain, nonatomic) _INPBIntentType *intentType;
- (NSString *)intentVocabularyExamplesAtIndex:(unsigned long long)arg1;
- (void)addIntentVocabularyExamples:(NSString *)arg1;
- (void)clearIntentVocabularyExamples;
@end
