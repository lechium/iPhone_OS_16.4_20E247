//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUNavigationTransition.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface PUOneUpAssetNavigationTransition : PUNavigationTransition
{
}

- (void)_prepareViewForTransition;	// IMP=0x000000000027ef90
- (void)_animateTransitionWithOperation:(long long)arg1;	// IMP=0x000000000027ec36
- (void)animatePopTransition;	// IMP=0x000000000027ec1f
- (void)animatePushTransition;	// IMP=0x000000000027ec08
- (id)init;	// IMP=0x000000000027ebd1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

