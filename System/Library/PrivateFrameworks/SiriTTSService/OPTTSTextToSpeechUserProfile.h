//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OPTTSTextToSpeechUserProfile : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechUserProfile *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001a8e2
- (id)flatbuffData;	// IMP=0x000000000001a7a0
- (Offset_4fc92dd1)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000001a360
- (void)resources_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a199
- (unsigned long long)resources_count;	// IMP=0x000000000001a0f4
- (id)resources_objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000019fd5
@property(readonly, nonatomic) NSArray *resources;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000019eab
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechUserProfile *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000019cce
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechUserProfile *)arg2;	// IMP=0x0000000000019cb8
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000019c9d
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000019c85

@end
