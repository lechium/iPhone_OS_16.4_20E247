//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IKLockupElement, MPUContentSizeLayoutConstraint, NSLayoutConstraint, NSString, UILabel, UIView, VideosExtrasConstrainedArtworkContainerView;

__attribute__((visibility("hidden")))
@interface VideosExtrasLockupElementViewController
{
    VideosExtrasConstrainedArtworkContainerView *_artworkContainerView;	// 8 = 0x8
    UIView *_textContainmentView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_subtitleLabel;	// 32 = 0x20
    UILabel *_descriptionLabel;	// 40 = 0x28
    NSLayoutConstraint *_artworkContainerTopConstraint;	// 48 = 0x30
    NSLayoutConstraint *_artworkContainerXConstraint;	// 56 = 0x38
    NSLayoutConstraint *_artworkContainerWidthConstraint;	// 64 = 0x40
    NSLayoutConstraint *_artworkContainerHeightConstraint;	// 72 = 0x48
    struct CGSize _artworkSize;	// 80 = 0x50
    NSLayoutConstraint *_textTopConstraint;	// 96 = 0x60
    NSLayoutConstraint *_textHeightConstraint;	// 104 = 0x68
    NSLayoutConstraint *_textCenterYConstraint;	// 112 = 0x70
    NSLayoutConstraint *_textLeadingConstraint;	// 120 = 0x78
    NSLayoutConstraint *_textTrailingConstraint;	// 128 = 0x80
    NSLayoutConstraint *_textBottomConstraint;	// 136 = 0x88
    NSLayoutConstraint *_titleVerticalConstraint;	// 144 = 0x90
    MPUContentSizeLayoutConstraint *_subtitleBaselineConstraint;	// 152 = 0x98
    MPUContentSizeLayoutConstraint *_descriptionBaselineConstraint;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x0000000000103a78
- (void)_handlePress:(id)arg1;	// IMP=0x000000000010388c
@property(readonly) NSString *descriptionTextStyle;
- (void)_configureDescriptionLabelForTextElement:(id)arg1;	// IMP=0x0000000000103708
- (void)_configureSubtitleLabelForTextElement:(id)arg1;	// IMP=0x000000000010360e
- (void)_configureTitleLabelForTextElement:(id)arg1;	// IMP=0x000000000010352a
- (void)_configureArtworkViewForImageElement:(id)arg1 overlays:(id)arg2;	// IMP=0x0000000000102fa6
- (void)_prepareLayout;	// IMP=0x0000000000101cc1
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000101a9b
- (void)viewDidLoad;	// IMP=0x00000000001014ec
- (id)initWithViewElement:(id)arg1;	// IMP=0x0000000000101404

// Remaining properties
@property(readonly) IKLockupElement *viewElement; // @dynamic viewElement;

@end

