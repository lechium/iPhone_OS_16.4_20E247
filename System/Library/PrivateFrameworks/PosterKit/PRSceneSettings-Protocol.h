//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BSColor, NSString, PRPosterConfigurableOptions, PRPosterConfiguredProperties, PRSServerPosterPath;

@protocol PRSceneSettings
@property(readonly, nonatomic, getter=pr_isWallpaperObscured) _Bool pr_wallpaperObscured;
@property(readonly, copy, nonatomic) NSString *pr_snapshotLogIdentifier;
@property(readonly, nonatomic) _Bool pr_showsComplications;
@property(readonly, nonatomic) _Bool pr_showsHeaderElements;
@property(readonly, nonatomic, getter=pr_isAlternateDateEnabled) _Bool pr_alternateDateEnabled;
@property(readonly, nonatomic, getter=pr_isComplicationRowConfigured) _Bool pr_complicationRowConfigured;
@property(readonly, nonatomic, getter=pr_isInlineComplicationConfigured) _Bool pr_inlineComplicationConfigured;
@property(readonly, nonatomic, getter=pr_isParallaxEffectivelyEnabled) _Bool pr_parallaxEffectivelyEnabled;
@property(readonly, nonatomic, getter=pr_isParallaxDisallowed) _Bool pr_parallaxDisallowed;
@property(readonly, nonatomic, getter=pr_isParallaxEnabled) _Bool pr_parallaxEnabled;
@property(readonly, nonatomic, getter=pr_isDepthEffectDisallowed) _Bool pr_depthEffectDisallowed;
@property(readonly, nonatomic) PRPosterConfiguredProperties *pr_posterConfiguredProperties;
@property(readonly, nonatomic) PRPosterConfigurableOptions *pr_posterConfigurableOptions;
@property(readonly, nonatomic) PRSServerPosterPath *pr_posterContents;
@property(readonly, nonatomic) long long pr_userInterfaceStyle;
@property(readonly, nonatomic) BSColor *pr_caseColor;
@property(readonly, copy, nonatomic) NSString *pr_previewIdentifier;
@property(readonly, nonatomic) _Bool pr_isInvalidated;
@property(readonly, copy, nonatomic) NSString *pr_provider;
@property(readonly, copy, nonatomic) NSString *pr_role;
@end
