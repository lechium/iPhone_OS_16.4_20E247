//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMachPort.h>

@interface NSMachPort (NSMachPort)
+ (_Bool)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned int)arg6 reserved:(unsigned long long)arg7;	// IMP=0x00800000004bc0c9
+ (void)parseMachMessage:(void *)arg1 localPort:(id *)arg2 remotePort:(id *)arg3 msgid:(unsigned int *)arg4 components:(id *)arg5;	// IMP=0x00800000004bbcef
+ (void)_fixNSMachPortLeak;	// IMP=0x00800000004bb66f
+ (id)portWithMachPort:(unsigned int)arg1 options:(unsigned long long)arg2;	// IMP=0x00800000004bb586
+ (id)portWithMachPort:(unsigned int)arg1;	// IMP=0x00800000004bb559
+ (id)port;	// IMP=0x00800000004bb537
+ (void)resetAllPorts;	// IMP=0x00800000004bb531
- (id)init;	// IMP=0x00100000004bd05f
- (id)initWithMachPort:(unsigned int)arg1;	// IMP=0x00100000004bd048
- (id)initWithMachPort:(unsigned int)arg1 options:(unsigned long long)arg2;	// IMP=0x00100000004bcd13
- (void)handlePortMessage:(id)arg1;	// IMP=0x00100000004bca12
- (void)addConnection:(id)arg1 toRunLoop:(id)arg2 forMode:(id)arg3;	// IMP=0x00100000004bc9a6
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x00100000004bc8e3
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x00100000004bc820
- (_Bool)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5;	// IMP=0x00100000004bc7b4
- (_Bool)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4;	// IMP=0x00100000004bc749
- (_Bool)sendBeforeTime:(double)arg1 streamData:(void *)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned int)arg5;	// IMP=0x00100000004bc6d4
- (id)delegate;	// IMP=0x00100000004bbc2b
- (void)setDelegate:(id)arg1;	// IMP=0x00100000004bbb50
- (unsigned int)machPort;	// IMP=0x00100000004bbb04
- (void)invalidate;	// IMP=0x00100000004bb9d3
- (_Bool)isValid;	// IMP=0x00100000004bb980
- (_Bool)isMemberOfClass:(Class)arg1;	// IMP=0x00100000004bb8e7
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x00100000004bb84e
- (unsigned long long)retainCount;	// IMP=0x00100000004bb7fe
- (_Bool)_tryRetain;	// IMP=0x00100000004bb7f6
- (_Bool)_isDeallocating;	// IMP=0x00100000004bb7ee
- (oneway void)release;	// IMP=0x00100000004bb6ec
- (id)retain;	// IMP=0x00100000004bb675
- (unsigned long long)hash;	// IMP=0x00100000004bb620
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000004bb5c2
- (unsigned long long)_cfTypeID;	// IMP=0x00100000004bb5b8
@end
