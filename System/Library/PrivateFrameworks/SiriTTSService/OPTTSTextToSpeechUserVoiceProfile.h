//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OPTTSTextToSpeechUserVoiceProfile : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechUserVoiceProfile *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001bafb
- (id)flatbuffData;	// IMP=0x000000000001b9b9
- (Offset_0c4f1d74)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000001b88a
@property(readonly, nonatomic) float duration_std;
@property(readonly, nonatomic) float duration_mean;
@property(readonly, nonatomic) float energy_std;
@property(readonly, nonatomic) float energy_mean;
@property(readonly, nonatomic) float pitch_std;
@property(readonly, nonatomic) float pitch_mean;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b76b
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechUserVoiceProfile *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000001b58e
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechUserVoiceProfile *)arg2;	// IMP=0x000000000001b578
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000001b55d
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000001b545

@end
