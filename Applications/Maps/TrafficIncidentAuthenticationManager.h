//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TrafficIncidentAuthenticationManager : NSObject
{
    _Bool _supported;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0020000000754a53
@property(readonly, nonatomic, getter=isSupported) _Bool supported; // @synthesize supported=_supported;
- (void)submissionDidFailAttestation;	// IMP=0x0010000000755fca
- (id)_clientDataHash;	// IMP=0x0010000000755eb9
- (id)_keyId;	// IMP=0x0010000000755e2b
- (_Bool)_isUUIDValid;	// IMP=0x0010000000755d24
- (id)_storedUUID;	// IMP=0x0010000000755cd7
- (void)_incrementSubmissionCount;	// IMP=0x0010000000755c44
- (void)_refreshStoredUUID;	// IMP=0x0010000000755b1d
- (void)_rollOverKeyId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000007558ae
- (void)_generateAssertionKeyId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000007554c8
- (void)_attestKeyId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000754fda
- (void)_generateKey:(CDUnknownBlockType)arg1;	// IMP=0x0010000000754cb0
- (void)rolloverAnonymousId;	// IMP=0x0010000000754c48
- (void)generateAuthenticationInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000754aa8
- (void)dealloc;	// IMP=0x00100000007549b8
- (id)init;	// IMP=0x00100000007548d7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
