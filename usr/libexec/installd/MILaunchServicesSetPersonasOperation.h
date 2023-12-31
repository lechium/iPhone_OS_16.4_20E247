//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;

@interface MILaunchServicesSetPersonasOperation
{
    NSString *_bundleID;	// 8 = 0x8
    unsigned long long _domain;	// 16 = 0x10
    NSSet *_personaUniqueStrings;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000047b10
- (void).cxx_destruct;	// IMP=0x00200000000482c7
@property(readonly, nonatomic) NSSet *personaUniqueStrings; // @synthesize personaUniqueStrings=_personaUniqueStrings;
@property(readonly, nonatomic) unsigned long long domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)description;	// IMP=0x001000000004810f
- (unsigned long long)hash;	// IMP=0x0010000000048044
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000047eb9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000047d99
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000047b18
- (id)initWithBundleID:(id)arg1 domain:(unsigned long long)arg2 personas:(id)arg3 registrationUUID:(id)arg4 serialNumber:(unsigned long long)arg5;	// IMP=0x0010000000047a47

@end

