//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTRecognitionSausage, NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTSpeechTranslationInfo : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct SpeechTranslationInfo *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000df7fd
- (id)flatbuffData;	// IMP=0x00000000000df685
- (Offset_b4e49498)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000df294
- (void)raw_nbest_choices_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000df0cd
- (unsigned long long)raw_nbest_choices_count;	// IMP=0x00000000000df028
- (id)raw_nbest_choices_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000def30
@property(readonly, nonatomic) NSArray *raw_nbest_choices;
@property(readonly, nonatomic) FTRecognitionSausage *raw_sausage;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ded33
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationInfo *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000deb7f
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationInfo *)arg2;	// IMP=0x00000000000deb69
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000deb4e
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000deb36

@end

