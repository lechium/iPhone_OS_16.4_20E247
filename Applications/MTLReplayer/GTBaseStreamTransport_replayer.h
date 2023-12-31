//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSObject;
@protocol GTVMBuffer, OS_dispatch_queue, OS_dispatch_semaphore;

@interface GTBaseStreamTransport_replayer
{
    struct dy_transport_message_unpack_s *_tmu;	// 104 = 0x68
    id <GTVMBuffer> _messageBuffer;	// 112 = 0x70
    void *_messageBufferWritePtr;	// 120 = 0x78
    unsigned long long _bytesToRead;	// 128 = 0x80
    struct iovec _iov[3];	// 136 = 0x88
    NSData *_buffers[3];	// 184 = 0xb8
    NSObject<OS_dispatch_semaphore> *_sendSema;	// 208 = 0xd0
    NSObject<OS_dispatch_queue> *_relayQueue;	// 216 = 0xd8
    struct dy_transport_message_unpack_s *;	// 224 = 0xe0
}

- (long long)_relayBuffer:(const void *)arg1 size:(unsigned long long)arg2;	// IMP=0x002000000002c6c8
- (long long)_relayBufferInner:(const void *)arg1 size:(unsigned long long)arg2;	// IMP=0x001000000002c4b3
- (long long)_sendMessage:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002c2d6
- (_Bool)_packMessage:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002c0ee
- (long long)_writeBuffers:(id *)arg1;	// IMP=0x001000000002be8e
- (void)_clearBuffers;	// IMP=0x001000000002be4d
- (long long)_readAndAccumulate;	// IMP=0x001000000002bca7
- (long long)_performRead:(void *)arg1 size:(unsigned long long)arg2;	// IMP=0x001000000002bb6b
- (void)_allocateMessageBuffer;	// IMP=0x001000000002ba81
- (void)_unpackAndDispatchMessage;	// IMP=0x001000000002b7ba
- (long long)_syncTmuToHeader:(struct dy_transport_message_unpack_s *)arg1 ioBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000002b6a1
- (void)_waitEAGAIN;	// IMP=0x001000000002b692
- (long long)_write:(const void *)arg1 size:(unsigned long long)arg2;	// IMP=0x001000000002b67a
- (long long)_read:(void *)arg1 size:(unsigned long long)arg2;	// IMP=0x001000000002b662
- (void)_scheduleInvalidation:(id)arg1;	// IMP=0x001000000002b621
- (void)_invalidate;	// IMP=0x001000000002b584
- (void)dealloc;	// IMP=0x001000000002b511
- (id)init;	// IMP=0x001000000002b39c

@end

