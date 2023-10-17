//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSFaultHandler, NSMutableDictionary, NSSQLRowCache, NSSQLSavePlan, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLSaveChangesRequestContext
{
    NSDictionary *_metadataToWrite;	// 88 = 0x58
    NSSQLSavePlan *_savePlan;	// 96 = 0x60
    NSFaultHandler *_faultHandler;	// 104 = 0x68
    NSArray *_objectIDsInsertUpdatedToPruneDATrigger;	// 112 = 0x70
    NSArray *_objectIDsUpdatedToPruneDATrigger;	// 120 = 0x78
    NSSet *_objectIDsToPruneTrigger;	// 128 = 0x80
    NSMutableDictionary *_originalCachedRows;	// 136 = 0x88
    NSMutableDictionary *_updateMasksForHistoryTracking;	// 144 = 0x90
    NSString *_externalDataReferencesDirectory;	// 152 = 0x98
    NSString *_externalDataLinksDirectory;	// 160 = 0xa0
    NSString *_fileBackedFuturesDirectory;	// 168 = 0xa8
    NSSQLRowCache *_primaryRowCache;	// 176 = 0xb0
    NSSQLRowCache *_contextGenerationRowCache;	// 184 = 0xb8
}

- (_Bool)executeRequestCore:(id *)arg1;	// IMP=0x00000000002e92dc
- (void)executeEpilogue;	// IMP=0x00000000002e8264
- (void)executePrologue;	// IMP=0x00000000002e820c
- (_Bool)isWritingRequest;	// IMP=0x00000000002e8204
- (id)rowCache;	// IMP=0x00000000002e81f2
- (void)dealloc;	// IMP=0x00000000002e808e
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;	// IMP=0x00000000002e7ed4

@end
