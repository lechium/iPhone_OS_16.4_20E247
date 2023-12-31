//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MacPlacePhotoViewerRootViewController, NSString, UIViewController, UIWindow;
@protocol MacPlacePhotoViewerSceneDelegate;

@interface MacPlacePhotoViewerScene : NSObject
{
    MISSING_TYPE *_window;	// 8 = 0x8
    MacPlacePhotoViewerRootViewController *_rootViewController;	// 16 = 0x10
    id <MacPlacePhotoViewerSceneDelegate> _delegate;	// 24 = 0x18
}

+ (void)teardownCurrentScene;	// IMP=0x002000000038ef2e
+ (id)requestSceneActivation;	// IMP=0x001000000038eeeb
+ (id)sharedInstance;	// IMP=0x001000000038ee2c
- (void).cxx_destruct;	// IMP=0x002000000038f8c7
@property(nonatomic) __weak id <MacPlacePhotoViewerSceneDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MacPlacePhotoViewerRootViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(readonly, nonatomic) NSString *sceneTitle;
@property(readonly, nonatomic) UIViewController *topmostViewController;
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x001000000038f628
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x001000000038f323
- (void)_destroyCurrentSceneIfNeeded;	// IMP=0x001000000038f1d0
- (void)_presentSceneWithRootViewController:(id)arg1 delegate:(id)arg2;	// IMP=0x001000000038f0ac
- (void)openPhotoGalleryWithConfiguration:(id)arg1 sceneDelegate:(id)arg2 delegate:(id)arg3;	// IMP=0x001000000038ef72
- (id)init;	// IMP=0x001000000038ee81

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

