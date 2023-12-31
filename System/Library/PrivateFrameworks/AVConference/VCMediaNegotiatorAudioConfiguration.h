//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorAudioConfiguration : NSObject
{
    unsigned int _ssrc;	// 8 = 0x8
    _Bool _allowAudioSwitching;	// 12 = 0xc
    _Bool _allowAudioRecording;	// 13 = 0xd
    _Bool _useSBR;	// 14 = 0xe
    unsigned int _audioUnitNumber;	// 16 = 0x10
    NSMutableSet *_audioPayloads;	// 24 = 0x18
    NSMutableSet *_secondaryPayloads;	// 32 = 0x20
}

@property(readonly, nonatomic) NSSet *audioPayloads; // @synthesize audioPayloads=_audioPayloads;
@property(nonatomic) unsigned int audioUnitNumber; // @synthesize audioUnitNumber=_audioUnitNumber;
@property(nonatomic) _Bool useSBR; // @synthesize useSBR=_useSBR;
@property(nonatomic) _Bool allowAudioRecording; // @synthesize allowAudioRecording=_allowAudioRecording;
@property(nonatomic) _Bool allowAudioSwitching; // @synthesize allowAudioSwitching=_allowAudioSwitching;
@property(nonatomic) unsigned int ssrc; // @synthesize ssrc=_ssrc;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000304bd6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000304a14
- (_Bool)isSecondaryPayload:(int)arg1;	// IMP=0x00000000003049db
- (void)addAudioPayload:(int)arg1 isSecondary:(_Bool)arg2;	// IMP=0x0000000000304857
- (void)dealloc;	// IMP=0x00000000003047ea
- (id)initWithAllowAudioSwitching:(_Bool)arg1 allowAudioRecording:(_Bool)arg2 useSBR:(_Bool)arg3 ssrc:(unsigned int)arg4 audioUnitNumber:(unsigned int)arg5 audioRuleCollection:(id)arg6;	// IMP=0x0000000000304570
- (id)initWithAllowAudioSwitching:(_Bool)arg1 allowAudioRecording:(_Bool)arg2 useSBR:(_Bool)arg3 ssrc:(unsigned int)arg4 audioUnitNumber:(unsigned int)arg5;	// IMP=0x0000000000304553

@end

