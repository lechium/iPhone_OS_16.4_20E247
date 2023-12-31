//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableSet, NSString, UNUserNotificationCenter;

@interface MDNotificationCenter : NSObject
{
    UNUserNotificationCenter *_notificationCenter;	// 8 = 0x8
    NSMutableSet *_requests;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000006f04
- (int)GEOUITargetForAnnouncementType:(int)arg1;	// IMP=0x0010000000006eed
- (void)handleTapNotificationMetricsWithRequest:(id)arg1;	// IMP=0x0010000000006802
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000660f
- (void)userNotificationCenter:(id)arg1 didOpenApplicationForResponse:(id)arg2;	// IMP=0x00100000000064cf
- (void)handleNotificationResponse:(id)arg1;	// IMP=0x0010000000005f98
- (void)hideSharedTripNotification:(id)arg1;	// IMP=0x0010000000005cd5
- (void)showSharedTripNotification:(id)arg1 ofType:(unsigned long long)arg2 forState:(id)arg3;	// IMP=0x0010000000005bac
- (id)addUGCClearedPhotoAttributionNotificationWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x0010000000005b46
- (id)addUGCPhotoNotificationWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;	// IMP=0x0010000000005a68
- (id)addRAPNotificationForProblemStatusChangeWithRapInfo:(id)arg1;	// IMP=0x0010000000005a02
- (id)addRAPNotificationForFixedProblems:(id)arg1;	// IMP=0x00100000000058c1
- (id)addPushedBookmark:(id)arg1;	// IMP=0x0010000000005816
- (id)addPredictedRouteTrafficIncidentNotificationForCommuteDetails:(id)arg1;	// IMP=0x0010000000005717
- (void)clearNotificationWithTrafficIncidentAlertID:(id)arg1;	// IMP=0x00100000000054fa
- (id)addTrafficIncidentAlertNotificationWithAlertID:(id)arg1 withReroute:(_Bool)arg2 title:(id)arg3 description:(id)arg4;	// IMP=0x001000000000541a
- (id)addVenueNotificationWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;	// IMP=0x001000000000531c
- (id)addMapsSuggestionsNotificationWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;	// IMP=0x0010000000005242
- (id)addLowFuelAlertNotificationWithDetails:(id)arg1;	// IMP=0x0010000000005185
- (id)addParkedCarReplacementNotificationWithEvent:(id)arg1 replacingEvent:(id)arg2;	// IMP=0x00100000000050a8
- (id)addParkedCarNotificationWithEvent:(id)arg1;	// IMP=0x0010000000004ac2
- (id)addGeoDInternalNotificationWithTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x0010000000004a0b
- (id)addProxyAuthFailedNotificationWithTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x0010000000004935
- (id)addAnnouncement:(id)arg1;	// IMP=0x00100000000047fa
- (id)_addRequest:(id)arg1;	// IMP=0x001000000000449f
- (MISSING_TYPE *)clearAllNotifications;	// IMP=0x00100000000042ad
- (void)clearNotificationsOfType:(long long)arg1;	// IMP=0x0010000000004065
- (void)clearNotificationWithIdentifier:(id)arg1;	// IMP=0x0010000000003bcb
- (void)dealloc;	// IMP=0x0010000000003b6f
- (id)init;	// IMP=0x0010000000003a5d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

