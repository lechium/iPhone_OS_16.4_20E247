//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface T1TPDUMapping
{
    unsigned char _sequence;	// 16 = 0x10
    unsigned char _cardSequence;	// 17 = 0x11
    _Bool _autoIfs;	// 18 = 0x12
    _Bool _ifsNegotiated;	// 19 = 0x13
    _Bool _deactivated;	// 20 = 0x14
    unsigned char _ifs;	// 21 = 0x15
    float _bwt;	// 24 = 0x18
    BOOL _rc;	// 28 = 0x1c
    unsigned char _nad;	// 29 = 0x1d
    unsigned long long _transmissionCounter;	// 32 = 0x20
}

- (id)response:(id)arg1;	// IMP=0x00200000000060ec
- (id)request:(id)arg1 maxPayload:(unsigned long long *)arg2;	// IMP=0x0010000000006083
- (id)transmit:(id)arg1;	// IMP=0x0010000000005311
- (void)handleSBlock:(id)arg1 ackBlock:(id)arg2 queue:(id)arg3 abortBlock:(CDUnknownBlockType)arg4 resynchBlock:(CDUnknownBlockType)arg5;	// IMP=0x0010000000004d79
- (void)handleRBlock:(id)arg1 ackBlock:(id)arg2 queue:(id)arg3 resultData:(id)arg4;	// IMP=0x0010000000004a9c
- (void)handleIBlock:(id)arg1 ackBlock:(id)arg2 queue:(id)arg3 resultData:(id)arg4;	// IMP=0x0010000000004834
- (void)fillQueue:(id)arg1 request:(id)arg2 ifs:(unsigned char)arg3;	// IMP=0x00100000000044eb
- (id)transmitCCIDMessage:(id)arg1 maxPayload:(unsigned long long)arg2 transmitted:(CDUnknownBlockType)arg3;	// IMP=0x00100000000043a0
- (id)initWithTransmitter:(id)arg1 autoIfs:(_Bool)arg2 ifs:(unsigned char)arg3 redundancyCode:(BOOL)arg4 bwt:(float)arg5;	// IMP=0x0010000000004208

@end

