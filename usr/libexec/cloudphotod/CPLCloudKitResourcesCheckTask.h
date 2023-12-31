//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLRecordTargetMapping, MISSING_TYPE, NSArray, NSString;
@protocol CPLEngineStoreUserIdentifier, CPLEngineTransportGroup;

@interface CPLCloudKitResourcesCheckTask
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSArray *_resources;	// 16 = 0x10
    CPLRecordTargetMapping *_targetMapping;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000148147
- (MISSING_TYPE *)_checkResource:record:error: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000147de4
- (void)runOperations;	// IMP=0x0010000000147360
- (id)initWithController:(id)arg1 resources:(id)arg2 targetMapping:(id)arg3 transportScopeMapping:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000147231

// Remaining properties
@property(nonatomic) _Bool allowsFetchCache;
@property(nonatomic, getter=isBackgroundTask) _Bool backgroundTask;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id fetchCache;
@property(nonatomic, getter=isForcedTask) _Bool forcedTask;
@property(nonatomic) _Bool foreground;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighPriorityBackground) _Bool highPriorityBackground;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;
@property(retain, nonatomic) id <CPLEngineStoreUserIdentifier> transportUserIdentifier;

@end

