//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray;
@protocol AVAirTransportDelegate, AVAirTransportTransformationProtocol;

__attribute__((visibility("hidden")))
@interface AVAirTransport : NSObject
{
    NSMutableArray *_outputQueue;	// 8 = 0x8
    NSData *_leftoverInputData;	// 16 = 0x10
    NSMutableArray *_requestCompletions;	// 24 = 0x18
    id <AVAirTransportTransformationProtocol> _streamDataTransformer;	// 32 = 0x20
    id <AVAirTransportDelegate> _delegate;	// 40 = 0x28
    NSMutableArray *_receiveResponseBlocks;	// 48 = 0x30
}

+ (_Bool)_isRunningOnAirChannelQueue;	// IMP=0x0040000000039b8c
+ (id)airTransportQueue;	// IMP=0x0040000000039b5c
+ (id)eventRunLoop;	// IMP=0x0040000000039b3e
+ (id)eventThread;	// IMP=0x0040000000039b2d
+ (void)performAsync:(CDUnknownBlockType)arg1;	// IMP=0x0040000000039ab3
+ (void)performSync:(CDUnknownBlockType)arg1;	// IMP=0x0040000000039a2a
+ (void)__performBlock:(CDUnknownBlockType)arg1;	// IMP=0x0040000000039a1f
+ (void)startEventThreadIfNecessary;	// IMP=0x00400000000399fb
+ (id)channelWithInput:(id)arg1 output:(id)arg2;	// IMP=0x0040000000039ef2
- (void).cxx_destruct;	// IMP=0x00000000000394f0
@property(readonly, nonatomic) NSMutableArray *receiveResponseBlocks; // @synthesize receiveResponseBlocks=_receiveResponseBlocks;
@property(nonatomic) __weak id <AVAirTransportDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <AVAirTransportTransformationProtocol> streamDataTransformer; // @synthesize streamDataTransformer=_streamDataTransformer;
- (void)sendResponse:(id)arg1;	// IMP=0x0000000000039302
- (void)sendObject:(id)arg1 receiveResponse:(CDUnknownBlockType)arg2;	// IMP=0x000000000003920c
- (void)performOnAirChannelQueueSync:(CDUnknownBlockType)arg1;	// IMP=0x0000000000039170
@property(readonly, nonatomic) _Bool canWrite;
@property(readonly, nonatomic) _Bool isReadyToSend;
- (void)writeData:(id)arg1;	// IMP=0x0000000000038ffa
- (void)writeMore;	// IMP=0x0000000000038d69
- (long long)_writeData:(id)arg1;	// IMP=0x0000000000038d35
- (void)terminatePendingRequests;	// IMP=0x0000000000038ce9
- (id)requestCompletions;	// IMP=0x0000000000038cdb
- (id)description;	// IMP=0x0000000000038b9d
- (void)open;	// IMP=0x0000000000038b97
- (void)close;	// IMP=0x0000000000038b69
- (void)invalidate;	// IMP=0x0000000000038b63
- (void)dealloc;	// IMP=0x0000000000038aa3
- (id)_initPrivate;	// IMP=0x0000000000038a2e

@end

