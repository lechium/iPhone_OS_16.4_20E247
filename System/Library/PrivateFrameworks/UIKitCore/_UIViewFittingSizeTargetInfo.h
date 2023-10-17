//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIViewFittingSizeTargetInfo : NSObject
{
    _Bool _dummy;	// 8 = 0x8
    float _horizontalPriority;	// 12 = 0xc
    float _verticalPriority;	// 16 = 0x10
    struct CGSize _targetSize;	// 24 = 0x18
}

@property(nonatomic, getter=isDummy) _Bool dummy; // @synthesize dummy=_dummy;
@property(readonly, nonatomic) float verticalPriority; // @synthesize verticalPriority=_verticalPriority;
@property(readonly, nonatomic) float horizontalPriority; // @synthesize horizontalPriority=_horizontalPriority;
@property(readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
- (id)description;	// IMP=0x000000000136c90e
- (unsigned long long)hash;	// IMP=0x000000000136c8e4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000136c895
- (_Bool)isEqualToTargetInfo:(id)arg1;	// IMP=0x000000000136c7ed
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000136c7e2
- (id)initWithTargetSize:(struct CGSize)arg1 horizontalPriority:(float)arg2 verticalPriority:(float)arg3;	// IMP=0x000000000136c772

@end
