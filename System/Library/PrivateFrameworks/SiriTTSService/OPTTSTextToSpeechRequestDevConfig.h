//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface OPTTSTextToSpeechRequestDevConfig : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechRequestDevConfig *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001af3e
- (id)flatbuffData;	// IMP=0x000000000001adfc
- (Offset_8a6daecd)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000001ac79
@property(readonly, nonatomic) _Bool return_server_info;
@property(readonly, nonatomic) NSString *resource_asset_path;
@property(readonly, nonatomic) NSString *voice_asset_path;
@property(readonly, nonatomic) _Bool return_log;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001ab30
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestDevConfig *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000001a953
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestDevConfig *)arg2;	// IMP=0x000000000001a93d
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000001a922
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000001a90a

@end

