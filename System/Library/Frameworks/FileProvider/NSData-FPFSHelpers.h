//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (FPFSHelpers)
+ (id)fp_dataWithFavoriteRank:(id)arg1;	// IMP=0x0060000000107e10
+ (id)fp_dataWithLastUsedDate:(id)arg1;	// IMP=0x0060000000107ccb
- (_Bool)getFileIDFromXattr:(unsigned long long *)arg1 docID:(unsigned int *)arg2 genCount:(unsigned long long *)arg3;	// IMP=0x001000000006c2e8
- (id)fp_favoriteRank;	// IMP=0x0010000000107ec6
- (id)fp_lastUsedDate;	// IMP=0x0010000000107d74
@end
