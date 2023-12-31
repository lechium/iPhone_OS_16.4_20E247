//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCAccountSession, BRCAppLibrary, BRCItemID, NSMutableIndexSet, brc_task_tracker;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface BRCTreeEnumerator : NSObject
{
    BRCAccountSession *_session;	// 8 = 0x8
    CDUnknownBlockType _handler;	// 16 = 0x10
    BRCItemID *_parentID;	// 24 = 0x18
    BRCAppLibrary *_appLibrary;	// 32 = 0x20
    unsigned long long _rowID;	// 40 = 0x28
    NSMutableIndexSet *_seen;	// 48 = 0x30
    NSMutableIndexSet *_toVisit;	// 56 = 0x38
    brc_task_tracker *_tracker;	// 64 = 0x40
    NSObject<OS_dispatch_group> *_group;	// 72 = 0x48
    id _strongSelf;	// 80 = 0x50
    _Bool _isCancelled;	// 88 = 0x58
    _Bool _isRecursive;	// 89 = 0x59
    CDUnknownBlockType _completionHandler;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000023b743
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_iterate:(unsigned long long)arg1;	// IMP=0x000000000023b6a4
- (unsigned long long)__iterate:(unsigned long long)arg1;	// IMP=0x000000000023b489
- (_Bool)_visitNewParent;	// IMP=0x000000000023b35e
- (void)_scheduleAsync;	// IMP=0x000000000023b012
- (_Bool)finishIfCancelled;	// IMP=0x000000000023afa1
- (void)enumerateBelow:(id)arg1 appLibrary:(id)arg2 recursively:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000000023ae5c
- (void)_doneWithError:(id)arg1;	// IMP=0x000000000023ad96
- (void)cancel;	// IMP=0x000000000023ad8c
- (id)initWithSession:(id)arg1 group:(id)arg2;	// IMP=0x000000000023ad2d
- (id)initWithSession:(id)arg1 tracker:(id)arg2;	// IMP=0x000000000023acce
- (id)initWithSession:(id)arg1;	// IMP=0x000000000023ac57

@end

