//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface STProcessPayloadQueueOperation
{
}

- (id)_dequeuePayloadsFromPayloads:(id)arg1 fromUser:(id)arg2 inContext:(id)arg3;	// IMP=0x00200000000677b9
- (void)_processPayloadQueue;	// IMP=0x0010000000066c93
- (void)_endWithoutSaving;	// IMP=0x0010000000066c06
- (void)main;	// IMP=0x0010000000066acf

// Remaining properties
@property(readonly) NSArray *resultObject; // @dynamic resultObject;

@end
