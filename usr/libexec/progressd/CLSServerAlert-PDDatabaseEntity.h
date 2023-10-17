//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSServerAlert.h>

@class NSArray, NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSServerAlert (PDDatabaseEntity)
+ (long long)migrationOrder;	// IMP=0x00200000000ee3f7
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000ee377
+ (id)hashableColumnNames;	// IMP=0x00100000000eda4b
+ (id)entityName;	// IMP=0x00100000000eda3e
- (void)bindTo:(id)arg1;	// IMP=0x00200000000edfc0
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x00100000000edc80
@property(readonly, nonatomic) NSArray *immutableColumnNames;
@property(readonly, nonatomic) unsigned long long changeHash;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isImmutabilityEnforced) _Bool enforceImmutability;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end
