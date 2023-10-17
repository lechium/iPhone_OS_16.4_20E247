//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface TransitPreferences
{
    _Bool _showICFares;	// 8 = 0x8
    int _sortOption;	// 12 = 0xc
    long long _disabledModes;	// 16 = 0x10
    NSNumber *_surchargeOption;	// 24 = 0x18
}

+ (void)toggleMode:(long long)arg1 inUserDefaults:(id)arg2;	// IMP=0x0020000000b3a805
+ (_Bool)isModeDisabled:(long long)arg1 inUserDefaults:(id)arg2;	// IMP=0x0010000000b3a7bb
+ (long long)disabledModesByTogglingMode:(long long)arg1 inModes:(long long)arg2;	// IMP=0x0010000000b3a79f
+ (_Bool)isModeDisabled:(long long)arg1 inModes:(long long)arg2;	// IMP=0x0010000000b3a793
+ (long long)enabledModesFromDisabled:(long long)arg1;	// IMP=0x0010000000b3a785
- (void).cxx_destruct;	// IMP=0x0010000000b3a94b
@property(nonatomic) _Bool showICFares; // @synthesize showICFares=_showICFares;
@property(retain, nonatomic) NSNumber *surchargeOption; // @synthesize surchargeOption=_surchargeOption;
@property(nonatomic) int sortOption; // @synthesize sortOption=_sortOption;
@property(nonatomic) long long disabledModes; // @synthesize disabledModes=_disabledModes;
- (id)transitOptions;	// IMP=0x0010000000b3a77b
- (_Bool)isModeDisabled:(long long)arg1;	// IMP=0x0010000000b3a731
- (void)_copyPropertiesTo:(id)arg1;	// IMP=0x0010000000b3a669
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000b3a5f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000b3a5e5
- (id)_values;	// IMP=0x0010000000b3a45b
- (id)_keys;	// IMP=0x0010000000b3a44e
- (void)loadValuesFromDefaults;	// IMP=0x0010000000b3a2e1
- (_Bool)hasAnyNonStandardPreferences;	// IMP=0x0010000000b3a2c8
- (id)initWithTransitOptions:(id)arg1 defaults:(id)arg2;	// IMP=0x0010000000b3a104
- (id)transitPreferencesByOverridingPropertiesWithUserInfo:(id)arg1;	// IMP=0x001000000078502e

@end
