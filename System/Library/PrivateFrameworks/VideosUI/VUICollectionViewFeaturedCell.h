//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIBaseCollectionViewCell.h"

@class VUICollectionViewFeaturedView;

__attribute__((visibility("hidden")))
@interface VUICollectionViewFeaturedCell : VUIBaseCollectionViewCell
{
    VUICollectionViewFeaturedView *_featuredView;	// 8 = 0x8
}

+ (double)_iOSLockupWidthWithWindowWidth:(double)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2 showsPageControl:(_Bool)arg3;	// IMP=0x00600000002a6570
- (void).cxx_destruct;	// IMP=0x00000000002a6741
@property(retain, nonatomic) VUICollectionViewFeaturedView *featuredView; // @synthesize featuredView=_featuredView;
- (void)_commonInitWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002a660d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002a659c

@end
