//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSObject.h>

@class SKUIPhysicalCirclesTemplateDOMFeature;

__attribute__((visibility("hidden")))
@interface SKUIJSPhysicalCirclesTemplate : IKJSObject
{
    SKUIPhysicalCirclesTemplateDOMFeature *_feature;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000166ccd
- (void)_performAnimationWithType:(long long)arg1 callback:(id)arg2;	// IMP=0x0000000000166957
- (void)performResetAnimation:(id)arg1;	// IMP=0x000000000016693d
- (void)performFinishAnimation:(id)arg1;	// IMP=0x0000000000166926
- (void)afterDOMUpdate:(id)arg1;	// IMP=0x00000000001665e6
- (id)initWithAppContext:(id)arg1 DOMFeature:(id)arg2;	// IMP=0x0000000000166537

@end
