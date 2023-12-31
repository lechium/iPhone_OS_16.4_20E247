//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechRequest_ContextInfoEntry : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct ContextInfoEntry *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000104fb9
- (id)flatbuffData;	// IMP=0x0000000000104e41
- (Offset_247d1513)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000104d0e
@property(readonly, nonatomic) NSString *value;
@property(readonly, nonatomic) NSString *key;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000104c27
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ContextInfoEntry *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000104a73
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ContextInfoEntry *)arg2;	// IMP=0x0000000000104a5d
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000104a42
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000104a2a

@end

