//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADBlipRef;

__attribute__((visibility("hidden")))
@interface OADCustomPattern
{
    OADBlipRef *mBlipRef;	// 24 = 0x18
    _Bool mIsBlipRefOverridden;	// 32 = 0x20
}

+ (id)defaultProperties;	// IMP=0x0060000000151980
- (void).cxx_destruct;	// IMP=0x000000000030f40f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001536dc
- (unsigned long long)hash;	// IMP=0x0000000000151bea
- (_Bool)isBlipRefOverridden;	// IMP=0x000000000030f3e9
- (void)setBlipRef:(id)arg1;	// IMP=0x0000000000151a1c
- (id)blipRef;	// IMP=0x000000000030f39f
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;	// IMP=0x000000000030f1b3
- (_Bool)isAnythingOverridden;	// IMP=0x000000000030f16a
- (id)initWithDefaults;	// IMP=0x00000000001519b0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000030f082

@end

