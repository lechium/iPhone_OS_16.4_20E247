//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CloudTabLocalStore, CloudTabLocalStoreDelegate;

@interface CloudTabLocalStoreShim : NSObject
{
    _Bool _disabled;	// 8 = 0x8
    id <CloudTabLocalStoreDelegate> _delegate;	// 16 = 0x10
    id <CloudTabLocalStore> _cloudTabLocalStore;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000071002
@property(readonly, nonatomic) id <CloudTabLocalStore> cloudTabLocalStore; // @synthesize cloudTabLocalStore=_cloudTabLocalStore;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak id <CloudTabLocalStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cloudTabLocalStoreDidOpen:(id)arg1;	// IMP=0x0010000000070f5d
- (void)cloudTabLocalStore:(id)arg1 hadSevereError:(id)arg2;	// IMP=0x0010000000070eef
- (void)setUseManateeContainerForSyncing:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000070ec1
- (void)getUseManateeContainerForSyncingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000070e91
- (void)setServerChangeTokenData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000070e66
- (void)getServerChangeTokenDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000070e3e
- (void)saveCloudTabDevices:(id)arg1 tabs:(id)arg2 closeRequests:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000070e13
- (void)deleteRecordsWithPrimaryKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000070de8
- (void)loadCloudTabDeviceWithUUIDString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000070dc0
- (void)loadCloudTabDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000070d96
- (void)deleteDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000070d73
- (void)closeDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000070d50
- (void)openDatabaseIfNecessary;	// IMP=0x0010000000070d32
- (id)initWithCloudTabLocalStore:(id)arg1;	// IMP=0x0010000000070ca0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
