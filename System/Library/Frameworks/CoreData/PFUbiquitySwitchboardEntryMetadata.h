//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSPersistentStoreCoordinator, NSSQLCore, NSString, PFUbiquityBaselineHeuristics, PFUbiquityLocation, PFUbiquityRecordsImporterSchedulingContext, PFUbiquitySwitchboardCacheWrapper, _PFUbiquityRecordsExporter, _PFUbiquityRecordsImporter;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PFUbiquitySwitchboardEntryMetadata : NSObject
{
    NSString *_localPeerID;	// 8 = 0x8
    NSString *_storeName;	// 16 = 0x10
    PFUbiquityLocation *_ubiquityRootLocation;	// 24 = 0x18
    PFUbiquityLocation *_localRootLocation;	// 32 = 0x20
    NSString *_activeModelVersionHash;	// 40 = 0x28
    NSMutableSet *_stores;	// 48 = 0x30
    NSPersistentStoreCoordinator *_privatePSC;	// 56 = 0x38
    NSSQLCore *_privateStore;	// 64 = 0x40
    _PFUbiquityRecordsImporter *_importer;	// 72 = 0x48
    _PFUbiquityRecordsExporter *_exporter;	// 80 = 0x50
    PFUbiquitySwitchboardCacheWrapper *_cacheWrapper;	// 88 = 0x58
    PFUbiquityRecordsImporterSchedulingContext *_schedulingContext;	// 96 = 0x60
    _Bool _useLocalStorage;	// 104 = 0x68
    _Bool _useLocaAccount;	// 105 = 0x69
    NSObject<OS_dispatch_queue> *_privateQueue;	// 112 = 0x70
    PFUbiquityBaselineHeuristics *_baselineHeuristics;	// 120 = 0x78
}

- (void)dealloc;	// IMP=0x000000000029839a
- (id)initWithLocalPeerID:(id)arg1 ubiquityRootLocation:(id)arg2 localRootLocation:(id)arg3 storeName:(id)arg4 andPrivateQueue:(id)arg5;	// IMP=0x00000000002982d0

@end
