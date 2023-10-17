//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface FPSpotlightCollectorManager : NSObject
{
    _Bool _areMountQueriesEnabled;	// 8 = 0x8
    id _providerDomainChangesToken;	// 16 = 0x10
    NSSet *_currentMountPoints;	// 24 = 0x18
    NSMutableDictionary *_collectorByDescriptor;	// 32 = 0x20
}

+ (id)_mountPointsFromProviderDomains:(id)arg1;	// IMP=0x00100000000f402b
+ (id)sharedInstance;	// IMP=0x00100000000f2d96
- (void).cxx_destruct;	// IMP=0x00000000000f46c5
@property _Bool areMountQueriesEnabled; // @synthesize areMountQueriesEnabled=_areMountQueriesEnabled;
@property(retain) NSMutableDictionary *collectorByDescriptor; // @synthesize collectorByDescriptor=_collectorByDescriptor;
@property(retain) NSSet *currentMountPoints; // @synthesize currentMountPoints=_currentMountPoints;
@property(retain) id providerDomainChangesToken; // @synthesize providerDomainChangesToken=_providerDomainChangesToken;
- (id)_recursiveDescription;	// IMP=0x00000000000f4135
- (void)_observeFileProviderDomains;	// IMP=0x00000000000f3bfa
- (void)collectorDidFinish:(id)arg1;	// IMP=0x00000000000f3b1c
- (id)mountPointsForCollector:(id)arg1;	// IMP=0x00000000000f3b0a
- (void)disableMountPointQueries;	// IMP=0x00000000000f390d
- (void)enableMountPointQueries;	// IMP=0x00000000000f370d
- (void)resumeCollectors;	// IMP=0x00000000000f34f9
- (void)suspendCollectors;	// IMP=0x00000000000f32e5
- (void)unregisterDataSource:(id)arg1;	// IMP=0x00000000000f317e
- (void)registerDataSource:(id)arg1;	// IMP=0x00000000000f3020
- (void)dealloc;	// IMP=0x00000000000f2f6c
@property(readonly) NSSet *effectiveCurrentMountPoints;
@property(readonly, nonatomic) NSArray *collectors;
- (id)init;	// IMP=0x00000000000f2e1b

@end
