//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UITouch;

@interface DRTouchWithVelocity : NSObject
{
    UITouch *_touch;	// 8 = 0x8
    struct CGVector _velocity;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000024919
@property(nonatomic) struct CGVector velocity; // @synthesize velocity=_velocity;
@property(retain, nonatomic) UITouch *touch; // @synthesize touch=_touch;

@end
