//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol CSDProcessObserverProtocol;

@interface CSDGFTServiceConversationProviderDelegate
{
    id <CSDProcessObserverProtocol> _processObserver;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000019072c
@property(readonly, nonatomic) id <CSDProcessObserverProtocol> processObserver; // @synthesize processObserver=_processObserver;
- (_Bool)shouldHandleProvider:(id)arg1;	// IMP=0x00100000001906fb
- (_Bool)shouldHandleProviderWithIdentifier:(id)arg1;	// IMP=0x0010000000190676
- (_Bool)shouldHandleUpdateForProvider:(id)arg1;	// IMP=0x0010000000190664
- (void)conversationManager:(id)arg1 conversationChanged:(id)arg2;	// IMP=0x001000000018fbe1
- (_Bool)isManagingCallWithUUID:(id)arg1;	// IMP=0x001000000018fa55
- (void)provider:(id)arg1 performSetRelayingCallAction:(id)arg2;	// IMP=0x001000000018f971
- (void)provider:(id)arg1 performEndCallAction:(id)arg2;	// IMP=0x001000000018f667
- (void)provider:(id)arg1 performJoinCallAction:(id)arg2;	// IMP=0x001000000018ec8a
- (_Bool)isProviderForeground:(id)arg1;	// IMP=0x001000000018eac6
- (id)initWithConversationManager:(id)arg1 queue:(id)arg2 invitationResolver:(id)arg3;	// IMP=0x001000000018e600

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

