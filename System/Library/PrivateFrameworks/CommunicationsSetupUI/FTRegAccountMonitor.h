//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTRegConnectionHandler, IMServiceImpl, NSArray;

__attribute__((visibility("hidden")))
@interface FTRegAccountMonitor : NSObject
{
    long long _serviceType;	// 8 = 0x8
    IMServiceImpl *_service;	// 16 = 0x10
    NSArray *_accounts;	// 24 = 0x18
    FTRegConnectionHandler *_connectionHandler;	// 32 = 0x20
    struct {
        unsigned int listeningForNotifications:1;
    } _monitorFlags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000654f2
@property(readonly, retain, nonatomic) NSArray *activeAccounts; // @synthesize activeAccounts=_accounts;
@property(nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) IMServiceImpl *service; // @synthesize service=_service;
- (void)_handleDaemonConnected:(id)arg1;	// IMP=0x00000000000653cd
- (void)_handleAccountNotification:(id)arg1;	// IMP=0x000000000006523d
- (void)_stopListeningForNotifications;	// IMP=0x00000000000650b5
- (void)_startListeningForNotifications;	// IMP=0x0000000000064eeb
- (_Bool)_shouldHandleAccountNofication:(id)arg1;	// IMP=0x0000000000064e2a
- (void)_updateAccountState:(_Bool)arg1;	// IMP=0x00000000000648cc
- (id)_activeAccounts;	// IMP=0x00000000000645fc
- (id)logName;	// IMP=0x000000000006456f
- (void)dealloc;	// IMP=0x00000000000644fa
- (id)initWithServiceType:(long long)arg1;	// IMP=0x00000000000642e4

@end

