//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PDDatabaseManager;

@interface PDDeviceEnvironmentStore : NSObject
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    NSMutableDictionary *_clients;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
    _Bool _didStart;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x002000000036c993
- (id)fetchCurrentEnviroment;	// IMP=0x001000000036c8dd
- (void)notifyClients:(id)arg1 currentEnvironment:(id)arg2;	// IMP=0x001000000036c5c2
- (void)start;	// IMP=0x001000000036c510
- (void)registerClient:(id)arg1 withIdentifier:(long long)arg2;	// IMP=0x001000000036c2c8
- (id)initWithDatabaseManager:(id)arg1;	// IMP=0x001000000036c23c

@end

