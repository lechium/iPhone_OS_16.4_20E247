//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UIWindow;

@interface _TtC13MediaRemoteUI21ActivitySceneDelegate : NSObject
{
    MISSING_TYPE *window;	// 8 = 0x8
    MISSING_TYPE *nowPlayingElementProvider;	// 16 = 0x10
    MISSING_TYPE *mirroringElementProvider;	// 24 = 0x18
    MISSING_TYPE *nowPlayingScene;	// 32 = 0x20
    MISSING_TYPE *screenMirroringScene;	// 40 = 0x28
    MISSING_TYPE *coversheetScene;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0040000000006100
- (id)init;	// IMP=0x0010000000006040
- (void)sceneDidEnterBackground:(id)arg1;	// IMP=0x0010000000005ff0
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x0010000000005dd0
- (MISSING_TYPE *)sceneDidDisconnect: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000005d60
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x0010000000005a30
@property(nonatomic, retain) UIWindow *window; // @synthesize window;

@end

