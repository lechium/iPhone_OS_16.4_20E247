//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechRequestMeta : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechRequestMeta *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000f8063
- (id)flatbuffData;	// IMP=0x00000000000f7eeb
- (Offset_ad483e0b)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000f7de2
@property(readonly, nonatomic) _Bool is_synthesis;
@property(readonly, nonatomic) NSString *app_id;
@property(readonly, nonatomic) long long channel_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f7d0a
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestMeta *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000f7b56
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestMeta *)arg2;	// IMP=0x00000000000f7b40
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000f7b25
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000f7b0d

@end

