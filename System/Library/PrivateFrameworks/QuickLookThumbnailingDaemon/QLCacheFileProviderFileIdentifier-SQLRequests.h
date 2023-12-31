//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLookThumbnailing/QLCacheFileProviderFileIdentifier.h>

@interface QLCacheFileProviderFileIdentifier (SQLRequests)
+ (_Bool)removeFromDatabase:(id)arg1 fileWithCacheId:(unsigned long long)arg2;	// IMP=0x005000000000251c
+ (id)whereClauseToFindCacheId;	// IMP=0x00500000000023d6
+ (id)queryStringToFindCacheIds;	// IMP=0x00500000000023c9
+ (unsigned long long)rowIdFromCacheId:(unsigned long long)arg1;	// IMP=0x0050000000002294
+ (unsigned long long)cacheIdFromRowId:(unsigned long long)arg1;	// IMP=0x005000000000228b
+ (id)tableName;	// IMP=0x005000000000227e
- (void)bindInFindCacheIdStatement:(struct sqlite3_stmt *)arg1 database:(id)arg2 startingAtIndex:(unsigned int)arg3 gettingNextIndex:(unsigned int *)arg4;	// IMP=0x00100000000023f8
- (struct sqlite3_stmt *)statementToFindCacheIdInDatabase:(id)arg1;	// IMP=0x001000000000229d
@end

