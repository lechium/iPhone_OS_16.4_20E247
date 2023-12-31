//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSError, NSLock, NSMutableArray, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface GKUpdateGroup : NSObject
{
    NSObject<OS_dispatch_queue> *_targetQueue;	// 8 = 0x8
    NSMutableArray *_notifiers;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_dispatchGroup;	// 24 = 0x18
    NSLock *_lock;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
}

+ (id)updateGroupWithName:(id)arg1 taregetQueue:(id)arg2;	// IMP=0x0040000000134c32
+ (id)updateGroupForTargetQueue:(id)arg1;	// IMP=0x0010000000134bf9
+ (id)updateGroupWithName:(id)arg1;	// IMP=0x0010000000134bbb
+ (id)updateGroup;	// IMP=0x0010000000134b88
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableArray *notifiers; // @synthesize notifiers=_notifiers;
@property(retain) NSLock *lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) long long updateCount;
- (void)cancelUpdates;	// IMP=0x00100000001352e0
- (void)applyUpdates;	// IMP=0x0010000000134fcc
- (void)wait;	// IMP=0x0010000000134fb7
- (void)joinAndApplyUpdates;	// IMP=0x0010000000134f98
- (MISSING_TYPE *)joinApplyUpdatesAndDo: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000134f02
- (void)join:(CDUnknownBlockType)arg1;	// IMP=0x0010000000134e7b
- (void)perform:(CDUnknownBlockType)arg1;	// IMP=0x0010000000134e5f
- (void)performOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0010000000134d82
- (void)dealloc;	// IMP=0x0010000000134d18
- (id)initWithName:(id)arg1 targetQueue:(id)arg2;	// IMP=0x0010000000134c6e

@end

