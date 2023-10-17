//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BRCItemID, BRCServerZone, CKRecord, CKShare, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingModifyShareOperation
{
    BRCServerZone *_serverZone;	// 32 = 0x20
    CKShare *_share;	// 40 = 0x28
    BRCItemID *_itemID;	// 48 = 0x30
    CKRecord *_sharingIdentityPreparedRecord;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000210fc6
- (void)main;	// IMP=0x0000000000210f97
- (void)performAfterPreparingSharingIdentityIfNecessary:(CDUnknownBlockType)arg1;	// IMP=0x0000000000210f80
- (void)_performAfterPreparingSharingIdentityIfNecessaryWhenWantRoutingKey:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000210cab
- (void)_performAfterFetchingiWorkSharingIdentityOnItem:(id)arg1 wantRoutingKey:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000021026d
- (void)_performAfterFetchingiWorkRoutingTokenIfNecessary:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000020fdb9
- (void)_performAfterFetchingSharingIdentityOnDirectoryItem:(id)arg1 wantRoutingKey:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000020fbcc
- (void)_performAfterFetchingSharingIdentityOnDocumentItem:(id)arg1 wantRoutingKey:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000020fa52
- (_Bool)_shouldFetchSharingIdentity:(_Bool)arg1;	// IMP=0x000000000020f9c9
- (void)_performAfterGettingPublicSharingKeyForRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000020f252
- (void)_performAfterCopyingPublicSharingKeyWithRecordID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000020ef01
- (void)_updateDBAndSyncDownIfNeededWithShare:(id)arg1 recordsToLearnCKInfo:(id)arg2;	// IMP=0x000000000020e8de
- (oneway void)invalidate;	// IMP=0x000000000020e8d8
- (id)createActivity;	// IMP=0x000000000020e8af
- (id)initWithName:(id)arg1 zone:(id)arg2 share:(id)arg3;	// IMP=0x000000000020e662

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
