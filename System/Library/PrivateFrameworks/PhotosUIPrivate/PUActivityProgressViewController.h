//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, PLRoundProgressView, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface PUActivityProgressViewController : UIViewController
{
    UILabel *_primaryLabel;	// 8 = 0x8
    UILabel *_secondaryLabel;	// 16 = 0x10
    PLRoundProgressView *_progressView;	// 24 = 0x18
    UIImageView *_checkmarkView;	// 32 = 0x20
    NSString *_primaryText;	// 40 = 0x28
    NSString *_secondaryText;	// 48 = 0x30
    NSArray *_labelConstraints;	// 56 = 0x38
    NSArray *_contentConstraints;	// 64 = 0x40
    _Bool _showCheckmarkOnCompletion;	// 72 = 0x48
    double _fractionCompleted;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000005f33c
@property(nonatomic) double fractionCompleted; // @synthesize fractionCompleted=_fractionCompleted;
@property(nonatomic) _Bool showCheckmarkOnCompletion; // @synthesize showCheckmarkOnCompletion=_showCheckmarkOnCompletion;
@property(retain, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(retain, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000005f2e0
- (void)reset;	// IMP=0x000000000005f24b
- (void)updateViewConstraints;	// IMP=0x000000000005e74b
- (id)_checkmarkView;	// IMP=0x000000000005e5b0
- (id)_progressView;	// IMP=0x000000000005e49b
- (void)_updateSecondaryLabel;	// IMP=0x000000000005e305
- (void)_updatePrimaryLabel;	// IMP=0x000000000005e16f
- (id)_secondaryLabel;	// IMP=0x000000000005e074
- (id)_primaryLabel;	// IMP=0x000000000005df79
- (void)_updateViewVisibility;	// IMP=0x000000000005de85

@end

