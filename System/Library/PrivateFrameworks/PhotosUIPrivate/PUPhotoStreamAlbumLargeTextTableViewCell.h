//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface PUPhotoStreamAlbumLargeTextTableViewCell
{
    UIImageView *_albumImageView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_detailLabel;	// 24 = 0x18
    NSArray *_currentConstraints;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000038a66a
@property(retain, nonatomic) NSArray *currentConstraints; // @synthesize currentConstraints=_currentConstraints;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *albumImageView; // @synthesize albumImageView=_albumImageView;
- (void)didMoveToWindow;	// IMP=0x000000000038a568
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000038a527
- (void)updateConstraints;	// IMP=0x0000000000389b52
- (void)_commonPhotoStreamAlbumLargeTextTableViewCellInit;	// IMP=0x00000000003897ba
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000038976e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000389711
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003896c5
- (id)init;	// IMP=0x0000000000389679
- (void)setDetailText:(id)arg1;	// IMP=0x0000000000389607
- (id)detailText;	// IMP=0x00000000003895b7
- (void)setText:(id)arg1;	// IMP=0x0000000000389545
- (id)text;	// IMP=0x00000000003894f5

@end
