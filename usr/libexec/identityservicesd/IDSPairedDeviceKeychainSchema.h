//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSPairedDeviceKeychainSchema : NSObject
{
}

- (id)_migrateFromSinglePairedDeviceToMultipleWithKeychainDictionary:(id)arg1;	// IMP=0x00400000001cc9e0
- (id)migrateKeychainDictionary:(id)arg1;	// IMP=0x00100000001cc820
- (unsigned long long)_migrationTypeForKeychainDictionary:(id)arg1;	// IMP=0x00100000001cc630
- (_Bool)isMigrationRequiredForKeychainDictionary:(id)arg1;	// IMP=0x00100000001cc5b0
- (id)_propertyDictionariesFromPairedDevices:(id)arg1;	// IMP=0x00100000001cc2b0
- (id)keychainDictionaryWithPairedDevices:(id)arg1;	// IMP=0x00100000001cc1a0

@end

