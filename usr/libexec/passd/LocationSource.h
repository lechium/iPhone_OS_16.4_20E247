//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface LocationSource
{
}

+ (id)urlPredicate:(id)arg1;	// IMP=0x00400000003f4cae
+ (id)locationSourcePIDPredicate:(id)arg1;	// IMP=0x00100000003f4c8b
+ (id)anyInDatabase:(id)arg1 withURL:(id)arg2;	// IMP=0x00100000003f4bf6
+ (id)anyInDatabase:(id)arg1 withLocationSourcePID:(id)arg2;	// IMP=0x00100000003f4b6a
+ (id)insertLocationSourceWithURL:(id)arg1 forPass:(id)arg2 type:(int)arg3 inDatabase:(id)arg4;	// IMP=0x00100000003f4aac
+ (id)foreignKeyColumnForTable:(id)arg1;	// IMP=0x00100000003f4955
+ (id)databaseTable;	// IMP=0x00100000003f4948
- (_Bool)deleteFromDatabase;	// IMP=0x00400000003f4d1d
- (id)initWithLocationURL:(id)arg1 type:(int)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003f4984

@end
