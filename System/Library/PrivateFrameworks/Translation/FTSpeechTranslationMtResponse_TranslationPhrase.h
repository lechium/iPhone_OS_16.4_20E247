//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTTranslationPhraseMetaInfo, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTSpeechTranslationMtResponse_TranslationPhrase : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TranslationPhrase *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000120f29
- (id)flatbuffData;	// IMP=0x0000000000120db1
- (Offset_20dc0a9a)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000120be2
@property(readonly, nonatomic) FTTranslationPhraseMetaInfo *meta_info_data;
@property(readonly, nonatomic) _Bool low_confidence;
@property(readonly, nonatomic) NSString *meta_info;
@property(readonly, nonatomic) NSString *translation_phrase;
@property(readonly, nonatomic) float confidence;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001209c9
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationPhrase *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000120815
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationPhrase *)arg2;	// IMP=0x00000000001207ff
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000001207e4
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000001207cc

@end

