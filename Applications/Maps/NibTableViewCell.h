//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSBundle, NSString, UIView;

@interface NibTableViewCell : UITableViewCell
{
    NSString *_nibName;	// 8 = 0x8
    NSBundle *_bundle;	// 16 = 0x10
    UIView *_cellContentView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000008840b0
@property(retain, nonatomic) UIView *cellContentView; // @synthesize cellContentView=_cellContentView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0010000000884028
- (void)cellContentViewDidLoad;	// IMP=0x0010000000883cb6
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, nonatomic) NSString *nibName; // @synthesize nibName=_nibName;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 reuseIdentifier:(id)arg3;	// IMP=0x0010000000883acf
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000883ab6

@end

