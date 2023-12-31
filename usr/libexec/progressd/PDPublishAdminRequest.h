//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLSAdminRequestor, NSArray, NSMutableArray;

@interface PDPublishAdminRequest
{
    _Bool _firstRun;	// 32 = 0x20
    NSArray *_adminRequests;	// 40 = 0x28
    CLSAdminRequestor *_requestor;	// 48 = 0x30
    NSArray *_adminRequestAccounts;	// 56 = 0x38
    NSMutableArray *_successfulObjects;	// 64 = 0x40
    NSMutableArray *_failures;	// 72 = 0x48
}

+ (id)defaultEndpointInfo;	// IMP=0x0040000000198d38
- (void).cxx_destruct;	// IMP=0x002000000019b330
@property(retain, nonatomic) NSMutableArray *failures; // @synthesize failures=_failures;
@property(retain, nonatomic) NSMutableArray *successfulObjects; // @synthesize successfulObjects=_successfulObjects;
@property(retain, nonatomic) NSArray *adminRequestAccounts; // @synthesize adminRequestAccounts=_adminRequestAccounts;
@property(retain, nonatomic) CLSAdminRequestor *requestor; // @synthesize requestor=_requestor;
@property(retain, nonatomic) NSArray *adminRequests; // @synthesize adminRequests=_adminRequests;
- (void)finishedResponseProcessing;	// IMP=0x001000000019b126
- (_Bool)processPayloadFromResponse:(id)arg1 error:(id *)arg2;	// IMP=0x001000000019ad7d
- (_Bool)processAdminRequestAccountPayload:(id)arg1;	// IMP=0x001000000019a626
- (void)disableSearchIfAccountIsUnapproved:(id)arg1;	// IMP=0x001000000019a4dd
- (id)requestData;	// IMP=0x0010000000199389
- (_Bool)wantsToExecute;	// IMP=0x0010000000199108
- (id)initWithDatabase:(id)arg1 adminRequests:(id)arg2 requestor:(id)arg3;	// IMP=0x0010000000198ffc
- (_Bool)requiresValidUser;	// IMP=0x0010000000198ff4
- (id)customRequestHeaders;	// IMP=0x0010000000198e81
- (_Bool)shouldProcessPayloadWithStatusCode:(int)arg1;	// IMP=0x0010000000198e58
- (_Bool)acceptsPayloadType:(int)arg1;	// IMP=0x0010000000198e3f
- (Class)expectedResponseClass;	// IMP=0x0010000000198e2e
- (id)acceptContentType;	// IMP=0x0010000000198e21
- (id)requestContentType;	// IMP=0x0010000000198e14
- (id)endpointIdentifier;	// IMP=0x0010000000198e07
- (id)logSubsystem;	// IMP=0x0010000000198d24

@end

