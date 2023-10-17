//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SBKStoreClampsController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSDictionary *_transactionClamps;	// 16 = 0x10
    double _accountIdentifierCheckTimestamp;	// 24 = 0x18
    double _authenticationNeededTimestamp;	// 32 = 0x20
    double _userAcceptedSyncTimestamp;	// 40 = 0x28
    double _networkingBlockedUntil;	// 48 = 0x30
    double _backOffUntil;	// 56 = 0x38
    double _userCancelledSignInBackOffUntil;	// 64 = 0x40
    double _nextUserCancelBackOffInterval;	// 72 = 0x48
    NSData *_pendingUserDefaultArchivedData;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000005933
+ (id)sharedClampsController;	// IMP=0x0010000000005903
- (void).cxx_destruct;	// IMP=0x0000000000005174
@property(retain, nonatomic) NSData *pendingUserDefaultArchivedData; // @synthesize pendingUserDefaultArchivedData=_pendingUserDefaultArchivedData;
@property(nonatomic) double nextUserCancelBackOffInterval; // @synthesize nextUserCancelBackOffInterval=_nextUserCancelBackOffInterval;
@property(nonatomic) double userCancelledSignInBackOffUntil; // @synthesize userCancelledSignInBackOffUntil=_userCancelledSignInBackOffUntil;
@property(nonatomic) double backOffUntil; // @synthesize backOffUntil=_backOffUntil;
@property(nonatomic) double networkingBlockedUntil; // @synthesize networkingBlockedUntil=_networkingBlockedUntil;
@property(nonatomic) double userAcceptedSyncTimestamp; // @synthesize userAcceptedSyncTimestamp=_userAcceptedSyncTimestamp;
@property(nonatomic) double authenticationNeededTimestamp; // @synthesize authenticationNeededTimestamp=_authenticationNeededTimestamp;
@property(nonatomic) double accountIdentifierCheckTimestamp; // @synthesize accountIdentifierCheckTimestamp=_accountIdentifierCheckTimestamp;
@property(retain, nonatomic) NSDictionary *transactionClamps; // @synthesize transactionClamps=_transactionClamps;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)_canScheduleTransactionBasedOnUserCancelledSignIn:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004ea9
- (_Bool)_canScheduleTransactionBasedOnBackOff:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004ccd
- (_Bool)_canScheduleTransactionBasedOnAccountIdentifierCheck:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004bad
- (_Bool)_canScheduleTransactionBasedOfNetworkingBlocked:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004a59
- (_Bool)_canScheduleTransactionBasedOnType:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000047f4
- (id)_keyForTransaction:(id)arg1;	// IMP=0x00000000000047df
- (double)_rightNow;	// IMP=0x0000000000004788
- (_Bool)isNetworkingBlocked;	// IMP=0x0000000000004713
- (void)clearNetworkingBlocked;	// IMP=0x00000000000046fe
- (void)setNetworkingBlocked;	// IMP=0x00000000000046bb
- (void)clearBackOff;	// IMP=0x000000000000468a
- (void)backOffForTimeInterval:(double)arg1;	// IMP=0x000000000000463d
- (void)clearUserCancelledSignIn;	// IMP=0x00000000000045fe
- (void)setUserCancelledSignIn;	// IMP=0x000000000000440d
- (_Bool)hasUserRecentlyAcceptedSync;	// IMP=0x000000000000436d
- (void)clearUserAcceptedSyncTimestamp;	// IMP=0x000000000000433c
- (void)setUserAcceptedSyncTimestamp;	// IMP=0x0000000000004301
- (_Bool)hasAuthenticatedTooRecentlyForTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000417d
- (void)clearAuthenticationRequest;	// IMP=0x000000000000414c
- (void)setAuthenticationRequest;	// IMP=0x0000000000004111
- (void)clearAccountIdentifierCheckTimestamp;	// IMP=0x00000000000040e0
- (void)setAccountIdentifierCheckTimestamp;	// IMP=0x00000000000040a5
- (void)clearTimestampForTransaction:(id)arg1;	// IMP=0x0000000000003ffe
- (void)setTimestampForTransaction:(id)arg1;	// IMP=0x0000000000003f6c
- (void)reset;	// IMP=0x0000000000003e8a
- (_Bool)canScheduleTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000003dd5
- (void)accessTransactionClampsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003d48
- (void)saveToUserDefaults;	// IMP=0x0000000000003c59
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003aae
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003955
- (id)description;	// IMP=0x0000000000003788
- (id)init;	// IMP=0x0000000000003708

@end
