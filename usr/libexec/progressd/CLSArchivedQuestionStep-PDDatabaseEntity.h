//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSArchivedQuestionStep.h>

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSArchivedQuestionStep (PDDatabaseEntity)
+ (long long)migrationOrder;	// IMP=0x00200000000137bc
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000135e1
+ (id)entityName;	// IMP=0x00100000000131b4
- (void)willBeDeletedFromDatabase:(id)arg1;	// IMP=0x002000000001367f
- (void)bindTo:(id)arg1;	// IMP=0x001000000001338a
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x00100000000131c1

// Remaining properties
@property(readonly, nonatomic) unsigned long long changeHash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end
