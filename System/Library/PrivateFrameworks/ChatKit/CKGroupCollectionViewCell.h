//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface CKGroupCollectionViewCell : UICollectionViewCell
{
    UIView *_avatarView;	// 8 = 0x8
}

+ (id)reuseIdentifier;	// IMP=0x0060000000374489
- (void).cxx_destruct;	// IMP=0x0000000000374a37
@property(retain, nonatomic) UIView *avatarView; // @synthesize avatarView=_avatarView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000374750
- (_Bool)shouldHighlight;	// IMP=0x0000000000374748
- (void)layoutSubviews;	// IMP=0x00000000003745f1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000374496

@end

