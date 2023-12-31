//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CSDReporterDataSource, OS_dispatch_queue;

@interface CSDABCReporter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001c147d
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)stringForSignatureType:(unsigned long long)arg1;	// IMP=0x00100000001c144d
- (id)stringForIMAVChatEndedReason:(unsigned int)arg1;	// IMP=0x00100000001c142c
- (id)stringForIDSSessionEndedReason:(unsigned int)arg1;	// IMP=0x00100000001c140b
- (id)stringRepresentationForTUCallDisconnectedReason:(int)arg1;	// IMP=0x00100000001c13ec
- (void)reportingController:(id)arg1 statusChangedForCall:(id)arg2 totalCallCount:(unsigned long long)arg3;	// IMP=0x00100000001c0eb2
- (id)initWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c0e0f
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000001c0df0

// Remaining properties
@property(nonatomic) __weak id <CSDReporterDataSource> dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

