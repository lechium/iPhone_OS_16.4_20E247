//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

__attribute__((visibility("hidden")))
@interface PUSectionedGridLayoutAttributes : UICollectionViewLayoutAttributes
{
    _Bool _floating;	// 8 = 0x8
    _Bool _extendsTopContent;	// 9 = 0x9
    _Bool _exists;	// 10 = 0xa
    double _interactiveTransitionProgress;	// 16 = 0x10
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
@property(nonatomic) _Bool extendsTopContent; // @synthesize extendsTopContent=_extendsTopContent;
@property(nonatomic) double interactiveTransitionProgress; // @synthesize interactiveTransitionProgress=_interactiveTransitionProgress;
@property(nonatomic) _Bool floating; // @synthesize floating=_floating;
- (id)description;	// IMP=0x000000000046a546
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000046a439
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000046a38e
- (id)init;	// IMP=0x000000000046a34a

@end
