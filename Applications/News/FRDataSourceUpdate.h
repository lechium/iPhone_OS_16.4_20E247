//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSDictionary, NSIndexSet;

@interface FRDataSourceUpdate : NSObject
{
    NSIndexSet *_insertedSections;	// 8 = 0x8
    NSArray *_insertedIndexPaths;	// 16 = 0x10
    MISSING_TYPE *_deletedSections;	// 24 = 0x18
    NSArray *_deletedIndexPaths;	// 32 = 0x20
    NSIndexSet *_updatedSections;	// 40 = 0x28
    NSArray *_updatedIndexPaths;	// 48 = 0x30
    NSDictionary *_movedSections;	// 56 = 0x38
    NSDictionary *_movedIndexPaths;	// 64 = 0x40
}

+ (void)performOnCollectionView:(id)arg1 withUpdate:(CDUnknownBlockType)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x004000000007f618
- (void).cxx_destruct;	// IMP=0x002000000007fcbc
@property(copy, nonatomic) NSDictionary *movedIndexPaths; // @synthesize movedIndexPaths=_movedIndexPaths;
@property(copy, nonatomic) NSDictionary *movedSections; // @synthesize movedSections=_movedSections;
@property(copy, nonatomic) NSArray *updatedIndexPaths; // @synthesize updatedIndexPaths=_updatedIndexPaths;
@property(copy, nonatomic) NSIndexSet *updatedSections; // @synthesize updatedSections=_updatedSections;
@property(copy, nonatomic) NSArray *deletedIndexPaths; // @synthesize deletedIndexPaths=_deletedIndexPaths;
@property(copy, nonatomic) NSIndexSet *deletedSections; // @synthesize deletedSections=_deletedSections;
@property(copy, nonatomic) NSArray *insertedIndexPaths; // @synthesize insertedIndexPaths=_insertedIndexPaths;
@property(copy, nonatomic) NSIndexSet *insertedSections; // @synthesize insertedSections=_insertedSections;

@end
