//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSProgressReportingCapability.h>

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSProgressReportingCapability (PDDatabaseEntity)
+ (long long)migrationOrder;	// IMP=0x00200000000d28c3
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000d2843
+ (id)entityName;	// IMP=0x00100000000d25a1
+ (id)recordType;	// IMP=0x001000000018c566
- (void)bindTo:(id)arg1;	// IMP=0x00100000000d26c6
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x00100000000d25ae
@property(readonly, nonatomic) NSString *parentReferenceName;
@property(readonly, nonatomic) long long syncableItemType;
- (long long)syncOrder;	// IMP=0x001000000018c7b8
- (void)populate:(id)arg1;	// IMP=0x001000000018c6b7
- (id)initWithCKRecord:(id)arg1;	// IMP=0x001000000018c573

// Remaining properties
@property(readonly, nonatomic) unsigned long long changeHash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end

