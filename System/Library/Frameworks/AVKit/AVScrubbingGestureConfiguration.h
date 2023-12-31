//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVScrubbingGesturePlatformConfiguration;

__attribute__((visibility("hidden")))
@interface AVScrubbingGestureConfiguration : NSObject
{
    _Bool _usesNaturalDirection;	// 8 = 0x8
    float _syntheticFriction;	// 12 = 0xc
    AVScrubbingGesturePlatformConfiguration *_platformConfiguration;	// 16 = 0x10
}

+ (id)configurationWithSyntheticFriction:(float)arg1 usesNaturalDirection:(_Bool)arg2 platformConfiguration:(id)arg3;	// IMP=0x006000000000e35d
+ (id)defaultConfiguration;	// IMP=0x006000000000e2e9
- (void).cxx_destruct;	// IMP=0x000000000000e2d9
@property(readonly, nonatomic) AVScrubbingGesturePlatformConfiguration *platformConfiguration; // @synthesize platformConfiguration=_platformConfiguration;
@property(readonly, nonatomic) _Bool usesNaturalDirection; // @synthesize usesNaturalDirection=_usesNaturalDirection;
@property(readonly, nonatomic) float syntheticFriction; // @synthesize syntheticFriction=_syntheticFriction;

@end

