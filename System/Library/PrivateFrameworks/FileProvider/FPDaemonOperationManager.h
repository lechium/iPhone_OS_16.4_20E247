//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDaemonOperationManager : NSObject
{
    _Bool _started;	// 8 = 0x8
    NSMutableSet *_localOperationIDs;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    int _notifToken;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00600000000cb95c
- (void).cxx_destruct;	// IMP=0x00000000000cc42e
- (void)_enumerateNewDaemonOperationsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cbf9d
- (void)_updateDaemonOperations;	// IMP=0x00000000000cbf24
- (void)_receiveLongLivedOperation:(id)arg1 info:(id)arg2;	// IMP=0x00000000000cbdc1
- (id)generateLocalOperationID;	// IMP=0x00000000000cbc55
- (void)wakeUp;	// IMP=0x00000000000cbbe4
- (void)dealloc;	// IMP=0x00000000000cbbab
- (id)init;	// IMP=0x00000000000cb9b1

@end

