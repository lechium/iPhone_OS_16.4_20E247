//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, OADHyperlink, OADOrientedBounds;

__attribute__((visibility("hidden")))
@interface OADDrawableProperties
{
    OADOrientedBounds *mOrientedBounds;	// 24 = 0x18
    OADHyperlink *mClickHyperlink;	// 32 = 0x20
    OADHyperlink *mHoverHyperlink;	// 40 = 0x28
    NSString *mTitle;	// 48 = 0x30
    NSString *mDescription;	// 56 = 0x38
    unsigned int mHasAspectRatioLocked:1;	// 64 = 0x40
    unsigned int mAspectRatioLocked:1;	// 64 = 0x40
    unsigned int mHasWrdInline:1;	// 64 = 0x40
    unsigned int mWrdInline:1;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000030a879
- (id)description;	// IMP=0x000000000030a83b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000030a3a4
- (unsigned long long)hash;	// IMP=0x000000000030a2e7
- (void)removeUnnecessaryOverrides;	// IMP=0x00000000000331ea
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;	// IMP=0x0000000000309c27
- (_Bool)hasAltDescription;	// IMP=0x0000000000309c00
- (void)setAltDescription:(id)arg1;	// IMP=0x0000000000309bb6
- (id)altDescription;	// IMP=0x0000000000309ba1
- (_Bool)hasAltTitle;	// IMP=0x0000000000309b7a
- (void)setAltTitle:(id)arg1;	// IMP=0x0000000000309b30
- (id)altTitle;	// IMP=0x0000000000309b1b
- (_Bool)hasWrdInline;	// IMP=0x0000000000033a0a
- (void)setWrdInline:(_Bool)arg1;	// IMP=0x00000000001d514c
- (_Bool)isWrdInline;	// IMP=0x0000000000309b06
- (_Bool)hasHoverHyperlink;	// IMP=0x00000000000339e3
- (void)setHoverHyperlink:(id)arg1;	// IMP=0x000000000015530c
- (id)hoverHyperlink;	// IMP=0x0000000000309af1
- (_Bool)hasClickHyperlink;	// IMP=0x00000000000339bc
- (void)setClickHyperlink:(id)arg1;	// IMP=0x0000000000108b45
- (id)clickHyperlink;	// IMP=0x000000000015bb81
- (_Bool)hasAspectRatioLocked;	// IMP=0x00000000000337c1
- (void)setAspectRatioLocked:(_Bool)arg1;	// IMP=0x00000000001007e0
- (_Bool)isAspectRatioLocked;	// IMP=0x000000000022ab75
- (_Bool)hasOrientedBounds;	// IMP=0x0000000000029088
- (void)setOrientedBounds:(id)arg1;	// IMP=0x000000000001e0fe
- (id)orientedBounds;	// IMP=0x00000000000290af
- (id)orientedBoundsForCharts;	// IMP=0x0000000000309a98
- (id)initWithDefaults;	// IMP=0x000000000001df76

@end

