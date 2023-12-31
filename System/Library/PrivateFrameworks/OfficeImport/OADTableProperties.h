//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, OADTableStyle;

__attribute__((visibility("hidden")))
@interface OADTableProperties
{
    OADTableStyle *mStyle;	// 72 = 0x48
    _Bool mRightToLeft;	// 80 = 0x50
    _Bool mFirstRow;	// 81 = 0x51
    _Bool mFirstColumn;	// 82 = 0x52
    _Bool mLastRow;	// 83 = 0x53
    _Bool mLastColumn;	// 84 = 0x54
    _Bool mBandRow;	// 85 = 0x55
    _Bool mBandColumn;	// 86 = 0x56
    NSArray *mEffects;	// 88 = 0x58
}

+ (id)defaultProperties;	// IMP=0x001000000015e33e
- (void).cxx_destruct;	// IMP=0x000000000031ffb6
@property(readonly, copy) NSString *description;
- (_Bool)hasEffects;	// IMP=0x000000000031ff1c
- (void)setEffects:(id)arg1;	// IMP=0x00000000001f7a7b
- (id)effects;	// IMP=0x000000000031fed2
- (_Bool)hasVectorNormalToDir:(int)arg1 atExtremePos:(int)arg2;	// IMP=0x000000000031fe98
- (_Bool)hasBandsNormalToDir:(int)arg1;	// IMP=0x000000000031fe76
- (void)setBandColumn:(_Bool)arg1;	// IMP=0x00000000001f7a4b
- (_Bool)bandColumn;	// IMP=0x000000000031fe66
- (void)setBandRow:(_Bool)arg1;	// IMP=0x00000000001f7a5b
- (_Bool)bandRow;	// IMP=0x00000000001fb4ae
- (void)setLastColumn:(_Bool)arg1;	// IMP=0x00000000001f7a2b
- (_Bool)lastColumn;	// IMP=0x000000000031fe56
- (void)setLastRow:(_Bool)arg1;	// IMP=0x00000000001f7a3b
- (_Bool)lastRow;	// IMP=0x000000000031fe46
- (void)setFirstColumn:(_Bool)arg1;	// IMP=0x00000000001f7a0b
- (_Bool)firstColumn;	// IMP=0x000000000031fe36
- (void)setFirstRow:(_Bool)arg1;	// IMP=0x00000000001f7a1b
- (_Bool)firstRow;	// IMP=0x00000000001f99f4
- (void)setRightToLeft:(_Bool)arg1;	// IMP=0x00000000001f7a6b
- (_Bool)rightToLeft;	// IMP=0x000000000031fe26
- (void)setStyle:(id)arg1;	// IMP=0x00000000001f7a8f
- (id)style;	// IMP=0x00000000001f8ba8
- (id)initWithDefaults;	// IMP=0x000000000015e36e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

