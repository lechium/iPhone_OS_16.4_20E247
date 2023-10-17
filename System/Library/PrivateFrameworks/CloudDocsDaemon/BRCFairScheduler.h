//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_source, OS_dispatch_workloop;

__attribute__((visibility("hidden")))
@interface BRCFairScheduler : NSObject
{
    NSObject<OS_dispatch_source> *_source;	// 8 = 0x8
    NSObject<OS_dispatch_workloop> *_workloop;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    unsigned long long _maxRegistedSourceBit;	// 32 = 0x20
    unsigned long long _lastVisitedBit;	// 40 = 0x28
    NSMutableDictionary *_sourceForBitIndex;	// 48 = 0x30
    _Bool _resumed;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000277baa
- (void)dealloc;	// IMP=0x0000000000277b6a
- (void)close;	// IMP=0x0000000000277b09
- (void)cancel;	// IMP=0x0000000000277ad8
- (void)suspend;	// IMP=0x0000000000277abb
- (void)resume;	// IMP=0x0000000000277a9e
- (void)schedule;	// IMP=0x00000000002778c9
- (void)signalSourceForBitIndex:(unsigned long long)arg1;	// IMP=0x00000000002778ae
- (id)sourceForBitIndex:(unsigned long long)arg1;	// IMP=0x000000000027780d
- (void)unregisterSources;	// IMP=0x00000000002777c9
- (void)addSource:(id)arg1;	// IMP=0x0000000000277586
@property(readonly, nonatomic) NSObject<OS_dispatch_workloop> *workloop;
- (id)initWithWorkloop:(id)arg1 name:(id)arg2;	// IMP=0x0000000000277368

@end
