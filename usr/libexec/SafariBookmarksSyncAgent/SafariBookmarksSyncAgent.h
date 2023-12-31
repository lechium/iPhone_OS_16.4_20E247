//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class APSConnection, NSString;

@interface SafariBookmarksSyncAgent
{
    APSConnection *_pushConnection;	// 8 = 0x8
    _Bool _usesOpportunisticPushTopic;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000020f0
- (id)_pushTopics;	// IMP=0x0010000000001fe7
- (void)_setUpPushConnection;	// IMP=0x0010000000001efb
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x0010000000001e66
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0010000000001e60
- (void)updatePushTopicSubscriptions;	// IMP=0x0010000000001c98
- (void)setUsesOpportunisticPushTopic:(_Bool)arg1;	// IMP=0x0010000000001bb2
- (id)init;	// IMP=0x0010000000001b49

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

