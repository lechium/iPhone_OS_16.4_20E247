//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCItemDBRowIDJobIdentifier : NSObject
{
    long long _itemDBRowID;	// 8 = 0x8
}

@property(readonly, nonatomic) long long itemDBRowID; // @synthesize itemDBRowID=_itemDBRowID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003444ca
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000344467
- (_Bool)isEqualToItemDBRowIDIdentifier:(id)arg1;	// IMP=0x000000000034444e
@property(readonly) unsigned long long hash;
- (id)columnsValues;	// IMP=0x000000000034441b
- (id)columns;	// IMP=0x00000000003443f6
- (id)matchingJobsWhereSQLClause;	// IMP=0x00000000003443cd
@property(readonly, copy) NSString *description;
- (id)jobsDescription;	// IMP=0x0000000000344392
- (id)initWithItemDBRowID:(long long)arg1;	// IMP=0x0000000000344355

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
