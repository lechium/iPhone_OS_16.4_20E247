//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HSSetupStateMachine : NSObject
{
}

- (id)_voiceProfileCheckFuture;	// IMP=0x004000000000c588
- (_Bool)_deviceIsOnAMultiUserLanguage;	// IMP=0x001000000000c4e4
- (_Bool)_shouldSkipUseSiriFlow:(id)arg1;	// IMP=0x001000000000c449
- (_Bool)_isVoiceRecognitionEnabled:(id)arg1;	// IMP=0x001000000000c2a6
- (_Bool)_shouldShowSiriEndpointStep:(id)arg1;	// IMP=0x001000000000c1ba
- (_Bool)_sync_shouldSkipUseAirPlayStep:(id)arg1;	// IMP=0x001000000000c1b2
- (_Bool)_sync_shouldSkipSiriForEveryoneStep:(id)arg1;	// IMP=0x001000000000c105
- (_Bool)_sync_shouldSkipPersonalRequestsStep:(id)arg1;	// IMP=0x001000000000c037
- (_Bool)_sync_shouldSkipSiriVoiceTrainingStep:(id)arg1;	// IMP=0x001000000000c02f
- (_Bool)_sync_shouldSkipSetupSiriStep:(id)arg1;	// IMP=0x001000000000bfa7
- (_Bool)_shouldSkipSiriVoiceRecognitionStep:(id)arg1;	// IMP=0x001000000000bf1c
- (_Bool)_shouldSkipSiriUpdateRequiredStep:(id)arg1;	// IMP=0x001000000000bdf7
- (_Bool)_shouldSkipUseSiriStep:(id)arg1;	// IMP=0x001000000000bba4
- (_Bool)_shouldSkipSafetyAndSecurityStep:(id)arg1;	// IMP=0x001000000000ba37
- (_Bool)stepRequiresIdentifyButton:(long long)arg1 withCoordinator:(id)arg2 configuration:(id)arg3;	// IMP=0x001000000000b9a9
- (_Bool)stepRequiresDismissalConfirmation:(long long)arg1 withCoordinator:(id)arg2 configuration:(id)arg3;	// IMP=0x001000000000b860
- (_Bool)_sync_shouldSkipStep:(long long)arg1 withConfiguration:(id)arg2;	// IMP=0x001000000000acf7
- (id)shouldSkipStep:(long long)arg1 withConfiguration:(id)arg2;	// IMP=0x00100000000088e8
- (long long)stepFollowingStep:(long long)arg1 withConfiguration:(id)arg2;	// IMP=0x001000000000805f
- (_Bool)configSupportsPairing:(id)arg1;	// IMP=0x0010000000007fad
- (Class)configurationObjectClass;	// IMP=0x0010000000007f9c

@end

