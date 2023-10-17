//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, UIButton, UIImageView, UILabel;

@interface PasswordSharingDoneViewController
{
    UIButton *_doneButton;	// 32 = 0x20
    UIImageView *_imageView;	// 40 = 0x28
    UILabel *_infoLabel;	// 48 = 0x30
    UIButton *_reportBugButton;	// 56 = 0x38
    UILabel *_titleLabel;	// 64 = 0x40
    int _status;	// 72 = 0x48
    double _duration;	// 80 = 0x50
    NSDictionary *_userInfo;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000001768e8
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)handleReportBugButton:(id)arg1;	// IMP=0x001000000017648b
- (void)handleDismissButton:(id)arg1;	// IMP=0x00100000001763fe
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000017637a
- (void)configureUIElementsForHotspot;	// IMP=0x0010000000175ead
- (void)configureUIElementsDefault;	// IMP=0x00100000001758d5
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000001757e5

@end
