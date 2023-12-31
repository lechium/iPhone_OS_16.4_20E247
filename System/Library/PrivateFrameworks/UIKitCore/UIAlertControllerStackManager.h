//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UIScene;

__attribute__((visibility("hidden")))
@interface UIAlertControllerStackManager : NSObject
{
    NSMutableArray *_alertControllerStack;	// 8 = 0x8
    NSMutableArray *_hiddenAlertControllers;	// 16 = 0x10
    UIScene *_scene;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000880db
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene; // @synthesize _scene;
- (long long)_alertControllerStackCount;	// IMP=0x00000000000880b4
- (_Bool)_alertControllerShouldBeTrackedInStack:(id)arg1;	// IMP=0x0000000000087fda
- (void)_didHideAlertController:(id)arg1;	// IMP=0x0000000000087eee
- (void)_willHideAlertController:(id)arg1;	// IMP=0x0000000000087ee8
- (void)_willShowAlertController:(id)arg1;	// IMP=0x0000000000087dfc
- (id)_topAlertControllerInStack;	// IMP=0x0000000000087de6
- (void)_removeAlertControllerFromStack:(id)arg1;	// IMP=0x0000000000087d21
- (void)_addAlertControllerToStack:(id)arg1;	// IMP=0x0000000000087c5c
- (void)_showHiddenStackedAlertControllers;	// IMP=0x00000000000879c1
- (void)_hideStackedAlertControllers;	// IMP=0x0000000000087756
- (void)_alertControllerDidDisappear:(id)arg1;	// IMP=0x00000000000876f3
- (void)_alertControllerWillDisappear:(id)arg1;	// IMP=0x0000000000087600
- (void)_alertControllerDidAppear:(id)arg1;	// IMP=0x00000000000875fa
- (void)_alertControllerWillAppear:(id)arg1;	// IMP=0x00000000000874ef
- (id)initWithScene:(id)arg1;	// IMP=0x0000000000087452

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

