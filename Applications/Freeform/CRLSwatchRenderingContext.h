//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CRLSwatchRenderingContext : NSObject
{
    _Bool _rendersForWideGamut;	// 8 = 0x8
    _Bool _wantsToRenderHighContrastBackground;	// 9 = 0x9
    _Bool _wantsRoundedCornersIfAppropriate;	// 10 = 0xa
    unsigned long long _backgroundAppearance;	// 16 = 0x10
}

@property(nonatomic) _Bool wantsRoundedCornersIfAppropriate; // @synthesize wantsRoundedCornersIfAppropriate=_wantsRoundedCornersIfAppropriate;
@property(nonatomic) _Bool wantsToRenderHighContrastBackground; // @synthesize wantsToRenderHighContrastBackground=_wantsToRenderHighContrastBackground;
@property(nonatomic) _Bool rendersForWideGamut; // @synthesize rendersForWideGamut=_rendersForWideGamut;
@property(nonatomic) unsigned long long backgroundAppearance; // @synthesize backgroundAppearance=_backgroundAppearance;

@end
