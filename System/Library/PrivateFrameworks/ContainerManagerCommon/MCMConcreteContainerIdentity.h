//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

__attribute__((visibility("hidden")))
@interface MCMConcreteContainerIdentity
{
    NSUUID *_uuid;	// 48 = 0x30
}

+ (id)concreteContainerIdentityFromPlist:(id)arg1 userIdentityCache:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x00600000000186e0
+ (id)containerIdentityWithUUID:(id)arg1 userIdentity:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 platform:(unsigned int)arg5 error:(unsigned long long *)arg6;	// IMP=0x0060000000018608
+ (id)containerIdentityWithUUID:(id)arg1 userIdentity:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 platform:(unsigned int)arg5 transient:(_Bool)arg6 error:(unsigned long long *)arg7;	// IMP=0x0060000000018527
- (void).cxx_destruct;	// IMP=0x00000000000180ff
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000018029
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000017f7a
- (_Bool)isEqualToConcreteContainerIdentity:(id)arg1;	// IMP=0x0000000000017edf
- (unsigned long long)hash;	// IMP=0x0000000000017e66
- (id)debugDescription;	// IMP=0x0000000000017ddc
- (id)description;	// IMP=0x0000000000017d52
- (id)containerIdentity;	// IMP=0x0000000000017c52
- (struct container_object_s *)createLibsystemContainerWithContainerPathIdentifier:(id)arg1 existed:(_Bool)arg2 error:(unsigned long long *)arg3;	// IMP=0x0000000000017a2f
- (id)plist;	// IMP=0x000000000001792a
- (id)initWithLibsystemContainer:(struct container_object_s *)arg1 defaultUserIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x0000000000017862
- (id)initWithVersion1PlistDictionary:(id)arg1 containerIdentity:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x000000000001761a
- (id)initWithContainerIdentity:(id)arg1 UUID:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x00000000000174e7
- (id)initWithPlist:(id)arg1 userIdentityCache:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x00000000000173a9
- (id)initWithUUID:(id)arg1 userIdentity:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 platform:(unsigned int)arg5 transient:(_Bool)arg6 error:(unsigned long long *)arg7;	// IMP=0x00000000000171c2
- (id)init;	// IMP=0x00000000000170db

@end

