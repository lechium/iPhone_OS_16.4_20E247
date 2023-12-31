//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EDTableFilter : NSObject
{
    int mScale;	// 8 = 0x8
    int mOperator;	// 12 = 0xc
    double mValue;	// 16 = 0x10
    double mFilterValue;	// 24 = 0x18
}

+ (id)edTableFilter;	// IMP=0x00600000003be898
- (id)description;	// IMP=0x00000000003be901
- (void)setOperatorType:(int)arg1;	// IMP=0x00000000003be8f8
- (int)operatorType;	// IMP=0x00000000003be8ef
- (void)setScale:(int)arg1;	// IMP=0x00000000003be8e6
- (int)scale;	// IMP=0x00000000003be8dd
- (void)setFilterValue:(double)arg1;	// IMP=0x00000000003be8d2
- (double)filterValue;	// IMP=0x00000000003be8c7
- (void)setValue:(double)arg1;	// IMP=0x00000000003be8bc
- (double)value;	// IMP=0x00000000003be8b1

@end

