//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, STProcessBlueprintChangesOperationResultObject;

@interface STProcessBlueprintChangesOperation
{
    _Bool _installOnly;	// 8 = 0x8
    NSString *_currentBlueprintHash;	// 16 = 0x10
}

- (void);	// IMP=0x0020000000066abc
@property(readonly, nonatomic) _Bool installOnly; // @synthesize installOnly=_installOnly;
@property(readonly, copy, nonatomic) NSString *currentBlueprintHash; // @synthesize currentBlueprintHash=_currentBlueprintHash;
- (id)_requestFromBlueprints:(id)arg1 forUser:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000066588
- (_Bool)_migrateBlueprintsToVersion2CategoriesWithContext:(id)arg1 user:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000661eb
- (_Bool)_cleanupDuplicateRestrictionsBlueprintsWithContext:(id)arg1 user:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000065e41
- (_Bool)_cleanupDeletedUserBlueprintsWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000065bc6
- (_Bool)_cleanupDuplicateBlueprintConfigurationsWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000065590
- (void)main;	// IMP=0x001000000006417a
- (id)initWithCurrentHash:(id)arg1 installOnly:(_Bool)arg2 persistenceController:(id)arg3;	// IMP=0x00100000000640e4

// Remaining properties
@property(readonly) __weak STProcessBlueprintChangesOperationResultObject *resultObject; // @dynamic resultObject;

@end
