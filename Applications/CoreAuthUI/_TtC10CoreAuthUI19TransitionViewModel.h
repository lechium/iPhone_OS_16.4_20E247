//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC10CoreAuthUI19TransitionViewModel : NSObject
{
    MISSING_TYPE *delegates;	// 8 = 0x8
    MISSING_TYPE *_connection;	// 2004049759 = 0x77735f5f
    MISSING_TYPE *_remoteUIHost;	// 0 = 0x0
    MISSING_TYPE *_mechanism;	// 2004049759 = 0x77735f5f
    MISSING_TYPE *_backoffCounter;	// 0 = 0x0
    MISSING_TYPE *_internalInfo;	// 0 = 0x0
    MISSING_TYPE *_controllerToShow;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *_completionHandler;	// 0 = 0x0
    MISSING_TYPE *disposeBag;	// 1701406303 = 0x6569665f
    MISSING_TYPE *log;	// 369684 = 0x5a414
}

+ (id)shared;	// IMP=0x0020000000029db0
- (void).cxx_destruct;	// IMP=0x004000000002ca10
- (void)suspendConnection;	// IMP=0x001000000002c9b0
- (void)setupConnection;	// IMP=0x001000000002c890
- (id)childControllerFor:(long long)arg1 type:(long long)arg2 allowsLandscape:(_Bool)arg3;	// IMP=0x001000000002b270
- (id)init;	// IMP=0x001000000002a4e0
@property(nonatomic, retain) id delegates; // @synthesize delegates;

@end
