//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableURLRequest, NSString, NSURLSessionTask;

@interface GKScoreNetworkRequest : NSObject
{
    _Bool currentlyRunning;	// 8 = 0x8
    _Bool issueRequests;	// 9 = 0x9
    _Bool coalescingAgent;	// 10 = 0xa
    NSString *bundleID;	// 16 = 0x10
    NSMutableURLRequest *nsurlRequest;	// 24 = 0x18
    NSURLSessionTask *nsurlTask;	// 32 = 0x20
    NSString *playerID;	// 40 = 0x28
    NSMutableDictionary *requestData;	// 48 = 0x30
    NSString *uuid;	// 56 = 0x38
    NSArray *challengeIDs;	// 64 = 0x40
}

+ (long long)coalescingDelay;	// IMP=0x00200000000fea99
+ (id)bagKey;	// IMP=0x00100000000fdf22
- (void).cxx_destruct;	// IMP=0x00200000000feca2
@property(nonatomic) _Bool coalescingAgent; // @synthesize coalescingAgent;
@property(retain, nonatomic) NSArray *challengeIDs; // @synthesize challengeIDs;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid;
@property(retain, nonatomic) NSMutableDictionary *requestData; // @synthesize requestData;
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID;
@property(retain, nonatomic) NSURLSessionTask *nsurlTask; // @synthesize nsurlTask;
@property(retain, nonatomic) NSMutableURLRequest *nsurlRequest; // @synthesize nsurlRequest;
@property(nonatomic) _Bool issueRequests; // @synthesize issueRequests;
@property(nonatomic) _Bool currentlyRunning; // @synthesize currentlyRunning;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID;
@property(readonly, copy) NSString *description;
- (void)updateWithTaskInfo:(id)arg1;	// IMP=0x00100000000fe8b7
- (void)handleNetworkRequest:(id)arg1 session:(id)arg2 clientProxy:(id)arg3 previousKnownPendingAmount:(long long)arg4;	// IMP=0x00100000000fe8a4
- (void)addInRequestData:(id *)arg1 additional:(id)arg2;	// IMP=0x00100000000fe77d
- (id)requestIdentifier;	// IMP=0x00100000000fe773
- (id)taskInfo;	// IMP=0x00100000000fe58e
- (void)removeFromStore:(id)arg1;	// IMP=0x00100000000fe4aa
- (id)postBody;	// IMP=0x00100000000fe3b4
@property(readonly) long long numberOfRequests; // @dynamic numberOfRequests;
- (id)initWithScores:(id)arg1 bundleID:(id)arg2 eligibleChallenges:(id)arg3;	// IMP=0x00100000000fdff0
- (id)initWithTask:(id)arg1;	// IMP=0x00100000000fdf44
- (void)handleNetworkRequest:(id)arg1 session:(id)arg2 clientProxy:(id)arg3;	// IMP=0x00100000000fdf2f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

