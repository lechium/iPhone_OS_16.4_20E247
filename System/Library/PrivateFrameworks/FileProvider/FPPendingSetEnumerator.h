//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileProviderDomainVersion, NSFileProviderManager, NSString;

__attribute__((visibility("hidden")))
@interface FPPendingSetEnumerator : NSObject
{
    NSFileProviderManager *_manager;	// 8 = 0x8
    NSFileProviderDomainVersion *_domainVersion;	// 16 = 0x10
    double _refreshInterval;	// 24 = 0x18
    _Bool _maximumSizeReached;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000101c37
@property(readonly, nonatomic, getter=isMaximumSizeReached) _Bool maximumSizeReached; // @synthesize maximumSizeReached=_maximumSizeReached;
@property(readonly, nonatomic) double refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(readonly, nonatomic) NSFileProviderDomainVersion *domainVersion; // @synthesize domainVersion=_domainVersion;
- (void)invalidate;	// IMP=0x0000000000101c13
- (void)currentSyncAnchorWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000101ae3
- (void)enumerateChangesForObserver:(id)arg1 fromSyncAnchor:(id)arg2;	// IMP=0x00000000001016cb
- (void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2;	// IMP=0x00000000001012e2
- (id)initWithManager:(id)arg1;	// IMP=0x000000000010125e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
