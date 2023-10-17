//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMBSQLQueryIterator.h"

__attribute__((visibility("hidden")))
@interface HMBLocalSQLIteratorRowRecord : HMBSQLQueryIterator
{
    int _zoneRowBindOffset;	// 8 = 0x8
    unsigned long long _returning;	// 16 = 0x10
    unsigned long long _zoneRow;	// 24 = 0x18
}

@property(readonly, nonatomic) int zoneRowBindOffset; // @synthesize zoneRowBindOffset=_zoneRowBindOffset;
@property(readonly, nonatomic) unsigned long long zoneRow; // @synthesize zoneRow=_zoneRow;
@property(readonly, nonatomic) unsigned long long returning; // @synthesize returning=_returning;
- (id)fetchRowFromStatement:(struct sqlite3_stmt *)arg1 skip:(_Bool *)arg2 updatedSequence:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x0000000000065df8
- (_Bool)bindPropertiesToStatement:(struct sqlite3_stmt *)arg1 error:(id *)arg2;	// IMP=0x0000000000065d9e
- (id)initWithSQLContext:(id)arg1 zoneRow:(unsigned long long)arg2 returning:(unsigned long long)arg3;	// IMP=0x0000000000065c26

@end
