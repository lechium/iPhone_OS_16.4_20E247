//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIWindow.h>

@class FBSDisplayConfiguration, FBSDisplayIdentity, SBWindowScene;

@interface UIWindow (SBFTraitsArbiterExtensions)
- (void)sb_setTraitsParticipant:(id)arg1;	// IMP=0x0030000000264a39
- (id)sb_traitsParticipant;	// IMP=0x0030000000264a28
@property(readonly, nonatomic, getter=_fbsDisplayIdentity) FBSDisplayIdentity *fbsDisplayIdentity;
@property(readonly, nonatomic, getter=_fbsDisplayConfiguration) FBSDisplayConfiguration *fbsDisplayConfiguration;
@property(readonly, nonatomic, getter=_sbDisplayConfiguration) FBSDisplayConfiguration *sbDisplayConfiguration;
@property(readonly, nonatomic, getter=_sbWindowScene) SBWindowScene *sbWindowScene;
- (id)sb_hostWrapperForUseInOrientation:(long long)arg1 hostRequester:(id)arg2;	// IMP=0x0030000000718409
- (id)sb_hostWrapperForUseInWindow:(id)arg1 hostRequester:(id)arg2;	// IMP=0x0030000000718395
- (_Bool)sb_preventStatusBarEffectivelyHiddenForContentOverlayInsets;	// IMP=0x003000000083a22f
- (void)sb_updateInterfaceOrientationFromActiveInterfaceOrientation:(_Bool)arg1;	// IMP=0x00300000000a7584
- (void)sb_updateInterfaceOrientationFromActiveInterfaceOrientation;	// IMP=0x00300000000a7596
@end
