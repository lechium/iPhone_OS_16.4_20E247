//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SABaseCommand.h>

@class NSString;

@interface SABaseCommand (SiriCoreSessionObject)
- (_Bool)siriCore_supportedByRemoteLimitedSession;	// IMP=0x00200000000286b8
- (_Bool)siriCore_supportedByLocalSession;	// IMP=0x00200000000286b0
- (void)siriCore_setSessionRequestId:(id)arg1;	// IMP=0x00200000000286aa
- (id)siriCore_requestId;	// IMP=0x00200000000286a2
- (void)siriCore_logDiagnostics;	// IMP=0x002000000002869c
- (_Bool)siriCore_isProvisional;	// IMP=0x0020000000028694
- (_Bool)siriCore_isRestartable;	// IMP=0x0020000000028682
- (_Bool)siriCore_isRetryable;	// IMP=0x002000000002867a
- (_Bool)siriCore_bufferingAllowedDuringActiveSession;	// IMP=0x0020000000028672
- (id)siriCore_serializedAceDataError:(id *)arg1;	// IMP=0x0020000000028653

// Remaining properties
@property(copy, nonatomic) NSString *aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId;
@property(readonly) Class superclass;
@end
