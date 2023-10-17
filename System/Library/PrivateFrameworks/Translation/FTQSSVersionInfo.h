//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTQSSVersionInfo : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct QSSVersionInfo *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001336ff
- (id)flatbuffData;	// IMP=0x0000000000133587
- (Offset_5c0de950)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000133371
@property(readonly, nonatomic) NSString *qss_version_siritts;
@property(readonly, nonatomic) NSString *qss_version_serverkit;
@property(readonly, nonatomic) NSString *qss_version_brane;
@property(readonly, nonatomic) NSString *qss_version_server;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001331ae
- (id)initWithFlatbuffData:(id)arg1 root:(const struct QSSVersionInfo *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000132ffa
- (id)initWithFlatbuffData:(id)arg1 root:(const struct QSSVersionInfo *)arg2;	// IMP=0x0000000000132fe4
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000132fc9
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000132fb1

@end
