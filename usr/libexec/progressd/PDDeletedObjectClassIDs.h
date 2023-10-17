//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol PDDatabaseValue;

@interface PDDeletedObjectClassIDs : NSObject
{
    NSString *_objectID;	// 8 = 0x8
    NSArray *_classIDs;	// 16 = 0x10
}

+ (id)identityColumnName;	// IMP=0x00200000000d2b6d
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000d2aed
+ (id)entityName;	// IMP=0x00100000000d28ce
- (void).cxx_destruct;	// IMP=0x00200000000d2b88
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
- (void)bindTo:(id)arg1;	// IMP=0x00100000000d2a1f
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x00100000000d28db

// Remaining properties
@property(readonly, nonatomic) unsigned long long changeHash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
