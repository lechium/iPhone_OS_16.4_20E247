//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObjectResolutionResult.h>

@interface DeviceResolutionResult : INObjectResolutionResult
{
}

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;	// IMP=0x0060000000218c90
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;	// IMP=0x0060000000218c50
+ (id)successWithResolvedObject:(id)arg1;	// IMP=0x0060000000218c10
+ (id)confirmationRequiredWithDeviceToConfirm:(id)arg1;	// IMP=0x0060000000218bc0
+ (id)disambiguationWithDevicesToDisambiguate:(id)arg1;	// IMP=0x0060000000218b60
+ (id)successWithResolvedDevice:(id)arg1;	// IMP=0x0060000000218b10
- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;	// IMP=0x0000000000218e00

@end

