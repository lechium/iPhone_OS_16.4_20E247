//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNNavigationService, NSString;
@protocol RouteMarkerFormatterETADelegate;

@interface RouteMarkerFormatterETA : NSObject
{
    unsigned long long _similarTimeDelta;	// 8 = 0x8
    MNNavigationService *_navigationService;	// 16 = 0x10
    id <RouteMarkerFormatterETADelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000005e0606
@property(nonatomic) __weak id <RouteMarkerFormatterETADelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MNNavigationService *navigationService; // @synthesize navigationService=_navigationService;
- (void)navigationService:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3 batteryChargeInfo:(id)arg4;	// IMP=0x00100000005e04d0
- (id)_comparisonInfoForRouteWithRemainingMinutes:(unsigned long long)arg1 comparedToRouteWithRemainingMinutes:(unsigned long long)arg2 tollCurrency:(unsigned char)arg3 styleAttributes:(id)arg4;	// IMP=0x00100000005e02c2
- (id)markerInfosForLegs:(id)arg1;	// IMP=0x00100000005e0032
- (id)markerInfoForRoute:(id)arg1;	// IMP=0x00100000005dfdcc
- (void)dealloc;	// IMP=0x00100000005dfd87
- (id)initWithNavigationService:(id)arg1;	// IMP=0x00100000005dfcf2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

