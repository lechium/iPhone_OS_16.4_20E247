//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturb/DNDModeAssertionInvalidation.h>

@class NSString;

@interface DNDModeAssertionInvalidation (Resolution)
+ (id)predicateForModeAssertionInvalidationsWithAssertionClientIdentifiers:(id)arg1;	// IMP=0x00100000000c8069
- (id)resolveWithExpectedRemoteDeviceIdentifier:(id)arg1 localDeviceIdentifier:(id)arg2 remoteDeviceIdentifier:(id)arg3;	// IMP=0x001000000000909c
@property(readonly, nonatomic) _Bool isUserInvalidated;
@property(readonly, nonatomic) _Bool isInternalScheduled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
