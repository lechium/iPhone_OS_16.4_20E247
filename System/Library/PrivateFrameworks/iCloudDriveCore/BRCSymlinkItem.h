//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BRCLocalItem.h"

@class BRCAliasItem, BRCDirectoryItem, BRCDocumentItem, NSString;
@protocol BRCFSRooted;

__attribute__((visibility("hidden")))
@interface BRCSymlinkItem : BRCLocalItem
{
    NSString *_symlinkTarget;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x0000000000194d55
@property(readonly, nonatomic) NSString *symlinkTarget; // @synthesize symlinkTarget=_symlinkTarget;
- (void)updateSymlinkTarget:(id)arg1;	// IMP=0x0000000000194d30
- (_Bool)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;	// IMP=0x00000000001947cc
- (_Bool)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;	// IMP=0x0000000000194273
- (unsigned long long)diffAgainstLocalItem:(id)arg1;	// IMP=0x00000000001940cb
- (unsigned long long)diffAgainstServerItem:(id)arg1;	// IMP=0x0000000000193f52
- (id)descriptionWithContext:(id)arg1;	// IMP=0x0000000000193ebe
- (id)_initFromPQLResultSet:(id)arg1 session:(id)arg2 db:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000193e07
- (id)_initWithLocalItem:(id)arg1;	// IMP=0x0000000000193d54
- (id)_initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2;	// IMP=0x0000000000193cc5
- (_Bool)isSymLink;	// IMP=0x0000000000193cbd
- (id)asSymlink;	// IMP=0x0000000000193cb4
- (_Bool)updateWithImportObject:(id)arg1 onlyContentDependentProperties:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000007562f
- (id)_initWithImportObject:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007559d

// Remaining properties
@property(readonly, nonatomic) BRCAliasItem *asBRAlias; // @dynamic asBRAlias;
@property(readonly, nonatomic) BRCDirectoryItem *asDirectory; // @dynamic asDirectory;
@property(readonly, nonatomic) BRCDocumentItem *asDocument; // @dynamic asDocument;
@property(readonly, nonatomic) BRCDirectoryItem<BRCFSRooted> *asFSRoot; // @dynamic asFSRoot;

@end

