//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSUAssertionHandler : NSObject
{
}

+ (int)_atomicIncrementAssertCount;	// IMP=0x0080000000248ab3
+ (void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 isFatal:(_Bool)arg4 description:(const char *)arg5;	// IMP=0x0080000000248aad
+ (void)simulateCrashWithMessage:(id)arg1;	// IMP=0x0080000000248aa7
+ (void)logBacktraceThrottled;	// IMP=0x0080000000248aa1
+ (void)logBacktraceWithCallStackSymbols:(id)arg1;	// IMP=0x0080000000248a3d
+ (void)logBacktrace;	// IMP=0x0080000000248948
+ (id)p_performBlockIgnoringAssertions:(CDUnknownBlockType)arg1 onlyFatal:(_Bool)arg2;	// IMP=0x00800000002486c6
+ (id)performBlockIgnoringFatalAssertions:(CDUnknownBlockType)arg1;	// IMP=0x00800000002486af
+ (id)performBlockIgnoringAssertions:(CDUnknownBlockType)arg1;	// IMP=0x008000000024869b

@end
