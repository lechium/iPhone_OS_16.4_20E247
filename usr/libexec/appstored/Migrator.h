//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MigratorConfigurationStore, NSMutableArray;
@protocol OS_dispatch_queue;

@interface Migrator : NSObject
{
    MigratorConfigurationStore *_configurationStore;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSMutableArray *_migrations;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001633a3
- (void)_handleMonitorStateDidChangeNotification:(id)arg1;	// IMP=0x0010000000163147
- (void)_handleNetworkStateDidChangeNotification:(id)arg1;	// IMP=0x0010000000162969
- (void)dealloc;	// IMP=0x0010000000162531
- (id)init;	// IMP=0x0010000000161ebc

@end

