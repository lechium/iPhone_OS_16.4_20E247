//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;
@protocol RideBookingRideStatusObserverProxyDelegate;

@interface RideBookingRideStatusObserverProxy : NSObject
{
    MISSING_TYPE *_delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000461a48
@property(nonatomic) __weak id <RideBookingRideStatusObserverProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateAnalyticsWithRideStatus:(id)arg1 feedbackError:(id)arg2;	// IMP=0x0010000000461877
- (void)_updateAnalyticsWithRideStatus:(id)arg1 cancelError:(id)arg2 handling:(_Bool)arg3;	// IMP=0x00100000004616a1
- (void)_updateAnalyticsWithRideStatus:(id)arg1;	// IMP=0x0010000000461414
- (void)rideStatusMapDidChange:(id)arg1;	// IMP=0x001000000046111b
- (void)cancelRideWithRideStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000460d14
- (void)checkIfCanCancelRideWithRideStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004608c0
- (void)sendFeedbackForRideStatus:(id)arg1 feedbackRating:(id)arg2 feedbackTip:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000460479
- (void)updateRideStatusMap;	// IMP=0x001000000046040b
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000460363

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
