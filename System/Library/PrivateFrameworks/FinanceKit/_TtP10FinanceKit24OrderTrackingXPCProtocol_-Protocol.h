//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDate, NSString, _TtC10FinanceKit29XPCOrderInsertOrUpdateOptions;

@protocol _TtP10FinanceKit24OrderTrackingXPCProtocol_
- (void)containsOrderWithOrderTypeIdentifier:(NSString *)arg1 orderIdentifier:(NSString *)arg2 updatedDate:(NSDate *)arg3 completionHandler:(void (^)(XPCContainsOrderResult *, NSError *))arg4;
- (void)containsOrderWithOrderTypeIdentifier:(NSString *)arg1 orderIdentifier:(NSString *)arg2 updatedDate:(NSDate *)arg3 completion:(void (^)(XPCContainsOrderResult *, NSError *))arg4;
- (void)refreshOrderWithOrderTypeIdentifier:(NSString *)arg1 orderIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)updateOrdersShowAsActiveWithNow:(NSDate *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setOrderMarkedAsCompleteWithOrderTypeIdentifier:(NSString *)arg1 orderIdentifier:(NSString *)arg2 newValue:(_Bool)arg3 modificationDate:(NSDate *)arg4 completionHandler:(void (^)(NSError *))arg5;
- (void)deleteOrderWithOrderTypeIdentifier:(NSString *)arg1 orderIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)insertOrUpdateOrderSyncWithData:(NSData *)arg1 options:(_TtC10FinanceKit29XPCOrderInsertOrUpdateOptions *)arg2 completion:(void (^)(_TtC10FinanceKit28XPCOrderInsertOrUpdateResult *, NSError *))arg3;
- (void)insertOrUpdateOrderAsyncWithData:(NSData *)arg1 options:(_TtC10FinanceKit29XPCOrderInsertOrUpdateOptions *)arg2 completion:(void (^)(_TtC10FinanceKit28XPCOrderInsertOrUpdateResult *, NSError *))arg3;
@end

