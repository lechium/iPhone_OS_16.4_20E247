//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IAPInfoDatabaseStore, NSString, URLBag;
@protocol OS_dispatch_queue;

@interface IAPInfoManager : NSObject
{
    URLBag *_bag;	// 8 = 0x8
    IAPInfoDatabaseStore *_databaseStore;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    _Bool _currentlyUpdating;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001c3f6a
- (void)_handleAccountChangedNotification;	// IMP=0x00100000001c2705
- (void)pushService:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x00100000001c24e7
- (id)init;	// IMP=0x00100000001c03de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
