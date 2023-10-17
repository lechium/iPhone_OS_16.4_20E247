//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTAudioDescription, FTTextToSpeechMeta, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTBeginTextToSpeechStreamingResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct BeginTextToSpeechStreamingResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000010b0ce
- (id)flatbuffData;	// IMP=0x000000000010af56
- (Offset_afb4d078)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000010abfb
@property(readonly, nonatomic) float streaming_playback_buffer_size_in_seconds;
@property(readonly, nonatomic) FTTextToSpeechMeta *meta_info;
@property(readonly, nonatomic) FTAudioDescription *playback_description;
@property(readonly, nonatomic) FTAudioDescription *decoder_description;
@property(readonly, nonatomic) long long audio_type;
@property(readonly, nonatomic) NSString *stream_id;
@property(readonly, nonatomic) NSString *error_str;
@property(readonly, nonatomic) int error_code;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010a738
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BeginTextToSpeechStreamingResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000010a584
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BeginTextToSpeechStreamingResponse *)arg2;	// IMP=0x000000000010a56e
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000010a553
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000010a53b

@end
