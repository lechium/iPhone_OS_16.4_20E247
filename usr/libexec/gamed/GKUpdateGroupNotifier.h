//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKUpdateGroup, NSError, NSLock, NSMutableArray;

@interface GKUpdateGroupNotifier : NSObject
{
    GKUpdateGroup *_group;	// 8 = 0x8
    NSLock *_lock;	// 16 = 0x10
    NSMutableArray *_updateQueue;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000134b7a
@property(nonatomic) __weak GKUpdateGroup *group; // @synthesize group=_group;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableArray *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(retain) NSLock *lock; // @synthesize lock=_lock;
- (void)addUpdatesFromGroup:(id)arg1;	// IMP=0x0010000000134a04
- (void)addUpdate:(CDUnknownBlockType)arg1 error:(id)arg2;	// IMP=0x00100000001348a6
- (void)updateError:(id)arg1;	// IMP=0x001000000013482c
- (oneway void)release;	// IMP=0x0010000000134785
- (id)retain;	// IMP=0x00100000001346f3
- (void)dealloc;	// IMP=0x0010000000134697
- (id)init;	// IMP=0x001000000013463b

@end

