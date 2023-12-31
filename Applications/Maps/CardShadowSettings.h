//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CardShadowSettings : NSObject
{
    double _radius;	// 8 = 0x8
    double _opacity;	// 16 = 0x10
    double _rimOpacity;	// 24 = 0x18
    double _cornerRadius;	// 32 = 0x20
}

+ (id)settingsForTraitCollection:(id)arg1 button:(_Bool)arg2;	// IMP=0x004000000040b887
+ (id)darkCardMacShadowSettings;	// IMP=0x001000000040b842
+ (id)lightCardMacShadowSettings;	// IMP=0x001000000040b7fd
+ (id)darkButtonShadowSettings;	// IMP=0x001000000040b7bb
+ (id)darkCardShadowSettings;	// IMP=0x001000000040b776
+ (id)lightButtonShadowSettings;	// IMP=0x001000000040b734
+ (id)lightCardShadowSettings;	// IMP=0x001000000040b6ef
@property(readonly, nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) double rimOpacity; // @synthesize rimOpacity=_rimOpacity;
@property(readonly, nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) double expansion;
- (id)initWithRadius:(double)arg1 opacity:(double)arg2 rimOpacity:(double)arg3 cornerRadius:(double)arg4;	// IMP=0x001000000040b656

@end

