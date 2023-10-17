//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GSFileRow : NSObject
{
    long long file_row_id;	// 8 = 0x8
    unsigned long long file_inode;	// 16 = 0x10
    long long file_last_seen;	// 24 = 0x18
    int file_status;	// 32 = 0x20
    unsigned long long file_document_id;	// 40 = 0x28
}

+ (_Bool)deleteRow:(id)arg1 storageID:(long long)arg2;	// IMP=0x002000000000cc48
+ (id)enumerate:(id)arg1 withPathPrefix:(const char *)arg2;	// IMP=0x001000000000cb5e
+ (id)enumerate:(id)arg1;	// IMP=0x001000000000cafb
+ (_Bool)storageIDExists:(id)arg1 storageID:(long long)arg2;	// IMP=0x001000000000ca74
+ (long long)tableRowCount:(id)arg1;	// IMP=0x001000000000c9fc
+ (id)fileRow:(id)arg1 byFileID:(unsigned long long)arg2;	// IMP=0x001000000000c998
+ (id)fileRow:(id)arg1 byRowID:(long long)arg2;	// IMP=0x001000000000c934
+ (id)fileRow:(id)arg1 byDocumentID:(unsigned long long)arg2;	// IMP=0x001000000000c8d0
+ (_Bool)createEntry:(id)arg1 withDocumentID:(unsigned long long)arg2 fileID:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x001000000000c7c4
- (_Bool)saveToDB:(id)arg1;	// IMP=0x002000000000c85e
@property(readonly, copy) NSString *description;
- (id)initFromPQLResultSet:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000c6bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
