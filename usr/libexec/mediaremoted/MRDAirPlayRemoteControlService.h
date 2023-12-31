//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVOutputContext, NSMapTable, NSString;
@protocol MRDAirPlayRemoteControlServiceDelegate, OS_dispatch_queue;

@interface MRDAirPlayRemoteControlService : NSObject
{
    AVOutputContext *_systemMusicContext;	// 8 = 0x8
    _Bool _started;	// 16 = 0x10
    NSMapTable *_connections;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workerQueue;	// 32 = 0x20
    id <MRDAirPlayRemoteControlServiceDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000c6a9f
@property(nonatomic) __weak id <MRDAirPlayRemoteControlServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didCloseCommunicationChannelWithID:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x00100000000c6999
- (void)_didReceiveData:(id)arg1 fromConnectionID:(unsigned long long)arg2 connectionFactory:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c66f4
- (void)failedToSetupReverseCommunicationChannel:(id)arg1;	// IMP=0x00100000000c66ee
- (void)didSetupReverseCommunicationChannel:(id)arg1;	// IMP=0x00100000000c66e8
- (void)didCloseCommunicationChannel:(id)arg1;	// IMP=0x00100000000c65ea
- (void)didReceiveData:(id)arg1 fromCommunicationChannel:(id)arg2;	// IMP=0x00100000000c6456
- (void)outputContext:(id)arg1 didCloseCommunicationChannel:(id)arg2;	// IMP=0x00100000000c6358
- (void)outputContext:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3;	// IMP=0x00100000000c617b
- (void)startContext:(id)arg1;	// IMP=0x00100000000c6160
- (void)stop;	// IMP=0x00100000000c607d
- (void)start;	// IMP=0x00100000000c5f27
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;	// IMP=0x00100000000c5e01
- (id)init;	// IMP=0x00100000000c5d54

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

