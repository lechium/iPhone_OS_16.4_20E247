//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface CKAcknowledgmentIconCollectionReusableView : UICollectionReusableView
{
    UIImageView *_glyphImageView;	// 8 = 0x8
}

+ (id)supplementaryViewKind;	// IMP=0x0060000000096af8
+ (id)reuseIdentifier;	// IMP=0x0060000000096aeb
- (void).cxx_destruct;	// IMP=0x0000000000096e71
@property(retain, nonatomic) UIImageView *glyphImageView; // @synthesize glyphImageView=_glyphImageView;
- (void)configureWithAcknowledgmentTally:(id)arg1;	// IMP=0x0000000000096c94
- (void)layoutSubviews;	// IMP=0x0000000000096be6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000096b05

@end
