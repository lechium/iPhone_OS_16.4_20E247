//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VCEmulatedNetworkElement : NSObject
{
    NSDictionary *_policies;	// 8 = 0x8
    struct opaqueCMSimpleQueue *_networkElementQueue;	// 16 = 0x10
    CDUnknownBlockType _processCompleteHandler;	// 24 = 0x18
}

@property(copy, nonatomic) CDUnknownBlockType processCompleteHandler; // @synthesize processCompleteHandler=_processCompleteHandler;
- (void)connectFrom:(id)arg1;	// IMP=0x00000000000dcff9
- (void)connectTo:(id)arg1;	// IMP=0x00000000000dcf1b
- (void)runUntilTime:(double)arg1;	// IMP=0x00000000000dcec1
- (int)write:(id)arg1;	// IMP=0x00000000000dce32
- (void)drainAndReleasePackets;	// IMP=0x00000000000dcdee
- (void)dealloc;	// IMP=0x00000000000dcd5e
- (id)initWithPolicies:(id)arg1;	// IMP=0x00000000000dcc79

@end
