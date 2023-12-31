//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVAudioOutputSettings.h"

__attribute__((visibility("hidden")))
@interface AVAVAudioSettingsAudioOutputSettings : AVAudioOutputSettings
{
}

+ (id)_audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x001000000010ff26
+ (id)eligibleOutputSettingsDictionaryKeys;	// IMP=0x001000000010fe51
- (id)audioOptions;	// IMP=0x00000000001120c6
- (struct AudioChannelLayout *)copyAudioChannelLayoutForSourceFormatDescription:(struct opaqueCMFormatDescription *)arg1 audioChannelLayoutSize:(unsigned long long *)arg2;	// IMP=0x0000000000111f08
- (void)getAudioStreamBasicDescription:(struct AudioStreamBasicDescription *)arg1 forAudioFileTypeID:(unsigned int)arg2 sourceFormatDescription:(struct opaqueCMFormatDescription *)arg3;	// IMP=0x00000000001115c0
- (_Bool)canFullySpecifyOutputFormatReturningReason:(id *)arg1;	// IMP=0x000000000011130f
- (_Bool)encoderIsAvailableOnCurrentSystemReturningError:(id *)arg1;	// IMP=0x0000000000111214
- (_Bool)willYieldCompressedSamples;	// IMP=0x00000000001111cd
- (id)initWithTrustedAVAudioSettingsDictionary:(id)arg1;	// IMP=0x00000000001111b9
- (id)initWithAVAudioSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x000000000010ff62

@end

