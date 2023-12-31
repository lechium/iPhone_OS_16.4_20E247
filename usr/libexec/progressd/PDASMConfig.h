//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol PDDatabaseValue;

@interface PDASMConfig : NSObject
{
    _Bool _rosterSearchAllowed;	// 8 = 0x8
    _Bool _eduMAID;	// 9 = 0x9
    _Bool _useServerForRosterSearch;	// 10 = 0xa
    _Bool _asmAnalyticsEnabled;	// 11 = 0xb
    NSString *_serviceID;	// 16 = 0x10
    NSString *_personLinkContext;	// 24 = 0x18
    NSArray *_zoneSubscriptions;	// 32 = 0x20
    NSArray *_defaultSyncZoneNames;	// 40 = 0x28
    long long _minimumSearchKeyLength;	// 48 = 0x30
    long long _syncFetchInterval;	// 56 = 0x38
    long long _searchCacheTTL;	// 64 = 0x40
}

+ (id)identityColumnName;	// IMP=0x00200000000c1391
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000c10c4
+ (long long)migrationOrder;	// IMP=0x00100000000c10b9
+ (id)entityName;	// IMP=0x00100000000c09a8
- (void).cxx_destruct;	// IMP=0x00200000000c1644
- (id)dictionaryRepresentation;	// IMP=0x00100000000c13ab
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
- (void)bindTo:(id)arg1;	// IMP=0x00100000000c0d3d
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x00100000000c09b5

// Remaining properties
@property(readonly, nonatomic) unsigned long long changeHash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

