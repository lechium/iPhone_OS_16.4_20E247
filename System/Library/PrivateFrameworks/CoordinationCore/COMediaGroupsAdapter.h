//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class COHomeKitAdapter, HMAccessory, MGGroupQuery, NSArray;

__attribute__((visibility("hidden")))
@interface COMediaGroupsAdapter : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    COHomeKitAdapter *_adapter;	// 16 = 0x10
    HMAccessory *_accessory;	// 24 = 0x18
    NSArray *_groups;	// 32 = 0x20
    NSArray *_currentActivityGroups;	// 40 = 0x28
    MGGroupQuery *_activityGroupsQuery;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000006828
@property(retain, nonatomic) MGGroupQuery *activityGroupsQuery; // @synthesize activityGroupsQuery=_activityGroupsQuery;
@property(copy, nonatomic) NSArray *currentActivityGroups; // @synthesize currentActivityGroups=_currentActivityGroups;
@property(copy, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) COHomeKitAdapter *adapter; // @synthesize adapter=_adapter;
- (void)_prepareActivityGroupsQuery_unsafe;	// IMP=0x000000000000641b
- (void)_didUpdateActivityGroups:(id)arg1;	// IMP=0x000000000000628b
- (void)_prepareGroupQuery_unsafe;	// IMP=0x0000000000006147
- (_Bool)_prepareAccessory_unsafe;	// IMP=0x0000000000005fce
- (void)_bootstrap;	// IMP=0x0000000000005fc8
- (void)_significantHomeChange:(id)arg1;	// IMP=0x0000000000005fb6
- (void)_withLock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005f79
- (id)initWithHomeKitAdapter:(id)arg1;	// IMP=0x0000000000005df3

@end

