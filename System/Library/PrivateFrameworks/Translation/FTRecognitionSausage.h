//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTRecognitionSausage : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct RecognitionSausage *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000af7d4
- (id)flatbuffData;	// IMP=0x00000000000af65c
- (Offset_d0166a8b)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000af22f
- (void)positional_tok_phrase_alt_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000af068
- (unsigned long long)positional_tok_phrase_alt_count;	// IMP=0x00000000000aefc3
- (id)positional_tok_phrase_alt_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000aeecb
@property(readonly, nonatomic) NSArray *positional_tok_phrase_alt;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000aeda1
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionSausage *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000aebed
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionSausage *)arg2;	// IMP=0x00000000000aebd7
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000aebbc
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000aeba4

@end

