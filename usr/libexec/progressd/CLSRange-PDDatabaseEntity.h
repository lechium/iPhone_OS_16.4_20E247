//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSRange.h>

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSRange (PDDatabaseEntity)
+ (long long)migrationOrder;	// IMP=0x002000000008a734
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x001000000008a696
+ (id)entityName;	// IMP=0x001000000008a457
+ (id)recordType;	// IMP=0x00100000000a265f
+ (int)entityType;	// IMP=0x001000000016344d
+ (int)syncType;	// IMP=0x0010000000163442
- (void)bindTo:(id)arg1;	// IMP=0x001000000008a574
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x001000000008a464
@property(readonly, nonatomic) NSString *parentReferenceName;
@property(readonly, nonatomic) long long syncableItemType;
- (long long)syncOrder;	// IMP=0x00100000000a2a0e
- (void)populate:(id)arg1;	// IMP=0x00100000000a274e
- (id)initWithCKRecord:(id)arg1;	// IMP=0x00100000000a266c
- (id)generateInsightEventsWithDatabase:(id)arg1;	// IMP=0x00100000000de8f6

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: changeHash
// Property attributes: (null)

@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end

