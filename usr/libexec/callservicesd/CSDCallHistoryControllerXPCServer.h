//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDCallHistoryController, CSDClientManager, NSString;
@protocol OS_dispatch_queue;

@interface CSDCallHistoryControllerXPCServer : NSObject
{
    int _clientsShouldConnectToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CSDCallHistoryController *_callHistoryController;	// 24 = 0x18
    CSDClientManager *_clientManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000257b8
@property(nonatomic) int clientsShouldConnectToken; // @synthesize clientsShouldConnectToken=_clientsShouldConnectToken;
@property(readonly, nonatomic) CSDClientManager *clientManager; // @synthesize clientManager=_clientManager;
@property(readonly, nonatomic) CSDCallHistoryController *callHistoryController; // @synthesize callHistoryController=_callHistoryController;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (oneway void)allCallHistoryDeleted;	// IMP=0x0010000000025679
- (oneway void)recentCallsDeleted:(id)arg1;	// IMP=0x00100000000254f3
- (void)unregisterClient:(id)arg1;	// IMP=0x00100000000253f1
- (void)registerClient:(id)arg1;	// IMP=0x00100000000252ef
- (void)notifyClientsToConnectIfNecessary;	// IMP=0x0010000000025246
- (void)invalidate;	// IMP=0x001000000002513d
- (void)dealloc;	// IMP=0x00100000000250b0
- (id)initWithCallHistoryController:(id)arg1;	// IMP=0x0010000000024b5b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

