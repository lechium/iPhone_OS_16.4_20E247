//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC14Xcode_Previews22ShellPreviewSceneAgent : NSObject
{
    MISSING_TYPE *invalidationHandle;	// 8 = 0x8
    MISSING_TYPE *scene;	// 16 = 0x10
    MISSING_TYPE *sceneMessenger;	// 24 = 0x18
    MISSING_TYPE *connection;	// 32 = 0x20
    MISSING_TYPE *currentUpdateDelegate;	// 40 = 0x28
    MISSING_TYPE *sceneClientSettingsUpdateSink;	// 80 = 0x50
    MISSING_TYPE *disconnect;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0040000000032360
- (id)init;	// IMP=0x0010000000032300
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;	// IMP=0x0010000000032260
- (void)sceneDidInvalidate:(id)arg1;	// IMP=0x00100000000320a0
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;	// IMP=0x0010000000032000

@end

