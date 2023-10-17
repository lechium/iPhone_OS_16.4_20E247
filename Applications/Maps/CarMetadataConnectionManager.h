//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CarMetadataNavigationListener, NSString;

@interface CarMetadataConnectionManager : NSObject
{
    CarMetadataNavigationListener *_navigationListener;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000004f6e84
- (void)navigationListener:(id)arg1 didUpdateLaneGuidances:(id)arg2;	// IMP=0x00100000004f6e7e
- (void)navigationListener:(id)arg1 didUpdateManeuvers:(id)arg2;	// IMP=0x00100000004f6e78
- (void)navigationListener:(id)arg1 didUpdateRouteGuidance:(id)arg2;	// IMP=0x00100000004f6e72
- (id)init;	// IMP=0x00100000004f6e09

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
