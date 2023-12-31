//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTranslationResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TranslationResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e741a
- (id)flatbuffData;	// IMP=0x00000000000e72a2
- (Offset_eb48cfa2)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000e6868
@property(readonly, nonatomic) _Bool final_message;
@property(readonly, nonatomic) NSString *sequence_id;
- (void)engine_output_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e6602
- (unsigned long long)engine_output_count;	// IMP=0x00000000000e655d
- (id)engine_output_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000e6465
@property(readonly, nonatomic) NSArray *engine_output;
@property(readonly, nonatomic) NSString *engine_input;
- (void)n_best_translated_phrases_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e6111
- (unsigned long long)n_best_translated_phrases_count;	// IMP=0x00000000000e606c
- (id)n_best_translated_phrases_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000e5f74
@property(readonly, nonatomic) NSArray *n_best_translated_phrases;
@property(readonly, nonatomic) NSString *return_string;
@property(readonly, nonatomic) int return_code;
@property(readonly, nonatomic) NSString *request_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e5cd5
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000e5b21
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationResponse *)arg2;	// IMP=0x00000000000e5b0b
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000e5af0
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000e5ad8

@end

