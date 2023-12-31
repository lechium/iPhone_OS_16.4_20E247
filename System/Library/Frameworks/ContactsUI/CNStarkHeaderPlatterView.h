//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface CNStarkHeaderPlatterView : UIView
{
    NSString *_labelText;	// 8 = 0x8
    UIImage *_accessoryImage;	// 16 = 0x10
    UILabel *_label;	// 24 = 0x18
    UIImageView *_accessory;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001dba9e
@property(retain, nonatomic) UIImageView *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImage *accessoryImage; // @synthesize accessoryImage=_accessoryImage;
@property(copy, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
- (void)_updateForFocusedState:(_Bool)arg1;	// IMP=0x00000000001db861
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000001db763
- (_Bool)canBecomeFocused;	// IMP=0x00000000001db75b
- (id)initWithLabelText:(id)arg1 accessoryImage:(id)arg2;	// IMP=0x00000000001db0e0

@end

