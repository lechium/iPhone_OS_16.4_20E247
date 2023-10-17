//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSProgress, NSString, SHLSyncSession;
@protocol SHLSyncSessionFetchTaskDelegate;

@interface SHLSyncSessionFetchTask : NSObject
{
    NSProgress *_progress;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    long long _retryCount;	// 24 = 0x18
    SHLSyncSession *session;	// 32 = 0x20
    NSString *_syncStartCondition;	// 40 = 0x28
    long long _fetchType;	// 48 = 0x30
    id <SHLSyncSessionFetchTaskDelegate> _delegate;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000215cc
- (void).cxx_destruct;	// IMP=0x0020000000021672
@property(nonatomic) __weak id <SHLSyncSessionFetchTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long fetchType; // @synthesize fetchType=_fetchType;
@property(nonatomic) NSString *syncStartCondition; // @synthesize syncStartCondition=_syncStartCondition;
@property(nonatomic) __weak SHLSyncSession *session; // @synthesize session;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000021547
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000021460
@property(readonly, nonatomic) long long size;
@property(readonly, nonatomic) long long type;
- (id)init;	// IMP=0x001000000002137d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
