//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSSession, NSString;
@protocol CSDIDSDualSessionProviderDelegate;

@interface CSDIDSDualSessionProvider : NSObject
{
    id <CSDIDSDualSessionProviderDelegate> _delegate;	// 8 = 0x8
    IDSSession *_session;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000071b76
@property(readonly, nonatomic) IDSSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <CSDIDSDualSessionProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2 withData:(id)arg3;	// IMP=0x0010000000071abc
- (void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2 withData:(id)arg3;	// IMP=0x0010000000071a33
- (void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2 withData:(id)arg3;	// IMP=0x00100000000719aa
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;	// IMP=0x001000000007192f
- (void)session:(id)arg1 invitationSentToTokens:(id)arg2 shouldBreakBeforeMake:(_Bool)arg3;	// IMP=0x00100000000718b4
- (void)session:(id)arg1 receivedSessionMessageFromID:(id)arg2 withData:(id)arg3;	// IMP=0x001000000007182b
- (void)session:(id)arg1 didReceiveReport:(id)arg2;	// IMP=0x0010000000071754
- (void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2;	// IMP=0x001000000007173f
- (void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2;	// IMP=0x001000000007172a
- (void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2;	// IMP=0x0010000000071715
- (void)sessionEnded:(id)arg1;	// IMP=0x00100000000716fe
- (void)sessionStarted:(id)arg1;	// IMP=0x00100000000716b2
- (void)end;	// IMP=0x0010000000071675
- (void)reconnectSession;	// IMP=0x0010000000071638
- (void)declineInvitationWithData:(id)arg1;	// IMP=0x00100000000715c6
- (void)cancelInvitationWithRemoteEndedReasonOverride:(unsigned int)arg1;	// IMP=0x001000000007157a
- (void)cancelInvitationWithData:(id)arg1;	// IMP=0x0010000000071508
- (void)acceptInvitationWithData:(id)arg1;	// IMP=0x0010000000071496
- (void)sendInvitationWithData:(id)arg1 declineOnError:(_Bool)arg2;	// IMP=0x001000000007141e
- (void)sendData:(id)arg1 toDestinations:(id)arg2;	// IMP=0x0010000000071398
- (void)sendData:(id)arg1;	// IMP=0x0010000000071326
- (void)setStreamPreferences:(id)arg1;	// IMP=0x0010000000071241
- (void)setPreferences:(id)arg1;	// IMP=0x001000000007115c
@property(nonatomic) long long invitationTimeout;
@property(nonatomic, getter=isAudioEnabled) _Bool audioEnabled;
@property(readonly, nonatomic) unsigned long long initialLinkType;
@property(readonly, copy, nonatomic) NSString *destination;
@property(readonly, nonatomic) int socket;
@property(readonly, nonatomic) _Bool shouldUseSocketForTransport;
@property(readonly, copy, nonatomic) NSString *UUID;
@property(readonly, nonatomic) unsigned int endedReason;
@property(readonly, copy) NSString *description;
- (id)initWithSession:(id)arg1 queue:(id)arg2;	// IMP=0x0010000000070d98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
