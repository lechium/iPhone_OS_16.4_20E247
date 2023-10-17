//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityRequirementCapabilityIsSupportedOnAnyWatch
{
    _Bool _supportedOnLocalDevice;	// 8 = 0x8
    NSUUID *_nanoRegistryCapability;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000d58eb
+ (id)requirementIdentifier;	// IMP=0x00100000000d5382
- (void).cxx_destruct;	// IMP=0x00000000000d5a3e
@property(readonly, nonatomic, getter=isSupportedOnLocalDevice) _Bool supportedOnLocalDevice; // @synthesize supportedOnLocalDevice=_supportedOnLocalDevice;
@property(readonly, copy, nonatomic) NSUUID *nanoRegistryCapability; // @synthesize nanoRegistryCapability=_nanoRegistryCapability;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d5973
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d58f3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d58e0
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d57b6
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;	// IMP=0x00000000000d5723
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;	// IMP=0x00000000000d55ed
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000d55b8
- (_Bool)_isSatisfiedWithDataSource:(id)arg1;	// IMP=0x00000000000d5454
@property(readonly, nonatomic) NSString *requirementDescription;
- (id)initWithNanoRegistryCapability:(id)arg1 supportedOnLocalDevice:(_Bool)arg2;	// IMP=0x00000000000d52f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
