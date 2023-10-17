//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCDownloadJobIdentifier : NSObject
{
    int _kind;	// 8 = 0x8
    unsigned long long _itemDBRowID;	// 16 = 0x10
    NSString *_etag;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a7ac0
@property(readonly, nonatomic) int kind; // @synthesize kind=_kind;
@property(readonly, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(readonly, nonatomic) unsigned long long itemDBRowID; // @synthesize itemDBRowID=_itemDBRowID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a7a98
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a7a35
- (_Bool)isEqualToDownloadJobIdentifier:(id)arg1;	// IMP=0x00000000000a79d6
@property(readonly) unsigned long long hash;
- (id)columnsValues;	// IMP=0x00000000000a7973
- (id)columns;	// IMP=0x00000000000a794e
- (id)matchingJobsWhereSQLClause;	// IMP=0x00000000000a7919
@property(readonly, copy) NSString *description;
- (id)jobsDescription;	// IMP=0x00000000000a78ae
- (id)initWithDBRowID:(unsigned long long)arg1 etag:(id)arg2 kind:(int)arg3;	// IMP=0x00000000000a782d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
