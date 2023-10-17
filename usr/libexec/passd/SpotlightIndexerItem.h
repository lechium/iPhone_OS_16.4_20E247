//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDate, NSString;

@interface SpotlightIndexerItem
{
    NSString *_uniqueIdentifier;	// 24 = 0x18
    NSString *_domainIdentifier;	// 32 = 0x20
    unsigned long long _type;	// 40 = 0x28
    unsigned long long _status;	// 48 = 0x30
    unsigned long long _tryCount;	// 56 = 0x38
    NSDate *_lastModifiedDate;	// 64 = 0x40
    NSString *_errorDomain;	// 72 = 0x48
    long long _errorCode;	// 80 = 0x50
    NSData *_searchableItemData;	// 88 = 0x58
}

+ (id)_propertySettersForIndexerItem;	// IMP=0x0040000000367b4c
+ (id)_predicateForActionableItemsInTheFuture;	// IMP=0x00100000003679d6
+ (id)_predicateForActionableItems;	// IMP=0x0010000000367860
+ (id)_predicateForRecentErrors;	// IMP=0x0010000000367648
+ (id)_predicateForNoErrorsOrNoRecentErrors;	// IMP=0x00100000003673d1
+ (id)_predicateForType:(unsigned long long)arg1;	// IMP=0x001000000036735e
+ (id)_predicateForStatus:(unsigned long long)arg1;	// IMP=0x00100000003672eb
+ (id)_predicateForDomainIdentifier:(id)arg1;	// IMP=0x00100000003672c8
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x00100000003672a5
+ (id)itemCountsOfType:(unsigned long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000366f63
+ (_Bool)hasFutureActionableItemsInDatabase:(id)arg1;	// IMP=0x0010000000366eb9
+ (id)batchOfActionableItemsInDatabase:(id)arg1 withCount:(unsigned long long)arg2;	// IMP=0x0010000000366bc1
+ (id)itemWithUniqueIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000366b35
+ (void)updateItemsWithDomainIdentifier:(id)arg1 type:(unsigned long long)arg2 status:(unsigned long long)arg3 error:(id)arg4 inDatabase:(id)arg5;	// IMP=0x0010000000366805
+ (void)insertOrUpdateWithIdentifier:(id)arg1 domainIdentifier:(id)arg2 searchableItemData:(id)arg3 type:(unsigned long long)arg4 status:(unsigned long long)arg5 error:(id)arg6 inDatabase:(id)arg7;	// IMP=0x0010000000366219
+ (id)databaseTable;	// IMP=0x001000000036609c
- (void).cxx_destruct;	// IMP=0x00200000003681dc
@property(retain, nonatomic) NSData *searchableItemData; // @synthesize searchableItemData=_searchableItemData;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(retain, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(nonatomic) unsigned long long tryCount; // @synthesize tryCount=_tryCount;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)dictionaryRepresentation;	// IMP=0x0010000000367ed8
- (id)initWithPersistentID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003660a9

@end
