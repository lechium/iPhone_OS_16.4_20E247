//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionViewItemKey : NSObject
{
    NSIndexPath *_indexPath;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    _Bool _isClone;	// 24 = 0x18
    unsigned long long _type;	// 32 = 0x20
}

+ (id)collectionItemKeyForLayoutAttributes:(id)arg1;	// IMP=0x00100000003b9f8b
+ (id)collectionItemKeyForDecorationViewOfKind:(id)arg1 andIndexPath:(id)arg2;	// IMP=0x00100000003b9f2a
+ (id)collectionItemKeyForSupplementaryViewOfKind:(id)arg1 andIndexPath:(id)arg2;	// IMP=0x00100000003b9ec9
+ (id)collectionItemKeyForCellWithIndexPath:(id)arg1;	// IMP=0x00100000003b9e8a
- (void).cxx_destruct;	// IMP=0x00000000003ba5e5
@property(readonly, nonatomic) _Bool isClone; // @synthesize isClone=_isClone;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (unsigned long long)hash;	// IMP=0x00000000003ba5a8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003ba4f5
- (id)copyAsClone:(_Bool)arg1;	// IMP=0x00000000003ba41a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003ba40f
- (id)description;	// IMP=0x00000000003ba126
- (id)initWithType:(unsigned long long)arg1 indexPath:(id)arg2 identifier:(id)arg3 clone:(_Bool)arg4;	// IMP=0x00000000003ba093
- (id)initWithType:(unsigned long long)arg1 indexPath:(id)arg2 identifier:(id)arg3;	// IMP=0x00000000003ba07e

@end

