//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface COMeshNodeStateTrackerSet : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSDictionary *_trackers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000543a7
@property(copy, nonatomic) NSDictionary *trackers; // @synthesize trackers=_trackers;
- (void)enumerateNodeStateTrackersOfStatus:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000542a5
- (void)enumerateNodeStateTrackersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000541bd
- (void)setNodeDormant:(id)arg1 withState:(unsigned long long)arg2 error:(id)arg3;	// IMP=0x0000000000053f88
- (id)nodeStateTrackersWithStatus:(long long)arg1;	// IMP=0x0000000000053e4e
- (void)removeAllNodeStateTrackers;	// IMP=0x0000000000053db6
- (void)removeNodeStateTrackerForNode:(id)arg1;	// IMP=0x0000000000053c9c
- (id)nodeStateTrackerForNode:(id)arg1;	// IMP=0x0000000000053aee
- (void)addNodeStateTracker:(id)arg1;	// IMP=0x0000000000053987
- (void)_withLock:(CDUnknownBlockType)arg1;	// IMP=0x000000000005394a
- (id)description;	// IMP=0x0000000000053885
- (id)init;	// IMP=0x000000000005382f

@end

