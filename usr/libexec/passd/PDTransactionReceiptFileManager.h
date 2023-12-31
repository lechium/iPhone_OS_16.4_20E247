//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileManager, NSSet, NSURL;
@protocol PDTransactionReceiptFileManagerDelegate;

@interface PDTransactionReceiptFileManager : NSObject
{
    NSURL *_directoryURL;	// 8 = 0x8
    struct os_unfair_lock_s _fileAccessLock;	// 16 = 0x10
    id <PDTransactionReceiptFileManagerDelegate> _delegate;	// 24 = 0x18
    NSFileManager *_fileManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000461b43
- (id)_transactionReceiptUniqueIDFromFileURL:(id)arg1;	// IMP=0x0010000000461ae6
- (_Bool)_isTransactionReceiptFileURL:(id)arg1;	// IMP=0x0010000000461a22
- (id)_fileURLForTransactionReceiptUniqueID:(id)arg1;	// IMP=0x00100000004619bd
- (void)registerDatabaseTransactionReceipt:(id)arg1;	// IMP=0x00100000004618f6
- (_Bool)deleteTransactionReceiptWithUniqueID:(id)arg1;	// IMP=0x001000000046181b
- (void)_downloadImageURLsForReceipt:(id)arg1 atURL:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000046111d
- (void)writeTransactionReceipt:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000460e15
- (id)transactionReceiptWithUniqueID:(id)arg1;	// IMP=0x0010000000460d4a
@property(readonly, nonatomic) NSSet *transactionReceipts;
@property(readonly, nonatomic) NSSet *uniqueIDs;
- (id)initWithDirectoryURL:(id)arg1 delegate:(id)arg2;	// IMP=0x00100000004607ea

@end

