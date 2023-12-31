//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSObject, UIButton, UIImageView, UILabel;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SFShareAudioBringCloseViewController
{
    NSMutableArray *_cycleImageArray;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_cycleImageTimer;	// 48 = 0x30
    unsigned int _cycleNextIndex;	// 56 = 0x38
    UIButton *_cancelButton;	// 64 = 0x40
    UILabel *_infoLabel;	// 72 = 0x48
    UIImageView *_shareImageView;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000030ef8
@property(retain, nonatomic) UIImageView *shareImageView; // @synthesize shareImageView=_shareImageView;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void)_cycleProductImage;	// IMP=0x000000000003097a
- (void)eventCancel:(id)arg1;	// IMP=0x00000000000308f7
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000030832
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000003067e

@end

