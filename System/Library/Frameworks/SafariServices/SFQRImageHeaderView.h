//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView;
@protocol BCSAction;

__attribute__((visibility("hidden")))
@interface SFQRImageHeaderView : UIView
{
    UIImageView *_iconView;	// 8 = 0x8
    id <BCSAction> _action;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000175b05
@property(nonatomic) __weak id <BCSAction> action; // @synthesize action=_action;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000175a00
- (id)_title;	// IMP=0x0000000000175074
- (id)_actionTypeString;	// IMP=0x0000000000174f21

@end
