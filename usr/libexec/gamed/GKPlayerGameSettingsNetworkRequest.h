//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableURLRequest, NSString, NSURLSessionTask;

@interface GKPlayerGameSettingsNetworkRequest : NSObject
{
    _Bool currentlyRunning;	// 8 = 0x8
    _Bool issueRequests;	// 9 = 0x9
    NSURLSessionTask *nsurlTask;	// 16 = 0x10
    NSMutableURLRequest *nsurlRequest;	// 24 = 0x18
    NSString *playerID;	// 32 = 0x20
    NSString *uuid;	// 40 = 0x28
    NSMutableDictionary *requestData;	// 48 = 0x30
    NSString *settingValue;	// 56 = 0x38
    NSString *bundleID;	// 64 = 0x40
}

+ (id)bagKey;	// IMP=0x0020000000102703
- (void).cxx_destruct;	// IMP=0x0020000000102f9b
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID;
@property(retain, nonatomic) NSString *settingValue; // @synthesize settingValue;
@property(retain, nonatomic) NSMutableDictionary *requestData; // @synthesize requestData;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid;
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID;
@property(retain, nonatomic) NSMutableURLRequest *nsurlRequest; // @synthesize nsurlRequest;
@property(retain, nonatomic) NSURLSessionTask *nsurlTask; // @synthesize nsurlTask;
@property(nonatomic) _Bool issueRequests; // @synthesize issueRequests;
@property(nonatomic) _Bool currentlyRunning; // @synthesize currentlyRunning;
- (id)requestIdentifier;	// IMP=0x0010000000102eb0
- (id)taskInfo;	// IMP=0x0010000000102d57
- (void)removeFromStore:(id)arg1;	// IMP=0x0010000000102c4d
- (id)postBody;	// IMP=0x0010000000102b6b
- (id)initWithTask:(id)arg1;	// IMP=0x0010000000102abf
- (void)handleNetworkRequest:(id)arg1 session:(id)arg2 clientProxy:(id)arg3;	// IMP=0x00100000001029e5
- (void)updateWithTaskInfo:(id)arg1;	// IMP=0x00100000001028cd
- (id)initWithBundleID:(id)arg1 value:(id)arg2;	// IMP=0x00100000001027a1
- (_Bool)isDuplicateRequest:(id)arg1;	// IMP=0x0010000000102710

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

