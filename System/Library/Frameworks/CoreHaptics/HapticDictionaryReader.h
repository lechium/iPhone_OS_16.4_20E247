//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HapticDictionaryReader : NSObject
{
    unsigned long long _urlIndex;	// 8 = 0x8
}

- (id)parseParamCurveControlPoints:(id)arg1;	// IMP=0x000000000001cce1
- (id)parseParamCurve:(id)arg1;	// IMP=0x000000000001c7d7
- (id)parseParam:(id)arg1;	// IMP=0x000000000001c2e0
- (id)parseEventParams:(id)arg1;	// IMP=0x000000000001be5a
- (id)parseEvent:(id)arg1 withBaseURL:(id)arg2;	// IMP=0x000000000001b347
- (_Bool)parseEventsAndParameters:(id)arg1 withBaseURL:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000001a969
- (id)scanForEmbeddedResources:(id)arg1;	// IMP=0x000000000001a314
- (id)parseConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019b70
- (id)readAndVerifyVersion:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000197c5

@end

