//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameControllerFoundation/GCGenericDeviceModel.h>

@class NSString;

@interface GCGenericDeviceModel (DeviceDelegate)
+ (id)defaultSymbolNameForElement:(id)arg1;	// IMP=0x00100000000b753d
+ (id)defaultLocalizedNameForElement:(id)arg1;	// IMP=0x00100000000b7272
+ (_Bool)elementsMakeValidExtendedGamepad:(id)arg1;	// IMP=0x00100000000b6e5c
- (id)logicalDevice:(id)arg1 makeControllerPhysicalInputProfileWithIdentifier:(id)arg2;	// IMP=0x00100000000b6e44
- (id)logicalDevice:(id)arg1 makeControllerPhysicalInputProfileDescriptionWithIdentifier:(id)arg2 bindings:(id)arg3;	// IMP=0x00100000000b673b
- (id)logicalDeviceControllerProductCategory:(id)arg1;	// IMP=0x00100000000b6729
- (id)physicalDeviceGetHapticCapabilityGraph:(id)arg1;	// IMP=0x00100000000b6580
- (id)physicalDeviceGetHapticCapabilities:(id)arg1;	// IMP=0x00100000000b6441

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
