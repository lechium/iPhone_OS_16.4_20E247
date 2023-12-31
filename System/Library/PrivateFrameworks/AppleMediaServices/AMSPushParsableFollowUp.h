//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSPushParsableFollowUp : NSObject
{
}

+ (id)_createNotificationFromFollowUpItem:(id)arg1;	// IMP=0x001000000030b4a2
+ (id)_createFollowUpItemFromNotification:(id)arg1;	// IMP=0x001000000030a904
+ (id)_createFollowUpItemFromPayload:(id)arg1;	// IMP=0x0010000000309985
+ (_Bool)_shouldClearFollowUpFromPayload:(id)arg1;	// IMP=0x00100000003098f3
+ (_Bool)_shouldAllowFollowUp:(id)arg1 bag:(id)arg2;	// IMP=0x00100000003090cc
+ (void)_performPostWithPayload:(id)arg1 bag:(id)arg2;	// IMP=0x0010000000308c60
+ (void)_performClearWithPayload:(id)arg1;	// IMP=0x0010000000308799
+ (id)createBagForSubProfile;	// IMP=0x00100000003086ff
+ (id)bagSubProfileVersion;	// IMP=0x00100000003086af
+ (id)bagSubProfile;	// IMP=0x001000000030865f
+ (void)userNotification:(id)arg1 selectedButtonAction:(id)arg2 bag:(id)arg3;	// IMP=0x00100000003080e6
+ (_Bool)shouldSkipAccountCheck;	// IMP=0x00100000003080de
+ (void)handleNotificationPayload:(id)arg1 config:(id)arg2 bag:(id)arg3;	// IMP=0x001000000030800b
+ (id)sharedISO8601DateFormatter;	// IMP=0x0010000000307fb6
+ (_Bool)isDeviceOfferNotification:(id)arg1;	// IMP=0x0010000000307f41
+ (void)removeDeviceOfferWithPayload:(id)arg1 logKey:(id)arg2 bag:(id)arg3;	// IMP=0x0010000000307918

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

