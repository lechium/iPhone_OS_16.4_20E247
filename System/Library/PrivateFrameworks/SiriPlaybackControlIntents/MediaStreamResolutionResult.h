//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObjectResolutionResult.h>

@interface MediaStreamResolutionResult : INObjectResolutionResult
{
}

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;	// IMP=0x006000000021e270
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;	// IMP=0x006000000021e230
+ (id)successWithResolvedObject:(id)arg1;	// IMP=0x006000000021e1f0
+ (id)confirmationRequiredWithMediaStreamToConfirm:(id)arg1;	// IMP=0x006000000021e1a0
+ (id)disambiguationWithMediaStreamsToDisambiguate:(id)arg1;	// IMP=0x006000000021e140
+ (id)successWithResolvedMediaStream:(id)arg1;	// IMP=0x006000000021e0f0
- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;	// IMP=0x000000000021e3e0

@end

