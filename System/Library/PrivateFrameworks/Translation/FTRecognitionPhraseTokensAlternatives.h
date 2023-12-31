//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTRecognitionPhraseTokensAlternatives : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct RecognitionPhraseTokensAlternatives *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000aeb7c
- (id)flatbuffData;	// IMP=0x00000000000aea04
- (Offset_b504f884)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000ae5bc
@property(readonly, nonatomic) _Bool has_unsuggested_alternatives;
- (void)tok_phrases_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ae3c4
- (unsigned long long)tok_phrases_count;	// IMP=0x00000000000ae31f
- (id)tok_phrases_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000ae227
@property(readonly, nonatomic) NSArray *tok_phrases;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ae0fd
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionPhraseTokensAlternatives *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000adf49
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionPhraseTokensAlternatives *)arg2;	// IMP=0x00000000000adf33
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000adf18
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000adf00

@end

