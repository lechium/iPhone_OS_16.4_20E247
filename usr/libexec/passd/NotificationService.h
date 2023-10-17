//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NotificationService
{
}

+ (id)_propertySettersForPaymentTransaction;	// IMP=0x0040000000126402
+ (id)_predicateForNotificationServicePID:(id)arg1;	// IMP=0x00100000001263df
+ (id)_predicateForNoRegistrationURL;	// IMP=0x00100000001263bf
+ (id)_predicateForRegistrationURL:(id)arg1;	// IMP=0x0010000000126357
+ (id)_predicateForServiceURL:(id)arg1;	// IMP=0x00100000001262ef
+ (id)_predicateForServiceType:(unsigned long long)arg1;	// IMP=0x001000000012627c
+ (id)_predicateForPushTopic:(id)arg1;	// IMP=0x0010000000126259
+ (id)_notificationServicesInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x0010000000126050
+ (id)notificationServicesInDatabase:(id)arg1 withPushTopic:(id)arg2 serviceType:(unsigned long long)arg3 serviceURL:(id)arg4 registrationURL:(id)arg5;	// IMP=0x00100000001259b6
+ (id)notificationServicesInDatabase:(id)arg1 withPushTopic:(id)arg2;	// IMP=0x001000000012592a
+ (id)notificationServicesInDatabase:(id)arg1;	// IMP=0x0010000000125916
+ (id)anyInDatabase:(id)arg1 withPushTopic:(id)arg2 serviceType:(unsigned long long)arg3 serviceURL:(id)arg4 registrationURL:(id)arg5;	// IMP=0x0010000000125714
+ (id)anyInDatabase:(id)arg1 withServiceURL:(id)arg2 registrationURL:(id)arg3;	// IMP=0x001000000012559e
+ (id)anyInDatabase:(id)arg1 withPushTopic:(id)arg2;	// IMP=0x0010000000125512
+ (id)insertNotificationServiceWithPushTopic:(id)arg1 serviceType:(unsigned long long)arg2 serviceURL:(id)arg3 registrationURL:(id)arg4 deviceIdentifier:(id)arg5 inDatabase:(id)arg6;	// IMP=0x001000000012543d
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000012540e
+ (id)databaseTable;	// IMP=0x0000000000125401
- (void)updateWithNotificationService:(id)arg1;	// IMP=0x0040000000125e96
- (void)updateWithLastUpdatedTag:(id)arg1;	// IMP=0x0010000000125dcb
- (void)updateWithLastUpdatedDate:(id)arg1;	// IMP=0x0010000000125d3b
- (void)updateWithAppLaunchToken:(id)arg1;	// IMP=0x0010000000125d22
- (void)updateWithAuthenticationToken:(id)arg1;	// IMP=0x0010000000125d09
- (void)updateWithPushToken:(id)arg1;	// IMP=0x0010000000125cf0
- (id)notificationService;	// IMP=0x0010000000125bb8
- (id)initWithPushTopic:(id)arg1 serviceType:(unsigned long long)arg2 serviceURL:(id)arg3 registrationURL:(id)arg4 deviceIdentifier:(id)arg5 inDatabase:(id)arg6;	// IMP=0x0010000000125278

@end
