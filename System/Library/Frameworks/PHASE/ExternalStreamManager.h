//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioFormat, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ExternalStreamManager : NSObject
{
    NSMutableDictionary *_streamGroups;	// 8 = 0x8
    void *_taskManager;	// 16 = 0x10
    AVAudioFormat *_engineFormat;	// 24 = 0x18
    unsigned int _maximumFramesToRender;	// 32 = 0x20
    _Bool _enableAudioIssueDetector;	// 36 = 0x24
    struct unordered_map<unsigned long long, void (^)(NSUUID *, NSUUID *, bool), std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>>> _controllerPauseStateCallbacks;	// 40 = 0x28
    unsigned long long _controllerPauseStateCallbackCounter;	// 80 = 0x50
}

- (id).cxx_construct;	// IMP=0x0000000000065881
- (void).cxx_destruct;	// IMP=0x0000000000065812
- (void)gatherDebugInformation:(CDUnknownBlockType)arg1;	// IMP=0x0000000000064da9
- (void)updateController:(id)arg1 pauseState:(_Bool)arg2;	// IMP=0x0000000000064a74
- (void)removeControllerPauseStateDidUpdateCallback:(unsigned long long)arg1;	// IMP=0x0000000000064901
- (unsigned long long)addControllerPauseStateDidUpdateCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000000064484
- (unique_ptr_9eb0da1f)createRendererForStream:(id)arg1 outputChannelLayout:(unsigned int)arg2 normalize:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000063830
- (unsigned int)sessionIdForStream:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000632d4
- (long long)typeForStream:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000062d7c
- (id)formatForStream:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000062820
- (_Bool)streamIsPaused:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000062337
- (void)resumeExternalStreamGroupID:(id)arg1 streamID:(id)arg2;	// IMP=0x0000000000062007
- (void)pauseExternalStreamGroupID:(id)arg1 streamID:(id)arg2;	// IMP=0x0000000000061a1c
- (void)removeExternalOutputStreamGroupID:(id)arg1 streamID:(id)arg2 withCallback:(CDUnknownBlockType)arg3;	// IMP=0x00000000000612c4
- (void)abandonControlOfExternalStreamGroupID:(id)arg1 withCallback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000060cae
- (void)claimControlOfExternalStreamGroupID:(id)arg1 attributedTo:(id)arg2 stateChangeBlock:(CDUnknownBlockType)arg3 withCallback:(CDUnknownBlockType)arg4;	// IMP=0x0000000000060771
- (void)setPauseExternalInputStreamGroupID:(id)arg1 streamID:(id)arg2 isPaused:(_Bool)arg3;	// IMP=0x0000000000060409
- (void)setMuteExternalInputStreamGroupID:(id)arg1 streamID:(id)arg2 isMuted:(_Bool)arg3;	// IMP=0x00000000000600b7
- (void)removeExternalInputStreamGroupID:(id)arg1 streamID:(id)arg2;	// IMP=0x000000000005f8f5
- (void)addExternalInputStreamGroupID:(id)arg1 streamID:(id)arg2 attributedTo:(id)arg3 definition:(id)arg4 isPaused:(_Bool)arg5;	// IMP=0x000000000005f473
- (void)addExternalOutputStreamGroupID:(id)arg1 streamID:(id)arg2 attributedTo:(id)arg3 definition:(id)arg4 startsPaused:(_Bool)arg5 renderBlock:(CDUnknownBlockType)arg6 withCallback:(CDUnknownBlockType)arg7;	// IMP=0x000000000005ef0b
- (void)removeAllResourcesAttributedToClientID:(id)arg1;	// IMP=0x000000000005e74d
- (id)initWithTaskManager:(void *)arg1 engineMode:(long long)arg2 engineFormat:(id)arg3 maximumFramesToRender:(unsigned int)arg4 enableAudioIssueDetector:(_Bool)arg5;	// IMP=0x000000000005e683

@end

