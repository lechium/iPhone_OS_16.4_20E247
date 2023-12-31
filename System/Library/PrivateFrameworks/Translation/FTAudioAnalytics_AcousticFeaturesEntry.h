//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTAcousticFeature, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTAudioAnalytics_AcousticFeaturesEntry : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct AcousticFeaturesEntry *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000bb659
- (id)flatbuffData;	// IMP=0x00000000000bb4e1
- (Offset_04095319)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000bb3dd
@property(readonly, nonatomic) FTAcousticFeature *value;
@property(readonly, nonatomic) NSString *key;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bb291
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AcousticFeaturesEntry *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000bb0dd
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AcousticFeaturesEntry *)arg2;	// IMP=0x00000000000bb0c7
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000bb0ac
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000bb094

@end

