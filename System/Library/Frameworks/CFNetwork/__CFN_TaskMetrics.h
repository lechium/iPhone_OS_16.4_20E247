//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSUUID, __CFN_TransactionMetrics;

@interface __CFN_TaskMetrics : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _ignoreNextRedirection;	// 12 = 0xc
    int _pidForHAR;	// 16 = 0x10
    NSUUID *_UUID;	// 24 = 0x18
    unsigned long long _identifier;	// 32 = 0x20
    NSMutableArray *_transactionMetrics;	// 40 = 0x28
    double _createTime;	// 48 = 0x30
    double _firstResumeTime;	// 56 = 0x38
    double _completeTime;	// 64 = 0x40
    long long _options;	// 72 = 0x48
    NSString *_sourceApplicationBundleIdentifier;	// 80 = 0x50
    long long _schedulingTier;	// 88 = 0x58
    __CFN_TransactionMetrics *_currentTransactionMetrics;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000166b0a
- (void).cxx_destruct;	// IMP=0x0000000000166acc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001669bf
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000016676c
@property(readonly) __CFN_TransactionMetrics *_daemon_currentTransactionMetrics;
@property(readonly, nonatomic) NSMutableArray *_daemon_transactionMetrics;

@end

