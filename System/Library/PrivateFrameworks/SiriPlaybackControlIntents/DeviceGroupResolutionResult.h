//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObjectResolutionResult.h>

@interface DeviceGroupResolutionResult : INObjectResolutionResult
{
}

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;	// IMP=0x006000000021d720
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;	// IMP=0x006000000021d6e0
+ (id)successWithResolvedObject:(id)arg1;	// IMP=0x006000000021d6a0
+ (id)confirmationRequiredWithDeviceGroupToConfirm:(id)arg1;	// IMP=0x006000000021d650
+ (id)disambiguationWithDeviceGroupsToDisambiguate:(id)arg1;	// IMP=0x006000000021d5f0
+ (id)successWithResolvedDeviceGroup:(id)arg1;	// IMP=0x006000000021d5a0
- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;	// IMP=0x000000000021d890

@end

