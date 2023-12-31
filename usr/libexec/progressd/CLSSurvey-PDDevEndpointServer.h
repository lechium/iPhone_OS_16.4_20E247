//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSSurvey.h>

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSSurvey (PDDevEndpointServer)
+ (long long)migrationOrder;	// IMP=0x00100000000d1613
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000d1575
+ (id)hashableColumnNames;	// IMP=0x00100000000d1071
+ (id)entityName;	// IMP=0x00100000000d1064
+ (id)payloadsForObject:(id)arg1 withSyncItem:(id)arg2 database:(id)arg3;	// IMP=0x0010000000172990
+ (id)payloadsForDeletedSurvey:(id)arg1 classIDs:(id)arg2 database:(id)arg3;	// IMP=0x00100000001725da
+ (id)payloadForObject:(id)arg1 action:(int)arg2 database:(id)arg3;	// IMP=0x001000000017248e
+ (id)recordType;	// IMP=0x001000000017215c
- (_Bool)canCopyToDatabase:(id)arg1;	// IMP=0x00100000000c8bb0
- (void)willBeDeletedFromDatabase:(id)arg1;	// IMP=0x00100000000d161e
- (void)bindTo:(id)arg1;	// IMP=0x00100000000d12fa
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x00100000000d10ee
- (id)payloadsWithClassIDs:(id)arg1 dependencies:(id)arg2;	// IMP=0x0010000000172dda
@property(readonly, nonatomic) NSString *parentReferenceName;
@property(readonly, nonatomic) long long syncableItemType;
- (long long)syncOrder;	// IMP=0x001000000017246e
- (long long)syncBackend:(id)arg1;	// IMP=0x00100000001723b4
- (void)populate:(id)arg1;	// IMP=0x0010000000172293
- (id)initWithCKRecord:(id)arg1;	// IMP=0x0010000000172169

// Remaining properties
@property(readonly, nonatomic) unsigned long long changeHash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end

