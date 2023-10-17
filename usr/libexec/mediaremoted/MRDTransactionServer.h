//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface MRDTransactionServer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    unsigned long long _usedMemory;	// 16 = 0x10
    unsigned long long _allowedMemory;	// 24 = 0x18
    double _transactionWaitDuration;	// 32 = 0x20
    NSMutableArray *_transactions;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000004e4b8
@property(readonly, nonatomic) NSMutableArray *transactions; // @synthesize transactions=_transactions;
- (void)_sendContentItemTransaction:(id)arg1 request:(id)arg2 playerPath:(id)arg3;	// IMP=0x001000000004dfd2
- (void)sendContentItemTransaction:(id)arg1 request:(id)arg2 playerPath:(id)arg3;	// IMP=0x001000000004dea8
- (void)sendContentItemTransactionWithPlaybackQueue:(id)arg1 request:(id)arg2 playerPath:(id)arg3;	// IMP=0x001000000004ddbe
- (void)handleContentItemTransaction:(id)arg1 packets:(id)arg2 group:(id)arg3;	// IMP=0x001000000004cfb1
- (void)handlePlaybackQueueRequestTransaction:(id)arg1 packets:(id)arg2 group:(id)arg3;	// IMP=0x001000000004c854
- (void)adjustMemory:(long long)arg1;	// IMP=0x001000000004c7f4
- (void)transaction:(id)arg1 didReceivePackets:(id)arg2 receivedSize:(unsigned long long)arg3 requestedSize:(unsigned long long)arg4 queue:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000004c555
- (unsigned long long)transactionRequestingMemorySize:(id)arg1;	// IMP=0x001000000004c3fc
- (void)transactionDidEnd:(id)arg1 bytesRemaining:(unsigned long long)arg2;	// IMP=0x001000000004c322
- (void)collectDiagnostic:(id)arg1;	// IMP=0x001000000004c225
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000004c082
- (id)init;	// IMP=0x001000000004bfac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
