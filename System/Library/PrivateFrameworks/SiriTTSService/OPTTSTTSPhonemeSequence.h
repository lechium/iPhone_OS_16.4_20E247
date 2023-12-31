//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OPTTSTTSPhonemeSequence : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TTSPhonemeSequence *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000013e9e
- (id)flatbuffData;	// IMP=0x0000000000013d5c
- (Offset_1484d7f9)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000001391b
- (void)word_phonemes_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013754
- (unsigned long long)word_phonemes_count;	// IMP=0x00000000000136af
- (id)word_phonemes_objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000013590
@property(readonly, nonatomic) NSArray *word_phonemes;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000013466
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSPhonemeSequence *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000013289
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSPhonemeSequence *)arg2;	// IMP=0x0000000000013273
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000013258
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000013240

@end

