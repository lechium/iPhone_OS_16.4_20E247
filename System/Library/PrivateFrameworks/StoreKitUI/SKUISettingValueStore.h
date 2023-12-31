//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SKUISettingValueStore : NSObject
{
    NSObject<OS_dispatch_queue> *_mutexQueue;	// 8 = 0x8
    NSMutableDictionary *_originalValues;	// 16 = 0x10
    NSMutableDictionary *_modifiedValues;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000f8a71
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x00000000000f8a69
- (id)valueForKeyPath:(id)arg1;	// IMP=0x00000000000f8a61
- (id)valueForKey:(id)arg1;	// IMP=0x00000000000f8a59
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x00000000000f8a53
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x00000000000f8a4d
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000f8a47
- (void)setOriginalValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000f891f
- (void)setModifiedValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000f87f7
- (id)resolvedValueForKey:(id)arg1;	// IMP=0x00000000000f865f
- (id)originalValueForKey:(id)arg1;	// IMP=0x00000000000f8512
- (id)modifiedKeys;	// IMP=0x00000000000f83e6
- (_Bool)hasChanges;	// IMP=0x00000000000f833d
- (void)discardChanges;	// IMP=0x00000000000f82d7
- (void)commitChanges;	// IMP=0x00000000000f81cc
- (void)clearValueForKey:(id)arg1;	// IMP=0x00000000000f80ed
- (id)init;	// IMP=0x00000000000f8095

@end

