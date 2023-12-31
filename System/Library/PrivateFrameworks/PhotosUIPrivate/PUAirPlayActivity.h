//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXActivity.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUAirPlayActivity : PXActivity
{
}

- (void)airPlayControllerRouteAvailabilityChanged:(id)arg1;	// IMP=0x0000000000089da7
- (void)_unregisterForAirPlayNotifications;	// IMP=0x0000000000089d54
- (void)_registerForAirPlayNotifications;	// IMP=0x0000000000089d01
- (void)tearDownForCompletion;	// IMP=0x0000000000089cef
- (void)performActivity;	// IMP=0x0000000000089c6b
@property(readonly, nonatomic) NSString *localizedRouteUnavailabilityMessage;
@property(readonly, nonatomic, getter=isRouteAvailable) _Bool routeAvailable;
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x0000000000089b63
- (id)_systemImageName;	// IMP=0x0000000000089b56
- (id)activityTitle;	// IMP=0x0000000000089b45
- (id)activityType;	// IMP=0x0000000000089b31
- (void)dealloc;	// IMP=0x0000000000089af3
- (id)init;	// IMP=0x0000000000089aa7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

