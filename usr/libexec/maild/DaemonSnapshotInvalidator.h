//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol DaemonSnapshotInvalidationHandler, EDServerRemoteClientsProvider;

@interface DaemonSnapshotInvalidator : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    NSString *_applicationBundleID;	// 16 = 0x10
    id <DaemonSnapshotInvalidationHandler> _invalidationHandler;	// 24 = 0x18
    id <EDServerRemoteClientsProvider> _remoteClientsProvider;	// 32 = 0x20
}

+ (id)log;	// IMP=0x0020000000012817
- (void).cxx_destruct;	// IMP=0x00200000000131f9
@property(retain, nonatomic) id <EDServerRemoteClientsProvider> remoteClientsProvider; // @synthesize remoteClientsProvider=_remoteClientsProvider;
@property(nonatomic) __weak id <DaemonSnapshotInvalidationHandler> invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) NSString *applicationBundleID; // @synthesize applicationBundleID=_applicationBundleID;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)currentFocusChanged:(id)arg1;	// IMP=0x00100000000130e1
- (void)accountsChanged:(id)arg1;	// IMP=0x001000000001302d
- (void)accountsRemoved:(id)arg1;	// IMP=0x0010000000012f79
- (void)deleteSnapshotsForBundleIdentifier:(id)arg1;	// IMP=0x0010000000012b9d
- (id)initWithApplicationBundleIdentifier:(id)arg1 hookRegistry:(id)arg2 remoteClientsProvider:(id)arg3 focusController:(id)arg4 invalidationHandler:(id)arg5;	// IMP=0x0010000000012913
- (id)initWithApplicationBundleIdentifier:(id)arg1 hookRegistry:(id)arg2 remoteClientsProvider:(id)arg3 focusController:(id)arg4;	// IMP=0x00100000000128f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

