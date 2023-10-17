//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecordID.h>

@class NSString;

@interface CKRecordID (BRCItemAdditions)
+ (id)newFromSqliteStatement:(struct sqlite3_stmt *)arg1 atIndex:(int)arg2;	// IMP=0x001000000011132b
+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;	// IMP=0x0010000000111261
+ (id)brc_fetchShareIDWithSharedItem:(id)arg1;	// IMP=0x001000000033f225
- (_Bool)locateSideCarServerZone:(id *)arg1 withSession:(id)arg2;	// IMP=0x001000000011232c
- (BOOL)brc_itemType;	// IMP=0x00100000001121fa
- (id)brc_itemIDOfTargetWithLibraryRowID:(id)arg1 session:(id)arg2;	// IMP=0x00100000001121e8
- (id)brc_itemIDWithSession:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000111f74
- (id)brc_itemIDWithSession:(id)arg1;	// IMP=0x0010000000111e4f
- (id)_itemIDWithLibraryRowID:(id)arg1 session:(id)arg2;	// IMP=0x00100000001116ab
- (_Bool)brc_isZoneRootRecordID;	// IMP=0x0010000000111602
- (id)brc_appLibraryDocumentsZoneName;	// IMP=0x001000000011154c
- (_Bool)brc_isAppLibraryDocumentsRecordID;	// IMP=0x0010000000111501
- (id)brc_appLibraryRootZoneName;	// IMP=0x001000000011144b
- (_Bool)brc_isAppLibraryRootRecordID;	// IMP=0x0010000000111400
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;	// IMP=0x00100000001111f4
- (id)brc_collaborationIdentifierWithCachedCurrentUserRecordName:(id)arg1;	// IMP=0x001000000033f636
- (id)brc_shareItemID;	// IMP=0x001000000033f1ce
- (id)brc_shareZoneName;	// IMP=0x001000000033f17e
- (id)initShareIDWithRecordID:(id)arg1 zoneID:(id)arg2 session:(id)arg3;	// IMP=0x001000000033f0fc
- (id)initShareIDWithRecordID:(id)arg1 serverZone:(id)arg2;	// IMP=0x001000000033f046
- (id)initShareIDWithShareableItem:(id)arg1;	// IMP=0x001000000033ef8e
- (id)initShareIDWithItemID:(id)arg1 zoneID:(id)arg2;	// IMP=0x001000000033eea5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
