//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechSpeechFeatureOutputFeature : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechSpeechFeatureOutputFeature *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001139c5
- (id)flatbuffData;	// IMP=0x000000000011384d
- (Offset_d29e03ef)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000001136c6
@property(readonly, nonatomic) float energy;
@property(readonly, nonatomic) float pitch;
@property(readonly, nonatomic) float duration;
@property(readonly, nonatomic) float end_time;
@property(readonly, nonatomic) float begin_time;
@property(readonly, nonatomic) NSString *phone_name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000113567
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureOutputFeature *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000001133b3
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureOutputFeature *)arg2;	// IMP=0x000000000011339d
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000113382
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000011336a

@end

