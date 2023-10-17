//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/FPMoveOperation.h>

@class MISSING_TYPE, NSString;

@interface _TtC5Files16DOCMoveOperation : FPMoveOperation
{
    MISSING_TYPE *sourceURLs;	// 8 = 0x8
    MISSING_TYPE *sourceItems;	// 16 = 0x10
    MISSING_TYPE *sourceParentFolderItem;	// 24 = 0x18
    MISSING_TYPE *destinationFolderItem;	// 32 = 0x20
    MISSING_TYPE *undoManager;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00400000000c1990
- (id)initWithSourceURLsAndNames:(id)arg1 destinationFolder:(id)arg2;	// IMP=0x00100000000c1930
- (id)initWithSourceURLs:(id)arg1 destinationFolder:(id)arg2;	// IMP=0x00100000000c1900
- (id)initWithItems:(id)arg1 destinationURL:(id)arg2;	// IMP=0x00100000000c18a0
- (id)initWithItems:(id)arg1 destinationFolder:(id)arg2;	// IMP=0x00100000000c1870
- (void)registerUndo;	// IMP=0x00100000000c1840
- (id)operationForUndoing;	// IMP=0x00100000000c1800
- (id)operationForRedoing;	// IMP=0x00100000000c15d0
@property(nonatomic, readonly) NSString *actionNameForUndoing;
- (void)finishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x00100000000c1120
- (void)presendNotifications;	// IMP=0x00100000000c0d40
- (id)initWithURLs:(id)arg1 destinationFolder:(id)arg2;	// IMP=0x00100000000c0cf0

@end
