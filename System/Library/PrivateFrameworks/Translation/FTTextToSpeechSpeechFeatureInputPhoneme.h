//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechSpeechFeatureInputPhoneme : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechSpeechFeatureInputPhoneme *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001145ad
- (id)flatbuffData;	// IMP=0x0000000000114435
- (Offset_8cbfe151)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000011407d
- (void)phonemes_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000113eb0
- (unsigned long long)phonemes_count;	// IMP=0x0000000000113e0b
- (id)phonemes_objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000113d14
@property(readonly, nonatomic) NSArray *phonemes;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000113bea
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureInputPhoneme *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000113a36
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureInputPhoneme *)arg2;	// IMP=0x0000000000113a20
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000113a05
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000001139ed

@end

