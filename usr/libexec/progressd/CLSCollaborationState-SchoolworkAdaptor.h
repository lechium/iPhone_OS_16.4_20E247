//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSCollaborationState.h>

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSCollaborationState (SchoolworkAdaptor)
+ (id)entityWillChangeNotificationName;	// IMP=0x001000000018bac3
+ (long long)migrationOrder;	// IMP=0x001000000018bab8
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x001000000018b7ae
+ (id)hashableColumnNames;	// IMP=0x001000000018a9d5
+ (id)entityName;	// IMP=0x001000000018a9c8
- (_Bool)isAskedToTryAgain;	// IMP=0x00100000000b2c79
- (_Bool)isReturnedActivity;	// IMP=0x00100000000b2c26
- (_Bool)isCompletedActivity;	// IMP=0x00100000000b2b60
- (_Bool)isIncompleteActivity;	// IMP=0x00100000000b2b11
- (_Bool)isCompletedHandout;	// IMP=0x00100000000b2ac2
- (_Bool)isIncompleteHandout;	// IMP=0x00100000000b2a6b
- (void)willBeDeletedFromDatabase:(id)arg1;	// IMP=0x001000000018b927
- (void)bindTo:(id)arg1;	// IMP=0x001000000018b235
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x001000000018addd
@property(readonly, nonatomic) unsigned long long changeHash;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end

