//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BRCMinHeap, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRCThrottle
{
    NSMutableDictionary *_retryCounters;	// 56 = 0x38
    BRCMinHeap *_retryHeap;	// 64 = 0x40
}

+ (long long)throttleHashBytes:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x006000000008aad8
+ (long long)throttleHashFormat:(id)arg1;	// IMP=0x006000000008a5c7
- (void).cxx_destruct;	// IMP=0x000000000008ab68
- (void)reset;	// IMP=0x000000000008a340
- (long long)nsecsToNextRetry:(long long)arg1 now:(long long)arg2 increment:(_Bool)arg3;	// IMP=0x000000000008a013
- (void)incrementRetryCount:(long long)arg1;	// IMP=0x0000000000089edd
- (void)_cleanupStaleCounters:(long long)arg1;	// IMP=0x0000000000089d68
- (id)initWithName:(id)arg1 andParameters:(id)arg2;	// IMP=0x0000000000089c4f

@end
