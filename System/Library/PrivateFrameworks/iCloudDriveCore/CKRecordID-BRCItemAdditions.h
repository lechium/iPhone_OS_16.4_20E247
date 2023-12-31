//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecordID.h>

@class NSString;

@interface CKRecordID (BRCItemAdditions)
+ (id)newFromSqliteStatement:(struct sqlite3_stmt *)arg1 atIndex:(int)arg2;	// IMP=0x00100000000e2e11
+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;	// IMP=0x00100000000e2d47
+ (id)brc_fetchShareIDWithSharedItem:(id)arg1;	// IMP=0x00100000002b310e
- (_Bool)locateSideCarServerZone:(id *)arg1 withSession:(id)arg2;	// IMP=0x00100000000e3e12
- (BOOL)brc_itemType;	// IMP=0x00100000000e3ce0
- (id)brc_itemIDOfTargetWithLibraryRowID:(id)arg1 session:(id)arg2;	// IMP=0x00100000000e3cce
- (id)brc_itemIDWithSession:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000e3a5a
- (id)brc_itemIDWithSession:(id)arg1;	// IMP=0x00100000000e3935
- (id)_itemIDWithLibraryRowID:(id)arg1 session:(id)arg2;	// IMP=0x00100000000e3191
- (_Bool)brc_isZoneRootRecordID;	// IMP=0x00100000000e30e8
- (id)brc_appLibraryDocumentsZoneName;	// IMP=0x00100000000e3032
- (_Bool)brc_isAppLibraryDocumentsRecordID;	// IMP=0x00100000000e2fe7
- (id)brc_appLibraryRootZoneName;	// IMP=0x00100000000e2f31
- (_Bool)brc_isAppLibraryRootRecordID;	// IMP=0x00100000000e2ee6
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;	// IMP=0x00100000000e2cda
- (id)brc_collaborationIdentifierWithCachedCurrentUserRecordName:(id)arg1;	// IMP=0x00100000002b351f
- (id)brc_shareItemID;	// IMP=0x00100000002b30b7
- (id)brc_shareZoneName;	// IMP=0x00100000002b3067
- (id)initShareIDWithRecordID:(id)arg1 zoneID:(id)arg2 session:(id)arg3;	// IMP=0x00100000002b2fe5
- (id)initShareIDWithRecordID:(id)arg1 serverZone:(id)arg2;	// IMP=0x00100000002b2f2f
- (id)initShareIDWithShareableItem:(id)arg1;	// IMP=0x00100000002b2e77
- (id)initShareIDWithItemID:(id)arg1 zoneID:(id)arg2;	// IMP=0x00100000002b2d8e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

