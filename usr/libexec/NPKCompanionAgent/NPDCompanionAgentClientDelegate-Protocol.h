//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol NPDCompanionAgentClientDelegate <NSObject>
- (void)transactionSourceIdentifier:(NSString *)arg1 didRemoveTransactionWithIdentifier:(NSString *)arg2;
- (void)markPendingTransactionAsProcessedForPassWithUniqueID:(NSString *)arg1;
- (void)fetchPendingTransactionForPassWithUniqueID:(NSString *)arg1 completion:(void (^)(PKPaymentPass *, PKPaymentTransaction *, NSString *))arg2;
- (void)handleUpdatedSettings:(unsigned long long)arg1 forPassWithUniqueID:(NSString *)arg2;
@end

