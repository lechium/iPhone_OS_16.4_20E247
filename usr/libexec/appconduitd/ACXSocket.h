//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDeviceConnection, NSDate, NSDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ACXSocket : NSObject
{
    _Bool _readSourceIsRunning;	// 8 = 0x8
    _Bool _wifiAsserted;	// 9 = 0x9
    _Bool _invalidated;	// 10 = 0xa
    int _socketFD;	// 12 = 0xc
    CDUnknownBlockType _eventHandler;	// 16 = 0x10
    IDSDeviceConnection *_deviceConnection;	// 24 = 0x18
    id _boostingMessageContext;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_socketQueue;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_socketReadSource;	// 48 = 0x30
    NSString *_streamName;	// 56 = 0x38
    NSDate *_creationTime;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000349f1
@property _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic) _Bool wifiAsserted; // @synthesize wifiAsserted=_wifiAsserted;
@property(readonly, nonatomic) NSDate *creationTime; // @synthesize creationTime=_creationTime;
@property(readonly, nonatomic) NSString *streamName; // @synthesize streamName=_streamName;
@property(nonatomic) _Bool readSourceIsRunning; // @synthesize readSourceIsRunning=_readSourceIsRunning;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *socketReadSource; // @synthesize socketReadSource=_socketReadSource;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *socketQueue; // @synthesize socketQueue=_socketQueue;
@property(readonly, nonatomic) id boostingMessageContext; // @synthesize boostingMessageContext=_boostingMessageContext;
@property(readonly, nonatomic) IDSDeviceConnection *deviceConnection; // @synthesize deviceConnection=_deviceConnection;
@property(readonly, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
@property(readonly, nonatomic) int socketFD; // @synthesize socketFD=_socketFD;
@property(readonly, nonatomic) NSDictionary *errorInfoDict;
- (id)readDataOrDictionaryWithError:(id *)arg1;	// IMP=0x00100000000340d1
- (id)readDictionaryWithError:(id *)arg1;	// IMP=0x0010000000033f8f
- (id)readDataWithError:(id *)arg1;	// IMP=0x0010000000033e4d
- (_Bool)writeShutdownMessageWithError:(id *)arg1;	// IMP=0x0010000000033dd5
- (_Bool)writePingWithError:(id *)arg1;	// IMP=0x0010000000033d5d
- (_Bool)writeDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000033b65
- (_Bool)writeData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000033ae2
- (_Bool)writeBytes:(const void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000338aa
- (void)_setUpSocketReadSource;	// IMP=0x0010000000033613
- (void)invalidate;	// IMP=0x00100000000334e8
- (void)noteWifiAsserted:(_Bool)arg1;	// IMP=0x00100000000334df
- (void)suspendReadSource;	// IMP=0x0010000000033477
- (void)resumeReadSource;	// IMP=0x001000000003340c
- (id)initWithIDSDeviceConnection:(id)arg1 boostingMessageContext:(id)arg2 streamName:(id)arg3 creationTime:(id)arg4 readEventHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000332e0
- (id)initWithSocket:(int)arg1 streamName:(id)arg2 creationTime:(id)arg3 readEventHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000033204

@end

