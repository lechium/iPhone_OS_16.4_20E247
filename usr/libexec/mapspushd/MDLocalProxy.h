//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MDAnnouncementsManager, MDDevicePushManager, MDState, NSString, NSXPCListener;

@interface MDLocalProxy : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    MDState *_state;	// 16 = 0x10
    MDDevicePushManager *_pushManager;	// 24 = 0x18
    MDAnnouncementsManager *_announcementsManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000002895
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000022a7
- (_Bool)deleteAppGroupContainer;	// IMP=0x0010000000002053
- (void)handleMapsApplicationRemoval:(CDUnknownBlockType)arg1;	// IMP=0x0010000000001f32
- (void)resetAnnouncements;	// IMP=0x0010000000001f1c
- (void)clearCurrentAnnouncement;	// IMP=0x0010000000001f06
- (void)fetchCurrentAnnouncement:(CDUnknownBlockType)arg1;	// IMP=0x0010000000001ef0
- (void)simulateRAPStatusChangeNotification;	// IMP=0x0010000000001eda
- (void)simulateUGCPhotoAttributionClearedNotification;	// IMP=0x0010000000001ec4
- (void)simulateUGCPhotoSubmissionResolution;	// IMP=0x0010000000001eae
- (void)simulateProblemResolution;	// IMP=0x0010000000001e98
- (void)fetchDevicePushToken:(CDUnknownBlockType)arg1;	// IMP=0x0010000000001e2b
- (void)clearBulletinWithRecordID:(id)arg1;	// IMP=0x0010000000001cef
- (void)clearVenueBulletin;	// IMP=0x0010000000001ca9
- (void)showVenueBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;	// IMP=0x0010000000001bfe
- (void)clearTrafficIncidentBulletinWithAlertID:(id)arg1;	// IMP=0x0010000000001b8b
- (void)showTrafficIncidentAlertWithID:(id)arg1 withReroute:(_Bool)arg2 title:(id)arg3 description:(id)arg4;	// IMP=0x0010000000001ad7
- (void)clearPredictedRouteTrafficIncidentBulletin;	// IMP=0x0010000000001a91
- (void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)arg1;	// IMP=0x0010000000001a21
- (void)clearMapsSuggestionsBulletin;	// IMP=0x00100000000019db
- (void)showMapsSuggestionsBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;	// IMP=0x0010000000001930
- (void)clearLowFuelAlertBulletin;	// IMP=0x00100000000018ea
- (void)showLowFuelAlertBulletinForLowFuelDetails:(id)arg1;	// IMP=0x001000000000187a
- (void)clearParkedCarBulletin;	// IMP=0x0010000000001834
- (void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2;	// IMP=0x001000000000175e
- (void)showParkedCarBulletinForEvent:(id)arg1;	// IMP=0x00100000000016b2
- (void)setAnnouncementsManager:(id)arg1;	// IMP=0x00100000000016a1
- (void)setPushManager:(id)arg1;	// IMP=0x0010000000001690
- (void)startServer;	// IMP=0x001000000000167a
- (void)dealloc;	// IMP=0x0010000000001620
- (id)initWithState:(id)arg1;	// IMP=0x001000000000155c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
