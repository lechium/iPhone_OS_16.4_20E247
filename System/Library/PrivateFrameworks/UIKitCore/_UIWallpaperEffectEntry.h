//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIWallpaperEffectEntry
{
    UIColor *_backgroundColor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003f2874
@property(retain) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (_Bool)isSameTypeOfEffect:(id)arg1;	// IMP=0x00000000003f2845
- (_Bool)canTransitionToEffect:(id)arg1;	// IMP=0x00000000003f283d
- (void)applyIdentityEffectToView:(id)arg1;	// IMP=0x00000000003f27c7
- (void)applyRequestedEffectToView:(id)arg1;	// IMP=0x00000000003f2755
- (void)addEffectToView:(id)arg1;	// IMP=0x00000000003f26e3

@end
