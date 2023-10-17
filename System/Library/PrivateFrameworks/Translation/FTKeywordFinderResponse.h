//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTRecognitionSausage, NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTKeywordFinderResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct KeywordFinderResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000f2ee6
- (id)flatbuffData;	// IMP=0x00000000000f2d6e
- (Offset_c50d7949)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000f274d
- (void)n_best_list_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f2586
- (unsigned long long)n_best_list_count;	// IMP=0x00000000000f24e1
- (id)n_best_list_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000f23e9
@property(readonly, nonatomic) NSArray *n_best_list;
@property(readonly, nonatomic) FTRecognitionSausage *corrected_sausage;
@property(readonly, nonatomic) NSString *return_str;
@property(readonly, nonatomic) int return_code;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f2009
- (id)initWithFlatbuffData:(id)arg1 root:(const struct KeywordFinderResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000f1e55
- (id)initWithFlatbuffData:(id)arg1 root:(const struct KeywordFinderResponse *)arg2;	// IMP=0x00000000000f1e3f
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000f1e24
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000f1e0c

@end
