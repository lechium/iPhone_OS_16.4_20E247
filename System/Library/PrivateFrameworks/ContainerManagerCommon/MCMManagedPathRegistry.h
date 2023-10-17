//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMManagedPath, MCMPOSIXUser, NSSet;

__attribute__((visibility("hidden")))
@interface MCMManagedPathRegistry : NSObject
{
    _Bool _privileged;	// 8 = 0x8
    NSSet *_paths;	// 16 = 0x10
    MCMPOSIXUser *_daemonUser;	// 24 = 0x18
    MCMManagedPath *_home;	// 32 = 0x20
    MCMManagedPath *_library;	// 40 = 0x28
    MCMManagedPath *_containermanagerLibrary;	// 48 = 0x30
    MCMManagedPath *_containermanagerLibraryIntermediate;	// 56 = 0x38
    MCMManagedPath *_containermanagerPendingUpdates;	// 64 = 0x40
    MCMManagedPath *_containermanagerReplaceOperations;	// 72 = 0x48
    MCMManagedPath *_containermanagerDeleteOperations;	// 80 = 0x50
    MCMManagedPath *_caches;	// 88 = 0x58
    MCMManagedPath *_containermanagerCaches;	// 96 = 0x60
    MCMManagedPath *_containermanagerCachesIntermediate;	// 104 = 0x68
    MCMManagedPath *_containermanagerDeathrow;	// 112 = 0x70
    MCMManagedPath *_logs;	// 120 = 0x78
    MCMManagedPath *_containermanagerLogs;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000003899d
@property(readonly, nonatomic) _Bool privileged; // @synthesize privileged=_privileged;
@property(readonly, nonatomic) MCMManagedPath *containermanagerLogs; // @synthesize containermanagerLogs=_containermanagerLogs;
@property(readonly, nonatomic) MCMManagedPath *logs; // @synthesize logs=_logs;
@property(readonly, nonatomic) MCMManagedPath *containermanagerDeathrow; // @synthesize containermanagerDeathrow=_containermanagerDeathrow;
@property(readonly, nonatomic) MCMManagedPath *containermanagerCachesIntermediate; // @synthesize containermanagerCachesIntermediate=_containermanagerCachesIntermediate;
@property(readonly, nonatomic) MCMManagedPath *containermanagerCaches; // @synthesize containermanagerCaches=_containermanagerCaches;
@property(readonly, nonatomic) MCMManagedPath *caches; // @synthesize caches=_caches;
@property(readonly, nonatomic) MCMManagedPath *containermanagerDeleteOperations; // @synthesize containermanagerDeleteOperations=_containermanagerDeleteOperations;
@property(readonly, nonatomic) MCMManagedPath *containermanagerReplaceOperations; // @synthesize containermanagerReplaceOperations=_containermanagerReplaceOperations;
@property(readonly, nonatomic) MCMManagedPath *containermanagerPendingUpdates; // @synthesize containermanagerPendingUpdates=_containermanagerPendingUpdates;
@property(readonly, nonatomic) MCMManagedPath *containermanagerLibraryIntermediate; // @synthesize containermanagerLibraryIntermediate=_containermanagerLibraryIntermediate;
@property(readonly, nonatomic) MCMManagedPath *containermanagerLibrary; // @synthesize containermanagerLibrary=_containermanagerLibrary;
@property(readonly, nonatomic) MCMManagedPath *library; // @synthesize library=_library;
@property(readonly, nonatomic) MCMManagedPath *home; // @synthesize home=_home;
@property(readonly, nonatomic) MCMPOSIXUser *daemonUser; // @synthesize daemonUser=_daemonUser;
@property(readonly, nonatomic) NSSet *paths; // @synthesize paths=_paths;
- (void)_initPathPropertiesWithDaemonUser:(id)arg1;	// IMP=0x0000000000038165
- (void)_addPaths:(id)arg1;	// IMP=0x000000000003810c
- (id)managedPathForURL:(id)arg1;	// IMP=0x0000000000037f33
- (id)orderedPathsFromPaths:(id)arg1;	// IMP=0x0000000000037ba1
- (id)initWithDaemonUser:(id)arg1 privileged:(_Bool)arg2;	// IMP=0x0000000000037a0a

@end
