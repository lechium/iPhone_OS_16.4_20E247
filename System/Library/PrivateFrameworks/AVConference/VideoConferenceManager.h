//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICEResultWaitQueue, NSMutableArray, VideoConference;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VideoConferenceManager : NSObject
{
    unsigned char _clientUUID[16];	// 8 = 0x8
    struct _opaque_pthread_mutex_t stateLock;	// 24 = 0x18
    struct _opaque_pthread_mutex_t sipLock;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;	// 152 = 0x98
    NSMutableArray *vcList;	// 160 = 0xa0
    VideoConference *activeConference;	// 168 = 0xa8
    VideoConference *conferenceWithMic;	// 176 = 0xb0
    ICEResultWaitQueue *resultQueue;	// 184 = 0xb8
    struct tagHANDLE *hSIP;	// 192 = 0xc0
    int sipRefCount;	// 200 = 0xc8
    id _vtpWrapper;	// 208 = 0xd0
    _Bool isVTPInitialized;	// 216 = 0xd8
    id _networkAgent;	// 224 = 0xe0
}

+ (void)addNSError:(id)arg1 toConferenceXPCArgumentDictionary:(id)arg2;	// IMP=0x00100000001f025f
+ (id)defaultVideoConferenceManager;	// IMP=0x00100000001f00be
@property(readonly) NSMutableArray *vcList; // @synthesize vcList;
@property(readonly) ICEResultWaitQueue *resultQueue; // @synthesize resultQueue;
@property VideoConference *activeConference; // @synthesize activeConference;
- (void)getClientUUID:(unsigned char [16])arg1;	// IMP=0x00000000001f41ff
- (void)broadcastCellTechChange:(int)arg1 cellularMaxPktLen:(unsigned short)arg2;	// IMP=0x00000000001f40a4
- (void)pauseVideoConferences:(_Bool)arg1;	// IMP=0x00000000001f3d08
- (id)conferenceForSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;	// IMP=0x00000000001f3a72
- (id)conferenceForParticipantID:(id)arg1;	// IMP=0x00000000001f38cf
- (_Bool)hasVideoConference:(id)arg1;	// IMP=0x00000000001f3885
- (id)conferenceForCallID:(unsigned int)arg1;	// IMP=0x00000000001f373c
@property VideoConference *conferenceWithMic;
- (void)removeVideoConference:(id)arg1;	// IMP=0x00000000001f3317
- (void)addVideoConference:(id)arg1;	// IMP=0x00000000001f31d3
- (void)stopSIPWithTransportType:(unsigned int)arg1;	// IMP=0x00000000001f2e29
- (void)cleanupVTP;	// IMP=0x00000000001f2bba
- (_Bool)isSIPHandleValid:(struct tagHANDLE *)arg1;	// IMP=0x00000000001f2a9a
- (void)startSIPWithPacketMultiplexMode:(int)arg1 transportType:(unsigned int)arg2;	// IMP=0x00000000001f28e3
- (void)createSIPWithPacketMultiplexMode:(int)arg1;	// IMP=0x00000000001f21bb
- (void)setupVTPCallback;	// IMP=0x00000000001f1ee2
- (struct tagHANDLE *)SIPHandle;	// IMP=0x00000000001f1eb5
- (void)videoConference:(id)arg1 remoteCallingModeChanged:(unsigned int)arg2 forCallID:(unsigned int)arg3;	// IMP=0x00000000001f1dc9
- (void)videoConference:(id)arg1 closeConnectionForCallID:(unsigned int)arg2;	// IMP=0x00000000001f1d21
- (void)videoConference:(id)arg1 localAudioEnabled:(_Bool)arg2 forCallID:(unsigned int)arg3 error:(id)arg4;	// IMP=0x00000000001f1c19
- (void)videoConference:(id)arg1 remoteAudioEnabled:(_Bool)arg2 forCallID:(unsigned int)arg3;	// IMP=0x00000000001f1b30
- (void)videoConference:(id)arg1 didReceiveData:(id)arg2 forCallID:(unsigned int)arg3;	// IMP=0x00000000001f1a6c
- (void)videoConference:(id)arg1 didChangeLocalVariablesForCallID:(unsigned int)arg2;	// IMP=0x00000000001f19c4
- (void)videoConference:(id)arg1 didReceiveARPLData:(id)arg2 fromCallID:(unsigned int)arg3;	// IMP=0x00000000001f17c9
- (void)videoConference:(id)arg1 withCallID:(unsigned int)arg2 networkHint:(_Bool)arg3;	// IMP=0x00000000001f16e1
- (void)videoConference:(id)arg1 videoQualityNotificationForCallID:(unsigned int)arg2 isDegraded:(_Bool)arg3 isRemote:(_Bool)arg4;	// IMP=0x00000000001f15be
- (void)videoConference:(id)arg1 cancelRelayRequest:(unsigned int)arg2 requestDict:(id)arg3;	// IMP=0x00000000001f14fb
- (void)videoConference:(id)arg1 sendRelayUpdate:(unsigned int)arg2 updateDict:(id)arg3;	// IMP=0x00000000001f1438
- (void)videoConference:(id)arg1 inititiateRelayRequest:(unsigned int)arg2 requestDict:(id)arg3;	// IMP=0x00000000001f1375
- (void)videoConference:(id)arg1 isRemoteAudioBelowThreshold:(_Bool)arg2;	// IMP=0x00000000001f12c0
- (void)videoConference:(id)arg1 updateOutputMeterLevel:(float)arg2;	// IMP=0x00000000001f120a
- (void)videoConference:(id)arg1 updateInputMeterLevel:(float)arg2;	// IMP=0x00000000001f1154
- (void)videoConference:(id)arg1 updateOutputFrequencyLevel:(id)arg2;	// IMP=0x00000000001f10d4
- (void)videoConference:(id)arg1 updateInputFrequencyLevel:(id)arg2;	// IMP=0x00000000001f1054
- (void)videoConference:(id)arg1 didRemoteScreenAttributesChange:(id)arg2 forCallID:(unsigned int)arg3;	// IMP=0x00000000001f0f7a
- (void)videoConference:(id)arg1 didRemoteVideoAttributesChange:(id)arg2 forCallID:(unsigned int)arg3;	// IMP=0x00000000001f0ea0
- (void)videoConference:(id)arg1 remoteVideoPaused:(_Bool)arg2 callID:(unsigned int)arg3;	// IMP=0x00000000001f0db7
- (void)videoConference:(id)arg1 remoteAudioPaused:(_Bool)arg2 callID:(unsigned int)arg3;	// IMP=0x00000000001f0cce
- (void)videoConference:(id)arg1 didReceiveFirstRemoteFrameForCallID:(unsigned int)arg2;	// IMP=0x00000000001f0c26
- (void)videoConference:(id)arg1 remoteMediaStalled:(_Bool)arg2 callID:(unsigned int)arg3;	// IMP=0x00000000001f0b3d
- (void)videoConference:(id)arg1 receivedNoRemotePacketsForTime:(double)arg2 callID:(unsigned int)arg3;	// IMP=0x00000000001f0a26
- (void)videoConference:(id)arg1 withCallID:(unsigned int)arg2 didPauseVideo:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000000001f091f
- (void)videoConference:(id)arg1 withCallID:(unsigned int)arg2 isSendingAudio:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000000001f0818
- (void)videoConference:(id)arg1 withCallID:(unsigned int)arg2 didPauseAudio:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000000001f0711
- (void)videoConference:(id)arg1 didStopWithCallID:(unsigned int)arg2 error:(id)arg3 callMetadata:(id)arg4;	// IMP=0x00000000001f062f
- (void)videoConference:(id)arg1 didStartSession:(_Bool)arg2 withCallID:(unsigned int)arg3 withUserInfo:(id)arg4 error:(id)arg5;	// IMP=0x00000000001f0513
- (void)videoConference:(id)arg1 didStartSession:(_Bool)arg2 withCallID:(unsigned int)arg3 error:(id)arg4;	// IMP=0x00000000001f041b
- (void)videoConference:(id)arg1 localIPChange:(id)arg2 withCallID:(unsigned int)arg3;	// IMP=0x00000000001f0357
- (id)init;	// IMP=0x00000000001f012c
- (void)registerBlocksForConference;	// IMP=0x0000000000383935

@end
