//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIWindow;

@interface CarplayDisplayManager : NSObject
{
    UIWindow *_carWindow;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000d6b0b
- (void)_setUpSelectedCalendarsOnModel:(id)arg1;	// IMP=0x00100000000d6794
- (id)_createAndSetupModel;	// IMP=0x00100000000d66fc
- (id)_rootViewControllerForCarScene;	// IMP=0x00100000000d66a5
- (void)_openURL:(id)arg1;	// IMP=0x00100000000d6632
- (void)scene:(id)arg1 openURLContexts:(id)arg2;	// IMP=0x00100000000d654d
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x00100000000d645d
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x00100000000d618d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
