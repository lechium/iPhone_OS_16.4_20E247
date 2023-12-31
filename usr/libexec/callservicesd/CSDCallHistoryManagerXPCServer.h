//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDCallHistoryManager, CSDClientManager, NSString;
@protocol OS_dispatch_queue;

@interface CSDCallHistoryManagerXPCServer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    CSDCallHistoryManager *_callHistoryManager;	// 16 = 0x10
    CSDClientManager *_clientManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000b1b85
// Error: Property attributes should begin with the type ('T') attribute, property name: clientManager
// Property attributes: (null)

@property(readonly, nonatomic) CSDCallHistoryManager *callHistoryManager; // @synthesize callHistoryManager=_callHistoryManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)unregisterClient:(id)arg1;	// IMP=0x00100000000b1a65
- (void)registerClient:(id)arg1;	// IMP=0x00100000000b1963
- (oneway void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithOutgoingLocalParticipantUUID:(id)arg2;	// IMP=0x00100000000b17c5
- (void)invalidate;	// IMP=0x00100000000b1713
- (id)initWithManager:(id)arg1;	// IMP=0x00100000000b129c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

