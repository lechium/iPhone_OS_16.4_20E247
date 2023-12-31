//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;

@interface ChildItemsViewModel : NSObject
{
    NSArray *_childItems;	// 8 = 0x8
    MISSING_TYPE *_numberOfRows;	// 16 = 0x10
    unsigned long long _numberOfColumns;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000011f24e
@property(nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) unsigned long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(readonly, nonatomic) NSArray *childItems; // @synthesize childItems=_childItems;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000011f117
- (void)calculateModelWithChildItemsSpacing:(double)arg1 font:(id)arg2 maxWidth:(double)arg3 buttonContentEdgeInsets:(struct UIEdgeInsets)arg4;	// IMP=0x001000000011ebf2
@property(readonly, nonatomic) unsigned long long childItemsCount;
- (id)initWithChildItems:(id)arg1 childItemsSpacing:(double)arg2 font:(id)arg3 maxWidth:(double)arg4 buttonContentEdgeInsets:(struct UIEdgeInsets)arg5;	// IMP=0x001000000011eb03

@end

