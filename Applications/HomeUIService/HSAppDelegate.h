//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class NSString, UIWindow;
@protocol BSInvalidatable;

@interface HSAppDelegate : UIResponder
{
    unsigned long long _backgroundTaskIdentifier;	// 8 = 0x8
    id <BSInvalidatable> _idleTimerAssertion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000003e5f9
@property(retain, nonatomic) id <BSInvalidatable> idleTimerAssertion; // @synthesize idleTimerAssertion=_idleTimerAssertion;
@property unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
- (void)releaseIdleTimerAssertion;	// IMP=0x001000000003e4d3
- (void)makeIdleTimerAssertion;	// IMP=0x001000000003e3ac
- (void)startBackgroundTask;	// IMP=0x001000000003e122
- (void)dealloc;	// IMP=0x001000000003e0e4
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x001000000003e0d2
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x001000000003e0c0
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x001000000003e0ae
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x001000000003e09c
- (void)applicationDidFinishLaunching:(id)arg1;	// IMP=0x001000000003e08a
- (id)init;	// IMP=0x001000000003dfdb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

