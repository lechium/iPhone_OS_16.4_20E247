//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VCSessionMessaging : NSObject
{
    NSMutableDictionary *topics;	// 8 = 0x8
    id controlChannelWeak;	// 16 = 0x10
    NSMutableDictionary *participants;	// 24 = 0x18
}

- (void)controlChannel:(id)arg1 clearTransactionCacheForParticipant:(id)arg2;	// IMP=0x000000000038b72b
- (void)controlChannel:(id)arg1 sendReliableMessage:(id)arg2 didSucceed:(_Bool)arg3 toParticipant:(id)arg4;	// IMP=0x000000000038b670
- (void)controlChannel:(id)arg1 topic:(id)arg2 payload:(id)arg3 transactionID:(unsigned int)arg4 fromParticipant:(id)arg5;	// IMP=0x000000000038b5bb
- (id)allocMessageFromPayload:(id)arg1 forTopic:(id)arg2 participantID:(id)arg3;	// IMP=0x000000000038b481
- (void)controlChannel:(id)arg1 receivedMessage:(id)arg2 transactionID:(unsigned int)arg3 fromParticipant:(id)arg4;	// IMP=0x000000000038b46d
- (void)searchMatchingTopic:(id)arg1 payload:(id)arg2 transactionID:(unsigned int)arg3 fromParticipant:(id)arg4;	// IMP=0x000000000038b130
- (id)newDictionaryFromUnpackedMessage:(id)arg1 forTopic:(id)arg2 controlChannelVersion:(int)arg3;	// IMP=0x000000000038b0cc
- (id)newPackedMessageFromDictionary:(id)arg1 forTopic:(id)arg2 controlChannelVersion:(int)arg3;	// IMP=0x000000000038b03f
- (id)newDictionaryFromUnpackedMessageV2:(id)arg1;	// IMP=0x000000000038adf9
- (id)newPackedMessageFromDictionaryV2:(id)arg1;	// IMP=0x000000000038ac0e
- (id)newDictionaryFromUnpackedMomentsMessage:(id)arg1;	// IMP=0x000000000038aa0e
- (id)newPackedMessageFromMomentsDictionary:(id)arg1;	// IMP=0x000000000038a84f
- (id)newDictionaryFromUnpackedMessage:(id)arg1;	// IMP=0x000000000038a5b9
- (id)newPackedMessageFromDictionary:(id)arg1;	// IMP=0x000000000038a3e3
- (_Bool)sendReliableMessage:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3 withOptions:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000038a20c
- (void)sendMessageDictionary:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3;	// IMP=0x0000000000389ff4
- (void)sendMessage:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3;	// IMP=0x0000000000389e84
- (void)sendMessage:(id)arg1 withTopic:(id)arg2;	// IMP=0x0000000000389d3e
- (void)addTopic:(id)arg1 associatedStrings:(id)arg2 allowConcurrent:(_Bool)arg3 sendCompletionHandler:(CDUnknownBlockType)arg4 receiveHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000389c71
- (void)addTopic:(id)arg1 associatedStrings:(id)arg2 allowConcurrent:(_Bool)arg3 requireReliable:(_Bool)arg4 sendMessageDictionaryCompletionHandler:(CDUnknownBlockType)arg5 receiveMessageDictionaryHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000389a80
- (void)addTopic:(id)arg1 associatedStrings:(id)arg2 allowConcurrent:(_Bool)arg3 sendMessageDictionaryCompletionHandler:(CDUnknownBlockType)arg4 receiveMessageDictionaryHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000389a5c
- (void)addTopic:(id)arg1 associatedStrings:(id)arg2 allowConcurrent:(_Bool)arg3 receiveHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000389a3a
- (void)dealloc;	// IMP=0x000000000038993a
- (void)stopMessaging;	// IMP=0x0000000000389877
- (void)startMessaging;	// IMP=0x000000000038973f
- (void)addParticipant:(id)arg1 controlChannelProtocolVersion:(int)arg2;	// IMP=0x00000000003896f5
- (id)initWithControlChannel:(id)arg1 remoteVersion:(id)arg2;	// IMP=0x0000000000389636

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

