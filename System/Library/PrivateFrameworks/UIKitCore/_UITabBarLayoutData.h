//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _UITabBarLayoutData
{
    UIColor *_selectionIndicatorTintColor;	// 8 = 0x8
    UIImage *_selectionIndicatorImage;	// 16 = 0x10
    long long _itemPositioning;	// 24 = 0x18
    double _itemWidth;	// 32 = 0x20
    double _itemSpacing;	// 40 = 0x28
}

+ (id)decodeFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0060000001013a55
+ (id)standardLayoutData;	// IMP=0x00600000010139fd
- (void).cxx_destruct;	// IMP=0x0000000001014989
@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(nonatomic) long long itemPositioning; // @synthesize itemPositioning=_itemPositioning;
@property(retain, nonatomic) UIImage *selectionIndicatorImage; // @synthesize selectionIndicatorImage=_selectionIndicatorImage;
@property(copy, nonatomic) UIColor *selectionIndicatorTintColor; // @synthesize selectionIndicatorTintColor=_selectionIndicatorTintColor;
- (long long)positioningForTraitCollection:(id)arg1;	// IMP=0x00000000010148fb
- (id)replicate;	// IMP=0x0000000001014653
- (_Bool)checkEqualTo:(id)arg1;	// IMP=0x00000000010144b6
- (long long)hashInto:(long long)arg1;	// IMP=0x00000000010143ff
- (void)describeInto:(id)arg1;	// IMP=0x0000000001014288
- (void)encodeToCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0000000001013f2b

@end

