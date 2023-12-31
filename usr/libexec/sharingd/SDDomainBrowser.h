//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSNetServiceBrowser, NSString;
@protocol OS_dispatch_source;

@interface SDDomainBrowser : NSObject
{
    int _clientCount;	// 8 = 0x8
    _Bool _sendNotification;	// 12 = 0xc
    NSMutableSet *_domains;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_timer;	// 24 = 0x18
    struct __CFDictionary *_domainTree;	// 32 = 0x20
    NSNetServiceBrowser *_domainBrowser;	// 40 = 0x28
}

+ (id)sharedBrowser;	// IMP=0x00200000001a6c6b
- (void).cxx_destruct;	// IMP=0x00200000001a7986
- (void)stop;	// IMP=0x00100000001a78d0
- (void)start;	// IMP=0x00100000001a77a1
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;	// IMP=0x00100000001a773f
- (void)netServiceBrowser:(id)arg1 didRemoveDomain:(id)arg2 moreComing:(_Bool)arg3;	// IMP=0x00100000001a76ed
- (void)netServiceBrowser:(id)arg1 didFindDomain:(id)arg2 moreComing:(_Bool)arg3;	// IMP=0x00100000001a7636
- (void)postNotification;	// IMP=0x00100000001a75db
- (void)buildNodes;	// IMP=0x00100000001a74bc
- (void)parseDomain:(id)arg1;	// IMP=0x00100000001a70de
- (id)displayNameForDomain:(id)arg1;	// IMP=0x00100000001a6ee0
- (id)childrenForNode:(struct __SFNode *)arg1;	// IMP=0x00100000001a6e47
- (void)restart;	// IMP=0x00100000001a6deb
- (void)scheduleBrowser;	// IMP=0x00100000001a6d9b
- (void)statusChanged:(id)arg1;	// IMP=0x00100000001a6d81
- (void)browseAfterDelay:(double)arg1;	// IMP=0x00100000001a6d61
- (id)init;	// IMP=0x00100000001a6cc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

