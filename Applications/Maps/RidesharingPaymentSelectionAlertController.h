//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAlertController.h>

@class RideBookingRequestRideOptionProxy, RideBookingRequestRideStatus;

@interface RidesharingPaymentSelectionAlertController : UIAlertController
{
    RideBookingRequestRideStatus *_requestRideStatus;	// 8 = 0x8
    RideBookingRequestRideOptionProxy *_requestRideOptionProxy;	// 16 = 0x10
}

+ (id)ridesharingPaymentSelectionAlertControllerWithRequestRideStatus:(id)arg1 requestRideOptionProxy:(id)arg2;	// IMP=0x00400000007c86e3
- (void).cxx_destruct;	// IMP=0x00200000007c9354
@property(nonatomic) __weak RideBookingRequestRideOptionProxy *requestRideOptionProxy; // @synthesize requestRideOptionProxy=_requestRideOptionProxy;
@property(retain, nonatomic) RideBookingRequestRideStatus *requestRideStatus; // @synthesize requestRideStatus=_requestRideStatus;

@end

