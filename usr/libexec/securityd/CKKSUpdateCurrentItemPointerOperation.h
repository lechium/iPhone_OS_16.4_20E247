//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKFetchRecordsOperation, CKKSKeychainViewState, CKKSOperationDependencies, CKModifyRecordsOperation, CKOperationGroup, MISSING_TYPE, NSData, NSString;

@interface CKKSUpdateCurrentItemPointerOperation
{
    NSString *_currentPointerIdentifier;	// 16 = 0x10
    CKKSKeychainViewState *_viewState;	// 24 = 0x18
    CKModifyRecordsOperation *_modifyRecordsOperation;	// 32 = 0x20
    CKFetchRecordsOperation *_fetchRecordsOperation;	// 40 = 0x28
    CKOperationGroup *_ckoperationGroup;	// 48 = 0x30
    CKKSOperationDependencies *_deps;	// 56 = 0x38
    NSString *_accessGroup;	// 64 = 0x40
    NSData *_newerItemPersistentRef;	// 72 = 0x48
    NSData *_newerItemSHA1;	// 80 = 0x50
    NSData *_oldItemPersistentRef;	// 88 = 0x58
    NSData *_oldItemSHA1;	// 96 = 0x60
    struct SecDbItem *_newItem;	// 104 = 0x68
    struct SecDbItem *_oldItem;	// 112 = 0x70
}

- (MISSING_TYPE *).cxx_destruct;	// IMP=0x002000000016e958
@property struct SecDbItem *oldItem; // @synthesize oldItem=_oldItem;
@property struct SecDbItem *newItem; // @synthesize newItem=_newItem;
@property(retain) NSData *oldItemSHA1; // @synthesize oldItemSHA1=_oldItemSHA1;
@property(retain) NSData *oldItemPersistentRef; // @synthesize oldItemPersistentRef=_oldItemPersistentRef;
@property(retain) NSData *newerItemSHA1; // @synthesize newerItemSHA1=_newerItemSHA1;
@property(retain) NSData *newerItemPersistentRef; // @synthesize newerItemPersistentRef=_newerItemPersistentRef;
@property(retain) NSString *accessGroup; // @synthesize accessGroup=_accessGroup;
@property(retain) CKKSOperationDependencies *deps; // @synthesize deps=_deps;
@property(retain) CKOperationGroup *ckoperationGroup; // @synthesize ckoperationGroup=_ckoperationGroup;
@property(retain) CKFetchRecordsOperation *fetchRecordsOperation; // @synthesize fetchRecordsOperation=_fetchRecordsOperation;
@property(retain) CKModifyRecordsOperation *modifyRecordsOperation; // @synthesize modifyRecordsOperation=_modifyRecordsOperation;
@property(readonly) CKKSKeychainViewState *viewState; // @synthesize viewState=_viewState;
@property(retain) NSString *currentPointerIdentifier; // @synthesize currentPointerIdentifier=_currentPointerIdentifier;
- (struct SecDbItem *)_onqueueFindSecDbItemWithQuery:(id)arg1 error:(id *)arg2;	// IMP=0x001000000016e36d
- (struct SecDbItem *)_onqueueFindSecDbItemWithUUID:(id)arg1 accessGroup:(id)arg2 error:(id *)arg3;	// IMP=0x001000000016e16a
- (struct SecDbItem *)_onqueueFindSecDbItem:(id)arg1 accessGroup:(id)arg2 error:(id *)arg3;	// IMP=0x001000000016e06f
- (void)_fetchAndUpdateMirrorEntry:(id)arg1;	// IMP=0x001000000016db99
- (void)groupStart;	// IMP=0x001000000016da96
- (void)dealloc;	// IMP=0x001000000016da26
- (id)initWithCKKSOperationDependencies:(id)arg1 viewState:(id)arg2 newItem:(id)arg3 hash:(id)arg4 accessGroup:(id)arg5 identifier:(id)arg6 replacing:(id)arg7 hash:(id)arg8 ckoperationGroup:(id)arg9;	// IMP=0x001000000016d85e

@end
