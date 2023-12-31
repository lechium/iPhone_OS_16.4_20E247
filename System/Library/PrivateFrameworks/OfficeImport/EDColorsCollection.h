//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface EDColorsCollection
{
    unsigned long long mDefaultColorsCount;	// 16 = 0x10
}

+ (int)oadSchemeColorIdFromThemeIndex:(int)arg1;	// IMP=0x00100000001b7f8a
+ (unsigned int)xlColorIndexFromTCSystemColorIDEnum:(int)arg1;	// IMP=0x001000000039f43c
+ (int)systemColorIdFromIndex:(unsigned long long)arg1;	// IMP=0x0010000000115edc
+ (_Bool)isSystemColorId:(unsigned long long)arg1;	// IMP=0x0010000000115ec2
@property(readonly, copy) NSString *description;
- (void)addPalette:(const unsigned int *)arg1 paletteSize:(unsigned int)arg2 paletteX:(const unsigned int *)arg3 paletteXSize:(unsigned int)arg4;	// IMP=0x000000000011ab4e
- (const unsigned int *)defaultPalette;	// IMP=0x000000000011acc7
- (void)addColors:(const unsigned int *)arg1 count:(unsigned int)arg2 defaultColors:(const unsigned int *)arg3 defaultCount:(unsigned int)arg4;	// IMP=0x000000000011acd4
- (void)addDefaultPalette;	// IMP=0x000000000039f465
- (unsigned long long)addOrEquivalentColorExcludingDefaults:(id)arg1;	// IMP=0x0000000000172488
- (id)colorWithIndex:(unsigned long long)arg1;	// IMP=0x000000000013b02e
- (unsigned long long)defaultColorsCount;	// IMP=0x000000000039f42b
- (id)initWithDefaultSetup:(_Bool)arg1;	// IMP=0x00000000001130df
- (void)setupDefaults;	// IMP=0x0000000000113164

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

