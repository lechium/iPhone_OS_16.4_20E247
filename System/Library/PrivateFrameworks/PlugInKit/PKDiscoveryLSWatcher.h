//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PKDiscoveryDriver;
@protocol PKApplicationWorkspaceProxy;

@interface PKDiscoveryLSWatcher : NSObject
{
    PKDiscoveryDriver *_wdriver;	// 8 = 0x8
    id <PKApplicationWorkspaceProxy> _workspace;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000cce6
@property(retain) id <PKApplicationWorkspaceProxy> workspace; // @synthesize workspace=_workspace;
@property __weak PKDiscoveryDriver *wdriver; // @synthesize wdriver=_wdriver;
- (void)updateWithUninstalledProxies:(id)arg1;	// IMP=0x000000000000cb06
- (void)update;	// IMP=0x000000000000caed
- (void)pluginsDidUninstall:(id)arg1;	// IMP=0x000000000000c9e5
- (void)pluginsDidInstall:(id)arg1;	// IMP=0x000000000000c8e0
- (void)stopUpdates;	// IMP=0x000000000000c894
- (id)initWithDriver:(id)arg1;	// IMP=0x000000000000c76a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

