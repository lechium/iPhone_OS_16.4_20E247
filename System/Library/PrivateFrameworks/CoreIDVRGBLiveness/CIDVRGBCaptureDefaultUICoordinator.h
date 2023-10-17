//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CIDVRGBCaptureUIConfig, NSString, UINavigationController, UIViewController;
@protocol CIDVRGBCaptureSelfieController;

__attribute__((visibility("hidden")))
@interface CIDVRGBCaptureDefaultUICoordinator : NSObject
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    UINavigationController *_navigationVC;	// 16 = 0x10
    UIViewController *_originalTopVC;	// 24 = 0x18
    id <CIDVRGBCaptureSelfieController> _controller;	// 32 = 0x20
    CIDVRGBCaptureUIConfig *_config;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001aa42
- (void)_cancelAfterAppMovedToBackground:(id)arg1;	// IMP=0x000000000001a7e2
- (void)_removeNotificationObservers;	// IMP=0x000000000001a739
- (void)_addNotificationObservers;	// IMP=0x000000000001a682
- (void)_cleanAfterError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001a384
- (void)_presentVC:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000001a2ad
- (void)_presentSelfieVC;	// IMP=0x000000000001a243
- (void)_handleTimeout;	// IMP=0x000000000001a164
- (void)dealloc;	// IMP=0x000000000001a0e8
- (void)finishWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019df6
- (void)finishWithError:(id)arg1;	// IMP=0x0000000000019dd7
- (void)startWithConfig:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019aba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
