//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTRecognitionResult, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTSpeechTranslationFinalRecognitionResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct SpeechTranslationFinalRecognitionResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000011f69d
- (id)flatbuffData;	// IMP=0x000000000011f525
- (Offset_88bcc1c1)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000011f226
@property(readonly, nonatomic) FTRecognitionResult *recognition_result;
@property(readonly, nonatomic) NSString *recognition_text;
@property(readonly, nonatomic) NSString *source_locale;
@property(readonly, nonatomic) NSString *return_str;
@property(readonly, nonatomic) int return_code;
@property(readonly, nonatomic) NSString *request_id;
@property(readonly, nonatomic) NSString *conversation_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011eef7
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationFinalRecognitionResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000011ed43
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationFinalRecognitionResponse *)arg2;	// IMP=0x000000000011ed2d
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000011ed12
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000011ecfa

@end
