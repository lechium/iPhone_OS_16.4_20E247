//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSSQLForeignKey, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLForeignEntityKey
{
    NSString *_name;	// 48 = 0x30
    NSSQLForeignKey *_foreignKey;	// 56 = 0x38
    NSNumber *_columnValue;	// 64 = 0x40
}

- (void)copyValuesForReadOnlyFetch:(id)arg1;	// IMP=0x000000000019943a
- (void)dealloc;	// IMP=0x00000000001993d3
- (id)name;	// IMP=0x00000000001993c2
- (id)foreignKey;	// IMP=0x00000000001993b1
- (id)toOneRelationship;	// IMP=0x0000000000199386
- (id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2;	// IMP=0x000000000019928e
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;	// IMP=0x0000000000199233
- (id)initWithEntity:(id)arg1 foreignKey:(id)arg2;	// IMP=0x0000000000199092

@end

