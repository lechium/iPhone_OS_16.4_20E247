//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, UIColor;

__attribute__((visibility("hidden")))
@interface UIDynamicSystemColor
{
    NSDictionary *_colorsByThemeKey;	// 24 = 0x18
    struct os_unfair_lock_s _cachedColorLock;	// 32 = 0x20
    UIColor *_cachedColor;	// 40 = 0x28
    unsigned long long _cachedThemeKey;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000008acbd5
- (id)description;	// IMP=0x00000000008acb33
- (id)_resolvedMaterialWithTraitCollection:(id)arg1;	// IMP=0x00000000008aca44
- (id)_resolvedColorWithTraitCollection:(id)arg1;	// IMP=0x00000000008ac711
- (unsigned long long)hash;	// IMP=0x00000000008ac6cd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008ac617
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008ac60c
- (void)_setColorsByThemeKey:(id)arg1;	// IMP=0x00000000008ac5d8
- (id)_colorsByThemeKey;	// IMP=0x00000000008ac5c3
- (id)initWithName:(id)arg1 colorsByThemeKey:(id)arg2;	// IMP=0x00000000008ac2b8

@end
