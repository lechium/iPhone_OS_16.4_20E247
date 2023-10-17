//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTokenProns : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TokenProns *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d9814
- (id)flatbuffData;	// IMP=0x00000000000d969c
- (Offset_5b0c17b4)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000d8aee
- (void)normalized_prons_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d8927
- (unsigned long long)normalized_prons_count;	// IMP=0x00000000000d8882
- (id)normalized_prons_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d878a
@property(readonly, nonatomic) NSArray *normalized_prons;
- (void)prons_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d84a4
- (unsigned long long)prons_count;	// IMP=0x00000000000d83ff
- (id)prons_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d8307
@property(readonly, nonatomic) NSArray *prons;
- (void)sanitized_sequences_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d8021
- (unsigned long long)sanitized_sequences_count;	// IMP=0x00000000000d7f7c
- (id)sanitized_sequences_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d7e84
@property(readonly, nonatomic) NSArray *sanitized_sequences;
@property(readonly, nonatomic) NSString *orthography;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d7cec
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TokenProns *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000d7b38
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TokenProns *)arg2;	// IMP=0x00000000000d7b22
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000d7b07
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000d7aef

@end
