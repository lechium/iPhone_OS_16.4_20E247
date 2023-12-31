//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PDDatabaseValue;

@interface PDProperty : NSObject
{
    NSString *_name;	// 8 = 0x8
}

+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x00200000001917bc
+ (id)valueSQLType;	// IMP=0x00100000001917a7
+ (id)identityColumnName;	// IMP=0x00100000001916eb
+ (id)entityName;	// IMP=0x001000000019162e
- (void).cxx_destruct;	// IMP=0x0020000000191975
- (void)bindTo:(id)arg1;	// IMP=0x001000000019178c
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x0010000000191712
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;

// Remaining properties
@property(readonly, nonatomic) unsigned long long changeHash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

