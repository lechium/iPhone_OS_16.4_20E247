//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKAudioProgressView, UIDateLabel;

__attribute__((visibility("hidden")))
@interface CKSharedAudioCollectionViewCell
{
    CKAudioProgressView *_audioPlaybackView;	// 8 = 0x8
}

+ (id)reuseIdentifier;	// IMP=0x006000000042b917
- (void).cxx_destruct;	// IMP=0x000000000042be49
@property(retain, nonatomic) CKAudioProgressView *audioPlaybackView; // @synthesize audioPlaybackView=_audioPlaybackView;
- (void)layoutSubviews;	// IMP=0x000000000042bc4c
- (id)formattedCreatedDateTextFromDate:(id)arg1;	// IMP=0x000000000042bb8c
- (id)formattedDurationTextForAsset:(id)arg1;	// IMP=0x000000000042bac7
- (void)configureWithAttachmentItem:(id)arg1;	// IMP=0x000000000042b924

// Remaining properties
@property(retain, nonatomic) UIDateLabel *previewTitleLabel; // @dynamic previewTitleLabel;

@end

