//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CARDebugCollectionConfig : NSObject
{
    unsigned long long _cells;	// 8 = 0x8
    unsigned long long _columns;	// 16 = 0x10
    unsigned long long _rows;	// 24 = 0x18
    double _minimumLineSpacing;	// 32 = 0x20
    double _minimumInteritemSpacing;	// 40 = 0x28
    struct CGSize _intrinsictContentSize;	// 48 = 0x30
    struct CGSize _systemLayoutSize;	// 64 = 0x40
    struct UIEdgeInsets _sectionInset;	// 80 = 0x50
}

@property(readonly, nonatomic) struct CGSize systemLayoutSize; // @synthesize systemLayoutSize=_systemLayoutSize;
@property(readonly, nonatomic) struct CGSize intrinsictContentSize; // @synthesize intrinsictContentSize=_intrinsictContentSize;
@property(readonly, nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(readonly, nonatomic) double minimumLineSpacing; // @synthesize minimumLineSpacing=_minimumLineSpacing;
@property(readonly, nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(readonly, nonatomic) unsigned long long rows; // @synthesize rows=_rows;
@property(readonly, nonatomic) unsigned long long columns; // @synthesize columns=_columns;
@property(readonly, nonatomic) unsigned long long cells; // @synthesize cells=_cells;
- (id)init;	// IMP=0x001000000001ff85

@end

