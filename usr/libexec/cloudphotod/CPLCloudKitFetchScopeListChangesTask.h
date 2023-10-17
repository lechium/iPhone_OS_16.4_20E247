//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLCloudKitScopeListSyncAnchor, NSString;
@protocol CPLEngineStoreUserIdentifier, CPLEngineTransportGroup;

@interface CPLCloudKitFetchScopeListChangesTask
{
    CPLCloudKitScopeListSyncAnchor *_ckScopeListSyncAnchor;	// 8 = 0x8
    CDUnknownBlockType _progressHandler;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
}

+ (id)descriptionForScopeListSyncAnchor:(id)arg1;	// IMP=0x0020000000144b31
- (void).cxx_destruct;	// IMP=0x0020000000145991
- (void)_launchOperationForSharedDatabase:(_Bool)arg1;	// IMP=0x0010000000144ca0
- (void)runOperations;	// IMP=0x0010000000144c8c
- (id)initWithController:(id)arg1 scopeListSyncAnchor:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000144b88

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
