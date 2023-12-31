//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ABSContactsReality;

@interface ABSContactsSyncManager
{
    ABSContactsReality *_reality;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000024070
- (void)deleteUnmarked;	// IMP=0x0010000000023a0a
- (void)clearShadowMarks;	// IMP=0x00100000000239c6
- (void)deleteShadow;	// IMP=0x0010000000023982
- (void)remove:(id)arg1;	// IMP=0x0010000000023845
- (void)_deleteContactForGUID_LOCKED:(id)arg1;	// IMP=0x001000000002349d
- (void)addOrUpdateContactIn:(id)arg1 forSession:(id)arg2;	// IMP=0x0010000000022d7b
- (void)addBatch:(id)arg1 forSession:(id)arg2;	// IMP=0x0010000000022a45
- (void)_modifyContactFromContactWrapper_LOCKED:(id)arg1 toContact:(id)arg2;	// IMP=0x0010000000022316
- (void)_addContactFromContactWrapper_LOCKED:(id)arg1 container:(id)arg2;	// IMP=0x00100000000218d8
- (void);	// IMP=0x00100000000217a4
- (id)reality;	// IMP=0x0010000000021733

@end

