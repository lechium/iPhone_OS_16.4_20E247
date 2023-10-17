//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NWConcrete_nw_connection;
@protocol OS_nw_endpoint, OS_nw_parameters, OS_nw_path_evaluator;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_unique_connection_request : NSObject
{
    NSObject<OS_nw_endpoint> *endpoint;	// 8 = 0x8
    NSObject<OS_nw_parameters> *userParameters;	// 16 = 0x10
    char service[436];	// 24 = 0x18
    unsigned long long sequenceNumber;	// 464 = 0x1d0
    unsigned long long uniqueID;	// 472 = 0x1d8
    unsigned char uuid[16];	// 480 = 0x1e0
    unsigned char signature[64];	// 496 = 0x1f0
    char *incomingReqBytesToVerify;	// 560 = 0x230
    unsigned int incomingReqBytesToVerifyLen;	// 568 = 0x238
    NWConcrete_nw_connection *connection;	// 576 = 0x240
    NSObject<OS_nw_path_evaluator> *pathEvaluator;	// 584 = 0x248
    CDUnknownBlockType requestCompletionBlock;	// 592 = 0x250
    void *rejectTimer;	// 600 = 0x258
    void *preexistingConnectionTimer;	// 608 = 0x260
    unsigned int isIncoming:1;	// 616 = 0x268
    unsigned int isPending:1;	// 616 = 0x268
    unsigned int pendingRequestAccepted:1;	// 616 = 0x268
    unsigned int isWaitingForListenerReady:1;	// 616 = 0x268
    unsigned int isWaitingForActiveConnection:1;	// 616 = 0x268
    unsigned int hasRequestedPubKey:1;	// 616 = 0x268
    unsigned int hasBeenProcessed:1;	// 616 = 0x268
    unsigned int isWaitingForPathUpdate:1;	// 616 = 0x268
}

- (void).cxx_destruct;	// IMP=0x00000000004c8370
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000004c8050
- (id)init;	// IMP=0x00000000004c7dc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
