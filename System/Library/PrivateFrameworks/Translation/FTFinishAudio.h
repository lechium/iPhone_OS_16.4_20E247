//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTFinishAudio : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct FinishAudio *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c4b00
- (id)flatbuffData;	// IMP=0x00000000000c4988
- (Offset_4c45a82e)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000c41ce
- (void)server_feature_latency_distribution_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c4007
- (unsigned long long)server_feature_latency_distribution_count;	// IMP=0x00000000000c3f62
- (id)server_feature_latency_distribution_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000c3e6a
@property(readonly, nonatomic) NSArray *server_feature_latency_distribution;
- (void)features_at_endpoint_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c3bd4
- (unsigned long long)features_at_endpoint_count;	// IMP=0x00000000000c3b2f
- (id)features_at_endpoint_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000c3a53
@property(readonly, nonatomic) NSArray *features_at_endpoint;
@property(readonly, nonatomic) float total_audio_recorded_seconds;
@property(readonly, nonatomic) int packet_count;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c38d0
- (id)initWithFlatbuffData:(id)arg1 root:(const struct FinishAudio *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000c371c
- (id)initWithFlatbuffData:(id)arg1 root:(const struct FinishAudio *)arg2;	// IMP=0x00000000000c3706
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c36eb
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c36d3

@end
