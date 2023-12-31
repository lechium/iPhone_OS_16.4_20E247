//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICConnectionConfiguration, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface ICContentTastePendingChangesCoordinator : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSString *_pendingChangesPath;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    ICConnectionConfiguration *_configuration;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000006861d
- (_Bool)_savePendingChanges:(id)arg1;	// IMP=0x00100000000683f9
- (id)_pendingChanges;	// IMP=0x0010000000067ff9
- (void)_removePendingChangesForContentTasteUpdateOperation:(id)arg1;	// IMP=0x0010000000067ca0
- (void)_addPendingChangesForContentTasteUpdateOperation:(id)arg1 invalidateLocalCache:(_Bool)arg2;	// IMP=0x001000000006774f
- (id)description;	// IMP=0x0010000000067689
- (void)removePendingChanges;	// IMP=0x001000000006763e
@property(readonly, nonatomic) NSArray *pendingChanges;
- (void)contentTasteUpdateOperation:(id)arg1 finishedByInvalidatingCache:(_Bool)arg2 error:(id)arg3;	// IMP=0x001000000006742c
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0010000000067124

@end

