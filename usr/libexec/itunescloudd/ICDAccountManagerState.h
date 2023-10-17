//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICConnectionConfiguration, NSSet, NSString;

@interface ICDAccountManagerState : NSObject
{
    NSSet *_supportedConfigurations;	// 8 = 0x8
    NSSet *_supportedConfigurationsDSIDs;	// 16 = 0x10
    ICConnectionConfiguration *_activeConfiguration;	// 24 = 0x18
    NSString *_activeConfigurationDSID;	// 32 = 0x20
}

+ (id)stateForAccounts:(id)arg1 baseConfiguration:(id)arg2;	// IMP=0x002000000006f456
+ (id)restoredStatedWithFallbackAccounts:(id)arg1;	// IMP=0x001000000006f0e9
- (void).cxx_destruct;	// IMP=0x002000000006ef8a
@property(copy, nonatomic) NSString *activeConfigurationDSID; // @synthesize activeConfigurationDSID=_activeConfigurationDSID;
@property(copy, nonatomic) ICConnectionConfiguration *activeConfiguration; // @synthesize activeConfiguration=_activeConfiguration;
@property(copy, nonatomic) NSSet *supportedConfigurationsDSIDs; // @synthesize supportedConfigurationsDSIDs=_supportedConfigurationsDSIDs;
@property(copy, nonatomic) NSSet *supportedConfigurations; // @synthesize supportedConfigurations=_supportedConfigurations;
- (id)_configurationForAccount:(id)arg1 baseConfiguration:(id)arg2;	// IMP=0x001000000006ee69
- (id)_userIdentityForAccount:(id)arg1;	// IMP=0x001000000006edb5
- (void)_updateSupportedConfigurationsDSIDs;	// IMP=0x001000000006ec8a
- (void)_updateSupportedConfigurationsWithAccounts:(id)arg1 activeConfiguration:(id)arg2;	// IMP=0x001000000006e98a
- (id)_initWithAccounts:(id)arg1 activeAccount:(id)arg2 baseConfiguration:(id)arg3;	// IMP=0x001000000006e841
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006e6da
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000006e56f
- (id)description;	// IMP=0x001000000006e312
- (void)save;	// IMP=0x001000000006e198

@end
