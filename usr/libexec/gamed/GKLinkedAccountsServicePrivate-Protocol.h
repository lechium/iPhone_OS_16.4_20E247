//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GKLinkedAccountsService-Protocol.h"

@protocol GKLinkedAccountsServicePrivate <GKLinkedAccountsService>
- (oneway void)notifyAvailableExternalServicesWithHandler:(void (^)(_Bool, NSError *))arg1;
- (oneway void)getAuthTokenForExternalService:(BOOL)arg1 handler:(void (^)(NSString *, NSError *))arg2;
- (oneway void)availableExternalServicesWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)disconnectExternalService:(BOOL)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)connectExternalService:(BOOL)arg1 handler:(void (^)(NSError *))arg2;
@end
