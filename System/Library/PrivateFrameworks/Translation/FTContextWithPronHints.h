//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTContextWithPronHints : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct ContextWithPronHints *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c0dbc
- (id)flatbuffData;	// IMP=0x00000000000c0c44
- (Offset_b036dfee)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000c0779
- (void)pron_hints_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c05ac
- (unsigned long long)pron_hints_count;	// IMP=0x00000000000c0507
- (id)pron_hints_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000c0410
@property(readonly, nonatomic) NSArray *pron_hints;
@property(readonly, nonatomic) NSString *contextual_text;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c0278
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ContextWithPronHints *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000c00c4
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ContextWithPronHints *)arg2;	// IMP=0x00000000000c00ae
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c0093
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c007b

@end
