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

+ (void)toggleMode:(long long)arg1 inUserDefaults:(id)arg2;	// IMP=0x00200000000509dd
+ (_Bool)isModeDisabled:(long long)arg1 inUserDefaults:(id)arg2;	// IMP=0x0010000000050993
+ (long long)disabledModesByTogglingMode:(long long)arg1 inModes:(long long)arg2;	// IMP=0x0010000000050977
+ (_Bool)isModeDisabled:(long long)arg1 inModes:(long long)arg2;	// IMP=0x001000000005096b
+ (long long)enabledModesFromDisabled:(long long)arg1;	// IMP=0x001000000005095d
- (void).cxx_destruct;	// IMP=0x0020000000050b23
@property(nonatomic) _Bool showICFares; // @synthesize showICFares=_showICFares;
@property(retain, nonatomic) NSNumber *surchargeOption; // @synthesize surchargeOption=_surchargeOption;
@property(nonatomic) int sortOption; // @synthesize sortOption=_sortOption;
@property(nonatomic) long long disabledModes; // @synthesize disabledModes=_disabledModes;
- (id)transitOptions;	// IMP=0x0010000000050953
- (_Bool)isModeDisabled:(long long)arg1;	// IMP=0x0010000000050909
- (void)_copyPropertiesTo:(id)arg1;	// IMP=0x0010000000050841
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000507c8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000507bd
- (id)_values;	// IMP=0x0010000000050633
- (id)_keys;	// IMP=0x0010000000050626
- (void)loadValuesFromDefaults;	// IMP=0x00100000000504b9
- (_Bool)hasAnyNonStandardPreferences;	// IMP=0x00100000000504a0
- (id)initWithTransitOptions:(id)arg1 defaults:(id)arg2;	// IMP=0x00100000000502dc

@end

