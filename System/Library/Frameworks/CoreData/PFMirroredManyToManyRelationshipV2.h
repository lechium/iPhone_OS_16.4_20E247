//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface PFMirroredManyToManyRelationshipV2
{
}

+ (_Bool)_isValidMirroredRelationshipRecord:(id)arg1 values:(id)arg2;	// IMP=0x0080000000226710
- (void)populateRecordValues:(id)arg1;	// IMP=0x000000000022647b
- (id)initWithRecord:(id)arg1 andValues:(id)arg2 withManagedObjectModel:(id)arg3 andType:(unsigned long long)arg4;	// IMP=0x0000000000226110
- (id)initWithRecordID:(id)arg1 forRecordWithID:(id)arg2 relatedToRecordWithID:(id)arg3 byRelationship:(id)arg4 withInverse:(id)arg5 andType:(unsigned long long)arg6;	// IMP=0x0000000000225fa6

@end

