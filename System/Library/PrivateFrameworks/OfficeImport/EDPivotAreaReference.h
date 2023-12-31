//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EDPivotAreaReference : NSObject
{
    _Bool mByPosition;	// 8 = 0x8
    _Bool mRelative;	// 9 = 0x9
    _Bool mSelected;	// 10 = 0xa
    unsigned long long mFieldId;	// 16 = 0x10
    unsigned long long mCount;	// 24 = 0x18
}

+ (id)pivotAreaReference;	// IMP=0x00600000003a4da7
- (id)description;	// IMP=0x00000000003a4e1f
- (void)setCount:(unsigned long long)arg1;	// IMP=0x00000000003a4e15
- (unsigned long long)count;	// IMP=0x00000000003a4e0b
- (void)setFieldId:(unsigned long long)arg1;	// IMP=0x00000000003a4e01
- (unsigned long long)fieldId;	// IMP=0x00000000003a4df7
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000003a4dee
- (_Bool)selected;	// IMP=0x00000000003a4de5
- (void)setRelative:(_Bool)arg1;	// IMP=0x00000000003a4ddc
- (_Bool)relative;	// IMP=0x00000000003a4dd3
- (void)setByPosition:(_Bool)arg1;	// IMP=0x00000000003a4dca
- (_Bool)byPosition;	// IMP=0x00000000003a4dc1
- (id)init;	// IMP=0x00000000003a4d62

@end

