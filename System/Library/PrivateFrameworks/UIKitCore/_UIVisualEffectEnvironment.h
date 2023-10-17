//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UITraitCollection, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectEnvironment : NSObject
{
    _Bool _allowsDithering;	// 8 = 0x8
    _Bool _allowsBlurring;	// 9 = 0x9
    _Bool _useSimpleVibrancy;	// 10 = 0xa
    _Bool _reducedTransperancy;	// 11 = 0xb
    UIVisualEffectView *_effectView;	// 16 = 0x10
    UITraitCollection *_traitCollection;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000ffd5e
@property(copy, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(nonatomic) _Bool reducedTransperancy; // @synthesize reducedTransperancy=_reducedTransperancy;
@property(nonatomic) _Bool useSimpleVibrancy; // @synthesize useSimpleVibrancy=_useSimpleVibrancy;
@property(nonatomic) _Bool allowsBlurring; // @synthesize allowsBlurring=_allowsBlurring;
@property(nonatomic) _Bool allowsDithering; // @synthesize allowsDithering=_allowsDithering;
@property(readonly, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
- (id)description;	// IMP=0x00000000000ffbf4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ffb4d
- (id)initWithHost:(id)arg1;	// IMP=0x00000000000ffb10

@end
