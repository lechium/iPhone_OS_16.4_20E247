//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, NTKDFaceSnapshotController;
@protocol OS_dispatch_queue;

@interface NTKDFaceSnapshotCoordinator : NSObject
{
    NSMutableSet *_clients;	// 8 = 0x8
    NTKDFaceSnapshotController *_snapshotController;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_xpcIncomingMessageQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 40 = 0x28
}

+ (void)updateAllSnapshots;	// IMP=0x002000000000a4db
+ (id)sharedInstance;	// IMP=0x001000000000a486
+ (void)runSnapshotServer;	// IMP=0x001000000000a3b6
- (void).cxx_destruct;	// IMP=0x002000000000b438
- (void)_prewarmForActivity:(id)arg1;	// IMP=0x001000000000affd
- (void);	// IMP=0x001000000000ac1f
- (void)_updateAllSnapshots;	// IMP=0x001000000000ab38
- (void)_handleCurrentLocaleDidChangeNotification;	// IMP=0x001000000000aab6
- (void)_handleCalendarDayChangedNotification;	// IMP=0x001000000000aa34
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000a706
- (id)init;	// IMP=0x001000000000a51f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
