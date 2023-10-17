//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADRelativeRect;

__attribute__((visibility("hidden")))
@interface OADPathShade
{
    OADRelativeRect *mFillToRect;	// 24 = 0x18
    int mType;	// 32 = 0x20
    _Bool mIsTypeOverridden;	// 36 = 0x24
}

+ (id)defaultProperties;	// IMP=0x0060000000027171
- (void).cxx_destruct;	// IMP=0x000000000030bdfd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d642c
- (unsigned long long)hash;	// IMP=0x0000000000160534
- (_Bool)isTypeOverridden;	// IMP=0x000000000030bdd7
- (void)setType:(int)arg1;	// IMP=0x0000000000027271
- (int)type;	// IMP=0x000000000030bd99
- (_Bool)isFillToRectOverridden;	// IMP=0x0000000000160660
- (void)setFillToRect:(id)arg1;	// IMP=0x000000000002728c
- (id)fillToRect;	// IMP=0x0000000000160616
- (void)removeUnnecessaryOverrides;	// IMP=0x000000000030bab2
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;	// IMP=0x000000000030b856
- (_Bool)isAnythingOverridden;	// IMP=0x000000000030b7f0
- (id)initWithDefaults;	// IMP=0x00000000000271a1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d92d0

@end
