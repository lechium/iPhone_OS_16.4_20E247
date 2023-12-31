//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction, NSString;

__attribute__((visibility("hidden")))
@interface _UISceneSettingsMediaTimingAnimationFactory : NSObject
{
    CAMediaTimingFunction *__timingFunctionForAnimation;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000e4dcda
@property(retain, nonatomic, getter=_timingFunctionForAnimation) CAMediaTimingFunction *_timingFunctionForAnimation; // @synthesize _timingFunctionForAnimation=__timingFunctionForAnimation;
- (_Bool)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x0000000000e4dcb7
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x0000000000e4dcaf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

