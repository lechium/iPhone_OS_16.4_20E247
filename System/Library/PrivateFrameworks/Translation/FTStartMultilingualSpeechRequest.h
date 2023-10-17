//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTStartSpeechRequest, NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTStartMultilingualSpeechRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct StartMultilingualSpeechRequest *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000012656c
- (id)flatbuffData;	// IMP=0x00000000001263f4
- (Offset_0fc89d0c)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000125f79
- (void)language_parameters_by_id_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000125db2
- (unsigned long long)language_parameters_by_id_count;	// IMP=0x0000000000125d0d
- (id)language_parameters_by_id_objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000125c15
@property(readonly, nonatomic) NSArray *language_parameters_by_id;
@property(readonly, nonatomic) FTStartSpeechRequest *start_speech_request;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000125a18
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartMultilingualSpeechRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000125864
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartMultilingualSpeechRequest *)arg2;	// IMP=0x000000000012584e
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000125833
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000012581b

@end
