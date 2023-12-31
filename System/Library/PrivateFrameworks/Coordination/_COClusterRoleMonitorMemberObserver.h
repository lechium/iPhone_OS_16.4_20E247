//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class COClusterMember, COClusterRole;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _COClusterRoleMonitorMemberObserver : NSObject
{
    COClusterMember *_member;	// 8 = 0x8
    id _cluster;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    CDUnknownBlockType _block;	// 32 = 0x20
    COClusterRole *_lastValue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002f889
@property(retain, nonatomic) COClusterRole *lastValue; // @synthesize lastValue=_lastValue;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) id cluster; // @synthesize cluster=_cluster;
@property(readonly, nonatomic) COClusterMember *member; // @synthesize member=_member;
- (void)notify:(id)arg1;	// IMP=0x000000000002f63d
- (id)description;	// IMP=0x000000000002f574
- (id)initWithMember:(id)arg1 inCluster:(id)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x000000000002f45d

@end

