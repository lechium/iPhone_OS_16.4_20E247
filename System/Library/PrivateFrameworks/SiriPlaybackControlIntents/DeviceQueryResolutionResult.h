//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObjectResolutionResult.h>

@interface DeviceQueryResolutionResult : INObjectResolutionResult
{
}

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;	// IMP=0x006000000021bdc0
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;	// IMP=0x006000000021bd80
+ (id)successWithResolvedObject:(id)arg1;	// IMP=0x006000000021bd40
+ (id)confirmationRequiredWithDeviceQueryToConfirm:(id)arg1;	// IMP=0x006000000021bcf0
+ (id)disambiguationWithDeviceQuerysToDisambiguate:(id)arg1;	// IMP=0x006000000021bc40
+ (id)successWithResolvedDeviceQuery:(id)arg1;	// IMP=0x006000000021bb00
- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;	// IMP=0x000000000021bf30

@end

