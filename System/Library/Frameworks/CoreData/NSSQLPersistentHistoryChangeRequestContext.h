//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSFetchRequest, NSPersistentHistoryChangeRequest;

__attribute__((visibility("hidden")))
@interface NSSQLPersistentHistoryChangeRequestContext
{
    NSFetchRequest *_fetchRequest;	// 88 = 0x58
    _Bool _shouldUseBatches;	// 96 = 0x60
}

@property(readonly, nonatomic) _Bool shouldUseBatches; // @synthesize shouldUseBatches=_shouldUseBatches;
- (_Bool)executeRequestUsingConnection:(id)arg1;	// IMP=0x00000000002a5f95
- (void)executePrologue;	// IMP=0x00000000002a5e54
- (_Bool)isWritingRequest;	// IMP=0x00000000002a5df5
- (id)createDeleteTransactionsRequestContext;	// IMP=0x00000000002a5d37
- (id)createRequestContextForChangesWithTransactionIDs:(id)arg1;	// IMP=0x00000000002a5ca3
- (id)fetchRequestContextForChanges;	// IMP=0x00000000002a59c9
- (id)createCountRequestContextForChanges;	// IMP=0x00000000002a5963
@property(readonly, nonatomic) NSPersistentHistoryChangeRequest *request;
- (void)dealloc;	// IMP=0x00000000002a553f
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;	// IMP=0x00000000002a54bf

@end

