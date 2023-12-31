//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNNavigationService, NSString, PlatformController;
@protocol NavigationRouteHistoryInfoProviding, NavigationRouteInterrupting;

@interface NavigationRouteDetourer : NSObject
{
    MNNavigationService *_navigationService;	// 8 = 0x8
    PlatformController *_platformController;	// 16 = 0x10
    id <NavigationRouteHistoryInfoProviding> _routeInfoProvider;	// 24 = 0x18
    id <NavigationRouteInterrupting> _routeInterrupter;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000004ec817
@property(readonly, nonatomic) id <NavigationRouteInterrupting> routeInterrupter; // @synthesize routeInterrupter=_routeInterrupter;
@property(readonly, nonatomic) id <NavigationRouteHistoryInfoProviding> routeInfoProvider; // @synthesize routeInfoProvider=_routeInfoProvider;
@property(readonly, nonatomic) __weak PlatformController *platformController; // @synthesize platformController=_platformController;
@property(readonly, nonatomic) MNNavigationService *navigationService; // @synthesize navigationService=_navigationService;
- (void)detourRouteToMapItem:(id)arg1;	// IMP=0x00100000004ec483
- (id)initWithNavigationService:(id)arg1 platformController:(id)arg2 routeInfoProvider:(id)arg3 routeInterrupter:(id)arg4;	// IMP=0x00100000004ec3a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

