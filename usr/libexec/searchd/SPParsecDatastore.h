//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString, PRSSearchSession, SDNetworkQualityInquiry, SPParsecFeedbackProxy, SSPlistDataReader;
@protocol OS_dispatch_queue;

@interface SPParsecDatastore : NSObject
{
    SPParsecFeedbackProxy *_listener;	// 8 = 0x8
    unsigned long long _parsecBeyondTimeoutRequestCount;	// 16 = 0x10
    _Bool _withinThreshold;	// 24 = 0x18
    NSSet *_setOfVisibleApps;	// 32 = 0x20
    NSSet *_setOfHiddenApps;	// 40 = 0x28
    _Bool _parsecEnabled;	// 48 = 0x30
    _Bool _activated;	// 49 = 0x31
    NSArray *_excludedDomainIdentifiers;	// 56 = 0x38
    PRSSearchSession *_session;	// 64 = 0x40
    struct __MDSimpleQueryEvaluator *_queryEval;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
    double _sessionStartTime;	// 88 = 0x58
    SDNetworkQualityInquiry *_networkConditions;	// 96 = 0x60
    unsigned long long _quality;	// 104 = 0x68
    unsigned long long _lastKnownQuality;	// 112 = 0x70
}

+ (void)initialize;	// IMP=0x002000000002d7f9
- (void).cxx_destruct;	// IMP=0x002000000002f1c7
@property unsigned long long lastKnownQuality; // @synthesize lastKnownQuality=_lastKnownQuality;
@property unsigned long long quality; // @synthesize quality=_quality;
@property(retain) SDNetworkQualityInquiry *networkConditions; // @synthesize networkConditions=_networkConditions;
@property(nonatomic) double sessionStartTime; // @synthesize sessionStartTime=_sessionStartTime;
@property _Bool activated; // @synthesize activated=_activated;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) struct __MDSimpleQueryEvaluator *queryEval; // @synthesize queryEval=_queryEval;
@property(retain, nonatomic) PRSSearchSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSArray *excludedDomainIdentifiers; // @synthesize excludedDomainIdentifiers=_excludedDomainIdentifiers;
@property _Bool parsecEnabled; // @synthesize parsecEnabled=_parsecEnabled;
- (void)setParsecFeedbackAllowed:(_Bool)arg1;	// IMP=0x001000000002ee52
- (void)setParsecState:(_Bool)arg1;	// IMP=0x001000000002edf1
- (id)feedbackListeners;	// IMP=0x001000000002ebf0
@property(readonly) NSSet *appBlocklist;
@property(readonly, nonatomic) SSPlistDataReader *cepDictionary;
@property(readonly, nonatomic) SSPlistDataReader *cannedCEPValues;
- (void)getFTEStringsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000002e87e
- (void)updateCorrectionDict:(id)arg1;	// IMP=0x001000000002e808
- (void)sessionReceivedBagWithEnabledDomains:(id)arg1;	// IMP=0x001000000002e658
- (double)timeOut:(_Bool)arg1;	// IMP=0x001000000002e636
- (double)suggestionTimeOut;	// IMP=0x001000000002e5d4
- (double)searchTimeOut;	// IMP=0x001000000002e572
- (double)computeTimeout:(double)arg1;	// IMP=0x001000000002e439
@property(readonly, nonatomic) unsigned int domain;
- (void)preheat;	// IMP=0x001000000002e3e6
- (void)deactivate;	// IMP=0x001000000002e38a
- (void)activate;	// IMP=0x001000000002e273
- (id)performQuery:(id)arg1;	// IMP=0x001000000002dbce
- (void)checkParsecState;	// IMP=0x001000000002db3d
- (void)setupSearchSession;	// IMP=0x001000000002da40
- (_Bool)available;	// IMP=0x001000000002da21
- (id)createResultObject;	// IMP=0x001000000002da08
@property(readonly, nonatomic) NSString *applicationNameForUserAgent;
- (id)init;	// IMP=0x001000000002d919
- (void)updateParsecBeyondTimeoutCount:(_Bool)arg1;	// IMP=0x001000000002d907

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

