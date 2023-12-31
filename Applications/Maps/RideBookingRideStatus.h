//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, CLPlacemark, INGetRideStatusIntentResponse, INRequestRideIntentResponse, INRideStatus, NSArray, NSDate, NSDateComponents, NSNumber, NSString, NSUserActivity, RideBookingRideOption, RidesharingSpecialPricingBadge, UIImage;
@protocol RideBookingApplication;

@interface RideBookingRideStatus : NSObject
{
    _Bool _rideStatusIsCanceled;	// 8 = 0x8
    _Bool _rideStatusIsCanceledByService;	// 9 = 0x9
    id <RideBookingApplication> _application;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    unsigned long long _phase;	// 32 = 0x20
    unsigned long long _rideStatusError;	// 40 = 0x28
    NSUserActivity *_userActivity;	// 48 = 0x30
    NSUserActivity *_userActivityForCanceling;	// 56 = 0x38
    NSUserActivity *_userActivityForCompletedRide;	// 64 = 0x40
    RideBookingRideOption *_rideOption;	// 72 = 0x48
}

+ (id)statusWithApplication:(id)arg1 error:(unsigned long long)arg2;	// IMP=0x0040000000781987
- (void).cxx_destruct;	// IMP=0x0010000000781be3
@property(readonly, nonatomic) RideBookingRideOption *rideOption; // @synthesize rideOption=_rideOption;
@property(nonatomic) _Bool rideStatusIsCanceledByService; // @synthesize rideStatusIsCanceledByService=_rideStatusIsCanceledByService;
@property(nonatomic) _Bool rideStatusIsCanceled; // @synthesize rideStatusIsCanceled=_rideStatusIsCanceled;
@property(readonly, nonatomic) NSUserActivity *userActivityForCompletedRide; // @synthesize userActivityForCompletedRide=_userActivityForCompletedRide;
@property(readonly, nonatomic) NSUserActivity *userActivityForCanceling; // @synthesize userActivityForCanceling=_userActivityForCanceling;
@property(retain, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(nonatomic) unsigned long long rideStatusError; // @synthesize rideStatusError=_rideStatusError;
@property(nonatomic) unsigned long long phase; // @synthesize phase=_phase;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <RideBookingApplication> application; // @synthesize application=_application;
- (id)description;	// IMP=0x0010000000781ab8
@property(readonly, nonatomic) _Bool isActiveRide;
@property(readonly, nonatomic) _Bool isValidRide;
@property(readonly, nonatomic) _Bool isCanceledByUser;
- (id)initWithApplication:(id)arg1 rideOption:(id)arg2 canceled:(_Bool)arg3 canceledByService:(_Bool)arg4 userActivityForCanceling:(id)arg5 identifier:(id)arg6 phase:(unsigned long long)arg7 error:(unsigned long long)arg8;	// IMP=0x0010000000781881
@property(copy, nonatomic) INRequestRideIntentResponse *requestRideIntentResponse;
@property(copy, nonatomic) INGetRideStatusIntentResponse *getRideStatusIntentResponse;
@property(copy, nonatomic) INRideStatus *intentsRideStatus;
@property(readonly, nonatomic) NSArray *intentResponseFailures;
@property(readonly, nonatomic) NSArray *tippingOptions;
@property(readonly, nonatomic) NSDate *estimatedDropOffDate;
@property(readonly, nonatomic) NSNumber *pickupETAMinutes;
@property(readonly, nonatomic) NSDateComponents *scheduledPickupWindowStartDateComponents;
@property(readonly, nonatomic) CLPlacemark *dropoffLocation;
@property(readonly, nonatomic) CLPlacemark *pickupLocation;
@property(readonly, nonatomic) UIImage *vehicleImage;
@property(readonly, nonatomic) CLLocation *vehicleLocation;
- (id)_driverName;	// IMP=0x00100000008011bf
@property(readonly, nonatomic) UIImage *driverImage;
@property(readonly, nonatomic) NSString *driverPhoneNumber;
@property(readonly, nonatomic) NSString *contactCommandTitle;
@property(readonly, nonatomic) NSString *cancelCommandTitle;
@property(readonly, nonatomic) NSString *openInAppCommandTitle;
- (_Bool)_shouldShowPayment;	// IMP=0x0010000000800b8a
@property(readonly, nonatomic) NSString *cardRideCompletedActionButtonTitle;
@property(readonly, nonatomic) NSArray *cardActions;
- (id)_completedCardTertiaryTitle;	// IMP=0x0010000000800547
- (id)_completedCardSubtitle;	// IMP=0x00100000008003c6
- (id)_ongoingCardSubtitle;	// IMP=0x0010000000800259
- (id)_pickupCardSubtitle;	// IMP=0x0010000000800247
- (id)_approachingPickupCardSubtitle;	// IMP=0x0010000000800235
- (id)_confirmedCardSubtitle;	// IMP=0x0010000000800223
- (id)_scheduledCardSubtitle;	// IMP=0x0010000000800176
- (id)_receivedCardSubtitle;	// IMP=0x00100000007fffb2
@property(readonly, nonatomic) NSString *cardHeaderDestinationName;
@property(readonly, nonatomic) NSString *cardHeaderOriginName;
@property(readonly, nonatomic) NSArray *cardFareLineItems;
@property(readonly, nonatomic) NSString *cardDisclaimer;
@property(readonly, nonatomic) RidesharingSpecialPricingBadge *cardFormattedPriceRangeBadge;
@property(readonly, nonatomic) NSString *cardTertiaryTitle;
@property(readonly, nonatomic) NSString *cardSubtitle;
@property(readonly, nonatomic) NSString *cardTitle;
@property(readonly, nonatomic) UIImage *cardIcon;
@property(readonly, nonatomic) NSString *bannerAttributionTitle;
- (id)_completedTraySubtitle;	// IMP=0x00100000007ff1a2
- (id)_scheduledTraySubtitle;	// IMP=0x00100000007feb67
- (id)_completedTrayTitle;	// IMP=0x00100000007fe77b
- (id)_ongoingTrayTitle;	// IMP=0x00100000007fe4c0
- (id)_pickupTrayTitle;	// IMP=0x00100000007fe163
- (id)_approachingPickupTrayTitle;	// IMP=0x00100000007fdfda
- (id)_confirmedTrayTitle;	// IMP=0x00100000007fdc7d
- (id)_receivedTrayTitle;	// IMP=0x00100000007fdaf4
- (id)_scheduledTrayTitle;	// IMP=0x00100000007fd658
@property(readonly, nonatomic) NSString *traySubtitle;
- (id)_destinationAddress;	// IMP=0x00100000007fd36e
- (id)_pickupAddress;	// IMP=0x00100000007fd35c
@property(readonly, nonatomic) NSString *trayTitle;
- (id)_completedTemplatedViewSubtitle;	// IMP=0x00100000007fcef1
- (id)_ongoingTemplatedViewSubtitle;	// IMP=0x00100000007fcda5
- (id)_pickupTemplatedViewSubtitle;	// IMP=0x00100000007fcd93
- (id)_approachingPickupTemplatedViewSubtitle;	// IMP=0x00100000007fcd81
- (id)_confirmedTemplatedViewSubtitle;	// IMP=0x00100000007fca9d
- (id)_receivedTemplatedViewSubtitle;	// IMP=0x00100000007fca35
- (id)_completedTemplatedViewTitle;	// IMP=0x00100000007fc864
- (id)_ongoingTemplatedViewTitle;	// IMP=0x00100000007fc6f0
- (id)_pickupTemplatedViewTitle;	// IMP=0x00100000007fc393
- (id)_approachingPickupTemplatedViewTitle;	// IMP=0x00100000007fc20a
- (id)_confirmedTemplatedViewTitle;	// IMP=0x00100000007fbead
- (id)_receivedTemplatedViewTitle;	// IMP=0x00100000007fbd24
- (id)_minuteStringForSeconds:(double)arg1;	// IMP=0x00100000007fbcb6
- (id)timeFormatter;	// IMP=0x00100000007fbc26
@property(readonly, nonatomic) NSString *templatedViewSubtitle;
@property(readonly, nonatomic) NSString *templatedViewTitle;
@property(readonly, nonatomic) UIImage *templatedViewAppIcon;
@property(readonly, nonatomic) _Bool isScheduledRide;
- (_Bool)_feedbackRequired;	// IMP=0x00100000007fb96e
- (_Bool)_showFeedbackType:(unsigned long long)arg1;	// IMP=0x00100000007fb8e2
@property(readonly, nonatomic) _Bool shouldShowRatingOptions;
@property(readonly, nonatomic) _Bool shouldShowTippingOptions;
@property(readonly, nonatomic) _Bool shouldShowFeedbackControls;

@end

