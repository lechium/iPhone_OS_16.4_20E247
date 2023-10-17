//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol PDDatabaseValue;

@interface PDAppUsage : NSObject
{
    _Bool _starting;	// 8 = 0x8
    _Bool _ignoreSignal;	// 9 = 0x9
    NSString *_objectID;	// 16 = 0x10
    NSString *_activityID;	// 24 = 0x18
    NSString *_bundleIdentifier;	// 32 = 0x20
    NSDate *_startDate;	// 40 = 0x28
    NSDate *_endDate;	// 48 = 0x30
    NSDate *_dateCreated;	// 56 = 0x38
}

+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x002000000008923e
+ (id)identityColumnName;	// IMP=0x00100000000890f1
+ (id)entityName;	// IMP=0x0010000000088f45
- (void).cxx_destruct;	// IMP=0x00200000000894c9
- (void)bindTo:(id)arg1;	// IMP=0x0010000000089118
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x0010000000088f52

// Remaining properties
@property(readonly, nonatomic) unsigned long long changeHash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
