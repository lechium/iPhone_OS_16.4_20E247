//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTLanguageParameters : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct LanguageParameters *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001257f3
- (id)flatbuffData;	// IMP=0x000000000012567b
- (Offset_3379e06c)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000001254d8
@property(readonly, nonatomic) NSString *fork_id;
@property(readonly, nonatomic) NSString *request_locale;
@property(readonly, nonatomic) NSString *language;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000125383
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguageParameters *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000001251cf
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguageParameters *)arg2;	// IMP=0x00000000001251b9
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000012519e
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000125186

@end

