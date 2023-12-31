//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface PDDPEEServiceConfig : PBCodable
{
    NSMutableArray *_defaultSyncZoneNames;	// 8 = 0x8
    int _minimumSearchKeyLength;	// 16 = 0x10
    NSString *_personlinkServiceContext;	// 24 = 0x18
    int _searchCacheTtl;	// 32 = 0x20
    NSMutableArray *_serviceBags;	// 40 = 0x28
    NSString *_serviceId;	// 48 = 0x30
    int _syncFetchInterval;	// 56 = 0x38
    NSMutableArray *_zoneSubscriptions;	// 64 = 0x40
    _Bool _analyticsOptedIn;	// 72 = 0x48
    _Bool _isRosterSearchAllowed;	// 73 = 0x49
    _Bool _useServerForRosterSearch;	// 74 = 0x4a
    struct {
        unsigned int minimumSearchKeyLength:1;
        unsigned int searchCacheTtl:1;
        unsigned int syncFetchInterval:1;
        unsigned int analyticsOptedIn:1;
        unsigned int isRosterSearchAllowed:1;
        unsigned int useServerForRosterSearch:1;
    } _has;	// 76 = 0x4c
}

+ (Class)defaultSyncZoneNamesType;	// IMP=0x00200000000a48b2
+ (Class)serviceBagType;	// IMP=0x00100000000a4705
+ (Class)zoneSubscriptionsType;	// IMP=0x00100000000a4633
- (void).cxx_destruct;	// IMP=0x00200000000a6aae
@property(nonatomic) _Bool analyticsOptedIn; // @synthesize analyticsOptedIn=_analyticsOptedIn;
@property(nonatomic) int searchCacheTtl; // @synthesize searchCacheTtl=_searchCacheTtl;
@property(nonatomic) int syncFetchInterval; // @synthesize syncFetchInterval=_syncFetchInterval;
@property(retain, nonatomic) NSMutableArray *defaultSyncZoneNames; // @synthesize defaultSyncZoneNames=_defaultSyncZoneNames;
@property(nonatomic) _Bool useServerForRosterSearch; // @synthesize useServerForRosterSearch=_useServerForRosterSearch;
@property(nonatomic) int minimumSearchKeyLength; // @synthesize minimumSearchKeyLength=_minimumSearchKeyLength;
@property(nonatomic) _Bool isRosterSearchAllowed; // @synthesize isRosterSearchAllowed=_isRosterSearchAllowed;
@property(retain, nonatomic) NSMutableArray *serviceBags; // @synthesize serviceBags=_serviceBags;
@property(retain, nonatomic) NSMutableArray *zoneSubscriptions; // @synthesize zoneSubscriptions=_zoneSubscriptions;
@property(retain, nonatomic) NSString *personlinkServiceContext; // @synthesize personlinkServiceContext=_personlinkServiceContext;
@property(retain, nonatomic) NSString *serviceId; // @synthesize serviceId=_serviceId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000a6572
- (unsigned long long)hash;	// IMP=0x00100000000a63f4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a6168
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000a5c35
- (void)copyTo:(id)arg1;	// IMP=0x00100000000a5967
- (void)writeTo:(id)arg1;	// IMP=0x00100000000a5571
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000a5564
- (id)dictionaryRepresentation;	// IMP=0x00100000000a4a51
- (id)description;	// IMP=0x00100000000a49a2
@property(nonatomic) _Bool hasAnalyticsOptedIn;
@property(nonatomic) _Bool hasSearchCacheTtl;
@property(nonatomic) _Bool hasSyncFetchInterval;
- (id)defaultSyncZoneNamesAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000a4895
- (unsigned long long)defaultSyncZoneNamesCount;	// IMP=0x00100000000a4878
- (void)addDefaultSyncZoneNames:(id)arg1;	// IMP=0x00100000000a480e
- (void)clearDefaultSyncZoneNames;	// IMP=0x00100000000a47f1
@property(nonatomic) _Bool hasUseServerForRosterSearch;
@property(nonatomic) _Bool hasMinimumSearchKeyLength;
@property(nonatomic) _Bool hasIsRosterSearchAllowed;
- (id)serviceBagAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000a46e8
- (unsigned long long)serviceBagsCount;	// IMP=0x00100000000a46cb
- (void)addServiceBag:(id)arg1;	// IMP=0x00100000000a4661
- (void)clearServiceBags;	// IMP=0x00100000000a4644
- (id)zoneSubscriptionsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000a4616
- (unsigned long long)zoneSubscriptionsCount;	// IMP=0x00100000000a45f9
- (void)addZoneSubscriptions:(id)arg1;	// IMP=0x00100000000a458f
- (void)clearZoneSubscriptions;	// IMP=0x00100000000a4572
@property(readonly, nonatomic) _Bool hasPersonlinkServiceContext;
@property(readonly, nonatomic) _Bool hasServiceId;

@end

