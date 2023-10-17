//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CarChromeViewController, NSString;

@interface CarWidgetController : NSObject
{
    long long _sceneType;	// 8 = 0x8
    CarChromeViewController *_chromeViewController;	// 16 = 0x10
}

+ (Class)fallbackModeControllerClass;	// IMP=0x00200000009c2aab
+ (Class)chromeViewControllerClass;	// IMP=0x00100000009c2a93
- (void).cxx_destruct;	// IMP=0x00200000009c3201
@property(retain, nonatomic) CarChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(nonatomic) long long sceneType; // @synthesize sceneType=_sceneType;
- (id)contextsForCurrentAppState;	// IMP=0x00100000009c31b5
- (void)sceneDidEnterBackground:(id)arg1;	// IMP=0x00100000009c30ee
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x00100000009c2feb
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x00100000009c2ea4
- (void)_mapsCar_scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x00100000009c2ac3
- (id)initWithSceneType:(long long)arg1;	// IMP=0x00100000009c2a56

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
