//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKSQLiteTableGroup.h"

@class CKSQLiteKeyValueStore;

@interface CKSQLiteKeyValueTableGroup : CKSQLiteTableGroup
{
    CKSQLiteKeyValueStore *_store;	// 8 = 0x8
}

+ (id)keyValueStoreInDatabase:(id)arg1;	// IMP=0x00600000000aa732
- (void).cxx_destruct;	// IMP=0x00000000000aa862
- (id)createTables;	// IMP=0x00000000000aa7fc

@end
