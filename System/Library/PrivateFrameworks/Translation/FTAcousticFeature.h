//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTAcousticFeature : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct AcousticFeature *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b96b4
- (id)flatbuffData;	// IMP=0x00000000000b953c
- (Offset_b1e182a8)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000b90d7
@property(readonly, nonatomic) float frame_duration;
- (void)acoustic_feature_per_frame_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b8f32
- (unsigned long long)acoustic_feature_per_frame_count;	// IMP=0x00000000000b8e8d
- (id)acoustic_feature_per_frame_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000b8db1
@property(readonly, nonatomic) NSArray *acoustic_feature_per_frame;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b8c87
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AcousticFeature *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000b8ad3
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AcousticFeature *)arg2;	// IMP=0x00000000000b8abd
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000b8aa2
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000b8a8a

@end

