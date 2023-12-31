//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, NSDictionary, NSOperation, UIFont, UIImage, UIImageView, UILabel;
@protocol FRFeedPickerCardCollectionViewCellDelegate;

@interface FRFeedPickerCardCollectionViewBaseCell
{
    _Bool _disableTransitionAnimation;	// 8 = 0x8
    id <FRFeedPickerCardCollectionViewCellDelegate> _cardCellDelegate;	// 16 = 0x10
    UIImageView *_placeholderImageView;	// 24 = 0x18
    UILabel *_placeholderTagLabel;	// 32 = 0x20
    CALayer *_tagImageLayer;	// 40 = 0x28
    UIFont *_placeholderTopicFont;	// 48 = 0x30
    UIFont *_placeholderChannelFont;	// 56 = 0x38
    NSDictionary *_placeholderTopicAttributes;	// 64 = 0x40
    NSDictionary *_placeholderChannelAttributes;	// 72 = 0x48
    NSOperation *_imageUpdateOperation;	// 80 = 0x50
    UIImage *_placeholderChannelImage;	// 88 = 0x58
    UIImage *_placeholderTopicImage;	// 96 = 0x60
    struct CGRect _channelBannerFrame;	// 104 = 0x68
    struct CGRect _topicBannerFrame;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0020000000009bd4
@property(retain, nonatomic) UIImage *placeholderTopicImage; // @synthesize placeholderTopicImage=_placeholderTopicImage;
@property(retain, nonatomic) UIImage *placeholderChannelImage; // @synthesize placeholderChannelImage=_placeholderChannelImage;
@property(retain, nonatomic) NSOperation *imageUpdateOperation; // @synthesize imageUpdateOperation=_imageUpdateOperation;
@property(nonatomic) _Bool disableTransitionAnimation; // @synthesize disableTransitionAnimation=_disableTransitionAnimation;
@property(nonatomic) struct CGRect topicBannerFrame; // @synthesize topicBannerFrame=_topicBannerFrame;
@property(nonatomic) struct CGRect channelBannerFrame; // @synthesize channelBannerFrame=_channelBannerFrame;
@property(retain, nonatomic) NSDictionary *placeholderChannelAttributes; // @synthesize placeholderChannelAttributes=_placeholderChannelAttributes;
@property(retain, nonatomic) NSDictionary *placeholderTopicAttributes; // @synthesize placeholderTopicAttributes=_placeholderTopicAttributes;
@property(retain, nonatomic) UIFont *placeholderChannelFont; // @synthesize placeholderChannelFont=_placeholderChannelFont;
@property(retain, nonatomic) UIFont *placeholderTopicFont; // @synthesize placeholderTopicFont=_placeholderTopicFont;
@property(retain, nonatomic) CALayer *tagImageLayer; // @synthesize tagImageLayer=_tagImageLayer;
@property(retain, nonatomic) UILabel *placeholderTagLabel; // @synthesize placeholderTagLabel=_placeholderTagLabel;
@property(retain, nonatomic) UIImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
@property(nonatomic) __weak id <FRFeedPickerCardCollectionViewCellDelegate> cardCellDelegate; // @synthesize cardCellDelegate=_cardCellDelegate;
- (void)_updateImageAsync;	// IMP=0x00100000000090b9
- (void)reloadTagImage;	// IMP=0x001000000000905a
- (void)reloadCachedTagImage;	// IMP=0x0010000000008ffa
- (id)_cachedImageIfPerformanceAllows;	// IMP=0x0010000000008de8
- (id)_imageGenerationOptions;	// IMP=0x0010000000008bfa
- (void)unloadTagImage;	// IMP=0x0010000000008b69
- (void)_notificationsBadgeButtonTapped:(id)arg1;	// IMP=0x0010000000008b1d
- (void)populateWithFeed:(id)arg1 context:(id)arg2 subscribeLocation:(long long)arg3;	// IMP=0x00100000000085dd
- (void)setImage:(id)arg1;	// IMP=0x00100000000083d8
- (void)prepareForReuse;	// IMP=0x0010000000008317
- (void)_clearImage;	// IMP=0x0010000000008213
- (void)layoutSubviews;	// IMP=0x00100000000081e4
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x0010000000007a45
- (void)accessibilityInvertColorsSettingDidChange:(id)arg1;	// IMP=0x0010000000007a08
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000007069

@end

