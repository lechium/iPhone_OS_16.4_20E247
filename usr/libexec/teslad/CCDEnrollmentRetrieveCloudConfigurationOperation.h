//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CCDEnrollmentRetrieveCloudConfigurationOperation
{
}

- (void)_setLockdownCloudConfigAvailableKeyIfNeededWithError:(id)arg1;	// IMP=0x00400000000057be
- (void)_setEnrolledDeviceRequirementsIfNeededForCloudConfigurationDictionary:(id)arg1;	// IMP=0x001000000000569a
- (_Bool)_convertCloudConfigDictionary:(id)arg1 toManagedConfiguration:(id *)arg2;	// IMP=0x00100000000055e4
- (id)responseWithResponseData:(id)arg1 contentType:(id)arg2 outError:(id *)arg3;	// IMP=0x0010000000005071
- (id)errorForStatusCode:(long long)arg1 responseData:(id)arg2;	// IMP=0x0010000000004f84

@end
