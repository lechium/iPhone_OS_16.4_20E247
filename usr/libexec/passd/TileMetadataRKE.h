//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TileMetadataRKE
{
}

+ (id)databaseTable;	// IMP=0x004000000006ba68
+ (id)_predicateForBaseMetadata:(id)arg1;	// IMP=0x001000000006b9e1
+ (void)deleteEntitiesForBaseMetadata:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000006b943
+ (void)inflateMetadata:(id)arg1 forBaseMetadata:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000006b6d7
+ (id)insertMetadata:(id)arg1 forBaseMetadata:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000006b4c8
- (id)initWithMetdata:(id)arg1 forBaseMetadata:(id)arg2 inDatabase:(id)arg3;	// IMP=0x004000000006b359

@end
