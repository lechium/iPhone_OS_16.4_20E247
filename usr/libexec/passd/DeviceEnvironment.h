//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DeviceEnvironment
{
}

+ (id)_predicateForDeviceEnvironmentWithClientIdentifier:(id)arg1;	// IMP=0x00400000003486e7
+ (id)_propertySettersForDeviceEnvironment;	// IMP=0x0010000000348631
+ (id)insertOrUpdateEnvironment:(id)arg1 forClient:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003482cd
+ (id)environementForClient:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000034801a
+ (id)databaseTable;	// IMP=0x001000000034800d
- (id)initWithClientIdentifier:(id)arg1 countryCode:(id)arg2 deviceLanguage:(id)arg3 database:(id)arg4;	// IMP=0x0040000000348529

@end

