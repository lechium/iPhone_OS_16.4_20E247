//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CloudBookmarkDatabaseLockArbiterDelegate, WBSBookmarkDBAccess;

@interface CloudBookmarkDatabaseLockArbiter : NSObject
{
    long long _databaseLockCount;	// 8 = 0x8
    _Bool _databaseOpen;	// 16 = 0x10
    const void *_databaseRef;	// 24 = 0x18
    id <WBSBookmarkDBAccess> _databaseAccessor;	// 32 = 0x20
    id <CloudBookmarkDatabaseLockArbiterDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000008b844
@property(nonatomic) __weak id <CloudBookmarkDatabaseLockArbiterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <WBSBookmarkDBAccess> databaseAccessor; // @synthesize databaseAccessor=_databaseAccessor;
- (void)closeDatabaseAndSave:(_Bool)arg1;	// IMP=0x001000000008b6c5
- (_Bool)openDatabase;	// IMP=0x001000000008b5c4
@property(nonatomic) long long localMigrationState;
- (void)unlockForClient:(id)arg1;	// IMP=0x001000000008b0f1
- (_Bool)lockForClient:(id)arg1;	// IMP=0x001000000008aec8
@property(readonly, nonatomic) const void *databaseRef; // @synthesize databaseRef=_databaseRef;
@property(readonly, nonatomic, getter=isDatabaseOpen) _Bool databaseOpen; // @synthesize databaseOpen=_databaseOpen;
- (void)dealloc;	// IMP=0x001000000008adf0
- (id)initWithDatabaseAccessor:(id)arg1;	// IMP=0x001000000008ad72

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
