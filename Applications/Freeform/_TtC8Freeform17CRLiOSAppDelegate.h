//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class MISSING_TYPE;

@interface _TtC8Freeform17CRLiOSAppDelegate : UIResponder
{
    MISSING_TYPE *boardLibrary;	// 8 = 0x8
    MISSING_TYPE *boardLibraryCommandController;	// 16 = 0x10
    MISSING_TYPE *boardPreviewImageCache;	// 24 = 0x18
    MISSING_TYPE *boardDataStore;	// 32 = 0x20
    MISSING_TYPE *didLogExtendedLaunchTime;	// 40 = 0x28
    MISSING_TYPE *applicationCoordinator;	// 48 = 0x30
    MISSING_TYPE *iCloudStatus;	// 56 = 0x38
    MISSING_TYPE *sharedBoardThumbnailManager;	// 64 = 0x40
    MISSING_TYPE *spotlightManager;	// 72 = 0x48
    MISSING_TYPE *syncDriver;	// 80 = 0x50
    MISSING_TYPE *keyboardMonitor;	// 88 = 0x58
    MISSING_TYPE *activeUseManager;	// 96 = 0x60
}

+ (id)shared;	// IMP=0x00400000006d3ad0
- (void).cxx_destruct;	// IMP=0x00200000006d5a70
- (id)init;	// IMP=0x00100000006d5a00
- (void)application:(id)arg1 didDiscardSceneSessions:(id)arg2;	// IMP=0x00100000006d5890
- (id)application:(id)arg1 configurationForConnectingSceneSession:(id)arg2 options:(id)arg3;	// IMP=0x00100000006d5790
- (void)buildMenuWithBuilder:(id)arg1;	// IMP=0x00100000006d5740
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x00100000006d40c0
- (void)applicationDidEnterBackground;	// IMP=0x00100000006d40a0
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00100000006d3fd0
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00100000006d3b50
- (_Bool)application:(id)arg1 runTest:(id)arg2 options:(id)arg3;	// IMP=0x00100000008c7210

@end

