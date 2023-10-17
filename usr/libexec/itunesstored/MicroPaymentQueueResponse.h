//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSLock, NSMutableArray, NSNumber;

@interface MicroPaymentQueueResponse : NSObject
{
    NSData *_appReceipt;	// 8 = 0x8
    NSLock *_lock;	// 16 = 0x10
    NSMutableArray *_payments;	// 24 = 0x18
    NSMutableArray *_rangesToLoad;	// 32 = 0x20
    long long _requestType;	// 40 = 0x28
    long long _serverPaymentCount;	// 48 = 0x30
    _Bool _shouldTriggerQueueCheck;	// 56 = 0x38
    NSNumber *_userIdentifier;	// 64 = 0x40
}

- (_Bool)_ntsLoadFromPropertyList:(id)arg1;	// IMP=0x00200000000485d1
- (id)_dsidFromDictionary:(id)arg1;	// IMP=0x001000000004852c
- (id)_copyPaymentsFromDictionary:(id)arg1;	// IMP=0x00100000000482bf
- (id)_copyAppReceiptFromDictionary:(id)arg1;	// IMP=0x001000000004826d
@property(copy) NSNumber *userIdentifier;
@property _Bool shouldTriggerQueueCheck;
- (void)setRangesToLoad:(id)arg1;	// IMP=0x00100000000480e9
@property(copy) NSArray *payments;
@property long long serverPaymentCount;
@property(readonly) long long requestType;
@property(readonly) NSArray *rangesToLoad;
@property(readonly) NSData *appReceipt;
- (_Bool)loadFromPropertyList:(id)arg1;	// IMP=0x0010000000047e80
- (void)appendResponse:(id)arg1;	// IMP=0x0010000000047b67
- (void)dealloc;	// IMP=0x0010000000047b08
- (id)initWithRequestType:(long long)arg1;	// IMP=0x0010000000047acb

@end
