//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@interface UINavigationController (PUNavigationTransition_Internal)
- (double)px_imageModulationIntensityWithProposedValue:(double)arg1;	// IMP=0x009000000027af35
- (void)pu_navigationTransitionDidEnd:(id)arg1;	// IMP=0x0090000000524c1d
- (void)pu_navigationTransitionWillEnd:(id)arg1;	// IMP=0x0090000000524b4c
- (void)pu_navigationTransitionWillStart:(id)arg1;	// IMP=0x0090000000524a7b
- (void)_pu_setCurrentNavigationTransition:(id)arg1;	// IMP=0x0090000000524a65
- (id)pu_currentNavigationTransition;	// IMP=0x0090000000524a54
- (id)pu_currentInteractiveTransition;	// IMP=0x0090000000524a04
- (void)pu_popToViewController:(id)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3;	// IMP=0x00900000005248e6
- (void)pu_popViewControllerAnimated:(_Bool)arg1 interactive:(_Bool)arg2;	// IMP=0x00900000005248cd
- (void)pu_pushViewController:(id)arg1 withTransition:(id)arg2 animated:(_Bool)arg3 isInteractive:(_Bool)arg4;	// IMP=0x00900000005246fa
- (_Bool)pu_popToViewControllerIfAllowed:(id)arg1 animated:(_Bool)arg2 forced:(_Bool)arg3;	// IMP=0x0090000000524c23
@end
