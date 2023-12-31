//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BRCStatInfo.h"

@class BRCGenerationID, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface BRCLocalStatInfo : BRCStatInfo
{
    NSNumber *_fileID;	// 120 = 0x78
    BRCGenerationID *_generationID;	// 128 = 0x80
    NSNumber *_documentID;	// 136 = 0x88
    NSNumber *_tmpBouncedNo;	// 144 = 0x90
    NSString *_physicalName;	// 152 = 0x98
    NSNumber *_stagedFileID;	// 160 = 0xa0
    unsigned int _stagedGenerationID;	// 168 = 0xa8
    NSString *_bouncedLogicalName;	// 176 = 0xb0
    unsigned char _itemScope;	// 184 = 0xb8
    NSNumber *_processingStamp;	// 192 = 0xc0
}

+ (BOOL)_modeFromRelativePath:(id)arg1 isPackageFault:(_Bool)arg2;	// IMP=0x006000000001a90c
+ (id)_finderTagsFromRelativePath:(id)arg1;	// IMP=0x006000000001a628
- (void).cxx_destruct;	// IMP=0x00000000000ce050
@property(readonly, nonatomic) unsigned int stagedGenerationID; // @synthesize stagedGenerationID=_stagedGenerationID;
@property(readonly, nonatomic) NSNumber *stagedFileID; // @synthesize stagedFileID=_stagedFileID;
@property(readonly, nonatomic) NSNumber *tmpBouncedNo; // @synthesize tmpBouncedNo=_tmpBouncedNo;
@property(readonly, nonatomic) NSString *physicalName; // @synthesize physicalName=_physicalName;
@property(readonly, nonatomic) BRCGenerationID *generationID; // @synthesize generationID=_generationID;
@property(readonly, nonatomic) NSNumber *fileID; // @synthesize fileID=_fileID;
@property(readonly, nonatomic) NSNumber *documentID; // @synthesize documentID=_documentID;
@property(retain, nonatomic) NSString *rawBouncedLogicalName; // @synthesize rawBouncedLogicalName=_bouncedLogicalName;
@property(nonatomic) unsigned char itemScope; // @synthesize itemScope=_itemScope;
@property(readonly, nonatomic) NSNumber *processingStamp; // @synthesize processingStamp=_processingStamp;
- (_Bool)checkStateWithItemID:(id)arg1 logToFile:(struct __sFILE *)arg2;	// IMP=0x00000000000cdf07
- (void)_updateStatMeta:(id)arg1;	// IMP=0x00000000000cdd7a
- (void)_markDeadAsSharedTopLevelItemWithDocumentsItemID:(id)arg1;	// IMP=0x00000000000cdd38
- (void)_markDead;	// IMP=0x00000000000cdc8e
- (unsigned long long)diffAgainstLocalInfo:(id)arg1;	// IMP=0x00000000000cd7de
- (void)_moveItemAsideWithUUIDString;	// IMP=0x00000000000cd639
- (void)_setCKInfo:(id)arg1;	// IMP=0x00000000000cd622
- (void)_setItemScope:(unsigned char)arg1;	// IMP=0x00000000000cd612
- (void)setFilename:(id)arg1 forcePhysicalName:(id)arg2 forceBouncedLogicalName:(id)arg3 serverName:(id)arg4;	// IMP=0x00000000000cd306
- (void)setFilename:(id)arg1;	// IMP=0x00000000000cd2ec
@property(readonly, nonatomic) NSString *filename;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cd1ea
- (id)initAsShareAcceptFaultWithName:(id)arg1 mode:(BOOL)arg2 isDirectory:(_Bool)arg3;	// IMP=0x00000000000cd143
- (id)description;	// IMP=0x00000000000cd12d
- (id)descriptionWithContext:(id)arg1 origName:(id)arg2;	// IMP=0x00000000000ccdd1
@property(readonly, nonatomic) NSNumber *stagedFileIDForDB;
@property(readonly, nonatomic) NSString *logicalNameWithoutLocalBounce;
- (id)logicalName;	// IMP=0x00000000000ccbe3
- (void)_markStagedWithFileID:(id)arg1 generationID:(unsigned int)arg2 documentID:(id)arg3;	// IMP=0x000000000001c8ae
- (void)_markClearedFromStage;	// IMP=0x000000000001c871
- (void)_clearTmpBouncedNumber;	// IMP=0x000000000001c84d
- (void)_bouncePhysicalNameToRepresentableName;	// IMP=0x000000000001c794
- (void)_migrateTmpBouncedNameToLocalName;	// IMP=0x000000000001c6ca
- (void)_generatedBouncedLogicalFilenameWithBounceNumber:(unsigned long long)arg1;	// IMP=0x000000000001c5ef
- (void)_setParentID:(id)arg1;	// IMP=0x000000000001c5d8
- (void)_markLiveFromStageAsFault:(_Bool)arg1;	// IMP=0x000000000001c528
- (void)_markLiveFromStageAsType:(BOOL)arg1;	// IMP=0x000000000001c140
- (void)_markReserved;	// IMP=0x000000000001c09a
- (void)updateFilenameFromPath:(id)arg1;	// IMP=0x000000000001bd74
- (void)updateLocationAndMetaFromFSAtPath:(id)arg1 itemID:(id)arg2 parentGlobalID:(id)arg3 isPackageFault:(_Bool)arg4 readonlyShareChild:(_Bool)arg5;	// IMP=0x000000000001b646
- (id)initWithRelativePath:(id)arg1 itemID:(id)arg2 parentGlobalID:(id)arg3;	// IMP=0x000000000001b491
- (id)initWithLocalStatInfo:(id)arg1;	// IMP=0x000000000001b360
- (id)initFromResultSet:(id)arg1 pos:(int)arg2;	// IMP=0x000000000001b092
- (void)updateFromFSAtPath:(id)arg1 itemID:(id)arg2 parentGlobalID:(id)arg3 isPackageFault:(_Bool)arg4 readonlyShareChild:(_Bool)arg5;	// IMP=0x000000000001ae01
- (void)_updateMetadataFromFSAtPath:(id)arg1 itemID:(id)arg2 parentGlobalID:(id)arg3 isPackageFault:(_Bool)arg4 readonlyShareChild:(_Bool)arg5;	// IMP=0x000000000001a9a2
- (void)_markLostAddingBackoffWithMode:(unsigned char)arg1 appLibrary:(id)arg2;	// IMP=0x000000000001a4e5
@property(readonly, nonatomic) NSNumber *lostStamp;
- (void)_markFound;	// IMP=0x000000000001a3f0
- (void)_markAlmostDead;	// IMP=0x000000000001a353
- (void)_clearGenerationID;	// IMP=0x000000000001a32f
- (void)_clearFileID;	// IMP=0x000000000001a2e2

@end

