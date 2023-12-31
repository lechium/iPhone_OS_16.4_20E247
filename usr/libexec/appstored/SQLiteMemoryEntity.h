//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface SQLiteMemoryEntity : NSObject
{
    long long _databaseID;	// 8 = 0x8
    NSMutableDictionary *_propertyValues;	// 16 = 0x10
    NSMutableDictionary *_externalPropertyValues;	// 24 = 0x18
}

+ (id)defaultProperties;	// IMP=0x00200000000ca4d5
+ (Class)databaseEntityClass;	// IMP=0x00100000000ca4c4
- (void).cxx_destruct;	// IMP=0x00200000000caa55
@property(readonly, copy, nonatomic) NSDictionary *externalPropertyValues; // @synthesize externalPropertyValues=_externalPropertyValues;
@property(readonly, copy, nonatomic) NSDictionary *propertyValues; // @synthesize propertyValues=_propertyValues;
@property(nonatomic) long long databaseID; // @synthesize databaseID=_databaseID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000ca9dc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000ca89f
- (unsigned long long)hash;	// IMP=0x00100000000ca889
- (id)description;	// IMP=0x00100000000ca803
- (id)valueForExternalProperty:(id)arg1;	// IMP=0x00100000000ca7ed
- (id)valueForProperty:(id)arg1;	// IMP=0x00100000000ca7d7
- (void)setValues:(id *)arg1 forExternalProperties:(const id *)arg2 count:(long long)arg3;	// IMP=0x00100000000ca75a
- (void)setValue:(id)arg1 forExternalProperty:(id)arg2;	// IMP=0x00100000000ca6ce
- (void)setValuesWithDictionary:(id)arg1;	// IMP=0x00100000000ca6b8
- (void)setValues:(id *)arg1 forProperties:(const id *)arg2 count:(long long)arg3;	// IMP=0x00100000000ca63b
- (void)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x00100000000ca5af
- (void)setExternalValuesWithDictionary:(id)arg1;	// IMP=0x00100000000ca599
- (void)reloadFromDatabaseEntity:(id)arg1 properties:(id)arg2;	// IMP=0x00100000000ca4e2
- (id)initWithPropertyValues:(id)arg1;	// IMP=0x00100000000ca4a6
- (id)initWithDatabaseEntity:(id)arg1 properties:(id)arg2;	// IMP=0x00100000000ca3fe
- (id)initWithDatabaseID:(long long)arg1 propertyValues:(id)arg2 externalPropertyValues:(id)arg3;	// IMP=0x00100000000ca328
- (id)init;	// IMP=0x00100000000ca30a

@end

