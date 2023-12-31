//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

@interface CRVehicleStore : NSObject
{
    NSSet *_cachedVehicles;	// 8 = 0x8
}

+ (void)postPairingsDidChangeNotification;	// IMP=0x0040000000006bd0
+ (void)_cleanupPreferencesForIncompleteVehicleIdentifier:(id)arg1 name:(id)arg2;	// IMP=0x0010000000006a84
+ (_Bool)_removePreferencesPairingForVehicleIdentifier:(id)arg1;	// IMP=0x00100000000069d5
+ (_Bool)_removePreferencesPairingForVehicle:(id)arg1;	// IMP=0x0010000000006903
+ (_Bool)_addPreferencesPairingForVehicle:(id)arg1;	// IMP=0x0010000000006774
+ (id)_allPreferencesPairings;	// IMP=0x0010000000006730
+ (void)_applyPreferencesAttributes:(id)arg1 toVehicle:(id)arg2;	// IMP=0x00100000000061f2
+ (id)_preferencesAttributesForVehicle:(id)arg1;	// IMP=0x0010000000005a41
+ (_Bool)removePayloadForVehicleWithIdentifier:(id)arg1;	// IMP=0x0010000000005a2a
+ (_Bool)setPayload:(id)arg1 forVehicleWithIdentifier:(id)arg2;	// IMP=0x001000000000582e
+ (id)payloadForVehicleWithIdentifier:(id)arg1;	// IMP=0x00100000000057ab
+ (id)_allUnpairedVehicleStorage;	// IMP=0x0010000000005767
+ (_Bool)_removeKeychainPairingForVehicle:(id)arg1;	// IMP=0x0010000000005616
+ (_Bool)_addKeychainPairingForVehicle:(id)arg1;	// IMP=0x00100000000053cd
+ (id)_keychainItemAttributesForAllVehicles;	// IMP=0x0010000000005217
+ (id)_keychainAttributesMatchingQuery:(id)arg1;	// IMP=0x0010000000005083
+ (id)_updateKeychainAttributesForVehicle:(id)arg1;	// IMP=0x001000000000500b
+ (id)_creationKeychainAttributesForVehicle:(id)arg1;	// IMP=0x0010000000004fbb
+ (id)_allKeychainAttributesForVehicle:(id)arg1;	// IMP=0x0010000000004f50
+ (void)_addKeychainAttributesForVehicle:(id)arg1 toDictionary:(id)arg2;	// IMP=0x0010000000004da4
+ (id)_identifyingKeychainAttributesForVehicle:(id)arg1;	// IMP=0x0010000000004d01
+ (id)_itemClassKeychainAttributes;	// IMP=0x0010000000004c6a
- (void).cxx_destruct;	// IMP=0x0020000000007eed
@property(copy, nonatomic) NSSet *cachedVehicles; // @synthesize cachedVehicles=_cachedVehicles;
- (id)vehicleForCertificateSerial:(id)arg1;	// IMP=0x0010000000007cbb
- (id)vehicleForBluetoothAddress:(id)arg1;	// IMP=0x0010000000007aa2
- (void)handleAvailabilityDidChange:(id)arg1;	// IMP=0x00100000000079bc
- (id)allStoredVehicles;	// IMP=0x0010000000007219
- (_Bool)removeVehicle:(id)arg1;	// IMP=0x0010000000007114
- (id)saveVehicle:(id)arg1 withMergePolicy:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006db5
- (id)saveVehicle:(id)arg1;	// IMP=0x0010000000006da1
- (void)_invalidateCachedVehicles;	// IMP=0x0010000000006d8d
- (void)dealloc;	// IMP=0x0010000000006d18
- (id)init;	// IMP=0x0010000000006c7a

@end

