//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface AudioPreferences
{
    NSNumber *_drivingModernPreference;	// 8 = 0x8
    NSNumber *_walkingModernPreference;	// 16 = 0x10
    NSNumber *_cyclingModernPreference;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001af10
- (id)_values;	// IMP=0x001000000001ade5
- (id)_keys;	// IMP=0x001000000001add8
- (void)loadValuesFromDefaults;	// IMP=0x001000000001acbc
- (void)synchronize;	// IMP=0x001000000001a9c5
- (void)setGuidanceLevel:(unsigned long long)arg1 forTransportType:(int)arg2;	// IMP=0x001000000001a994
- (unsigned long long)guidanceLevelForTransportType:(int)arg1;	// IMP=0x001000000001a963
- (_Bool)_migratedMutedValue;	// IMP=0x001000000001a8f0
- (void)_migrateVolumeSettings;	// IMP=0x001000000001a757
@property(nonatomic) unsigned long long cyclingVoiceGuidance;
@property(nonatomic) unsigned long long walkingVoiceGuidance;
@property(nonatomic) unsigned long long drivingVoiceGuidance;

@end

