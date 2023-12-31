//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRKIDSMessageOptions, NSArray, NSDictionary, NSString;
@protocol CRKCancelable><CRKResumable;

@protocol CRKIDSLocalPrimitives
@property(readonly, copy, nonatomic) NSArray *accounts;
@property(readonly, copy, nonatomic) NSDictionary *debugInfo;
- (void)fetchFirewallWithCompletion:(void (^)(id <CRKIDSFirewall>, NSError *))arg1;
- (id <CRKCancelable><CRKResumable>)subscribeToMessageReceivesWithHandler:(void (^)(NSDictionary *, NSString *, NSString *))arg1;
- (id <CRKCancelable><CRKResumable>)subscribeToMessageSendsWithHandler:(void (^)(NSString *, _Bool, NSError *))arg1;
- (_Bool)sendMessage:(NSDictionary *)arg1 toAddress:(NSString *)arg2 fromID:(NSString *)arg3 options:(CRKIDSMessageOptions *)arg4 identifier:(id *)arg5 error:(id *)arg6;
@end

