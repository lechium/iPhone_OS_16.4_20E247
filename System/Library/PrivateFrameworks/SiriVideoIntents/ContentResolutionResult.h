//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObjectResolutionResult.h>

@interface ContentResolutionResult : INObjectResolutionResult
{
}

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;	// IMP=0x00600000001950b0
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;	// IMP=0x0060000000195030
+ (id)successWithResolvedObject:(id)arg1;	// IMP=0x0060000000194fb0
+ (id)confirmationRequiredWithContentToConfirm:(id)arg1;	// IMP=0x0060000000194f20
+ (id)disambiguationWithContentsToDisambiguate:(id)arg1;	// IMP=0x0060000000194ec0
+ (id)successWithResolvedContent:(id)arg1;	// IMP=0x0060000000194e70
- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;	// IMP=0x0000000000195220

@end
