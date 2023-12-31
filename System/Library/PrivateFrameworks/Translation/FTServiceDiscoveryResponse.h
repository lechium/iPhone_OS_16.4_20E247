//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTServiceDiscoveryResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct ServiceDiscoveryResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000119748
- (id)flatbuffData;	// IMP=0x00000000001195d0
- (Offset_25163a58)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000001190e5
- (void)zk_node_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000118f18
- (unsigned long long)zk_node_count;	// IMP=0x0000000000118e73
- (id)zk_node_objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000118d7c
@property(readonly, nonatomic) NSArray *zk_node;
@property(readonly, nonatomic) NSString *error_str;
@property(readonly, nonatomic) int error_code;
@property(readonly, nonatomic) NSString *session_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000118b4b
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ServiceDiscoveryResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000118997
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ServiceDiscoveryResponse *)arg2;	// IMP=0x0000000000118981
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000118966
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000011894e

@end

