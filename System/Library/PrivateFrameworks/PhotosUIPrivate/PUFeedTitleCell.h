//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXFeedSectionInfo, PXSharedAlbumHeaderView;

__attribute__((visibility("hidden")))
@interface PUFeedTitleCell
{
    long long _collectionViewType;	// 8 = 0x8
    unsigned long long _tappableArea;	// 16 = 0x10
    PXFeedSectionInfo *_sectionInfo;	// 24 = 0x18
    PXSharedAlbumHeaderView *_headerView;	// 32 = 0x20
    struct UIEdgeInsets _contentInsets;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000182e25
@property(readonly, nonatomic) PXSharedAlbumHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) PXFeedSectionInfo *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
@property(nonatomic) unsigned long long tappableArea; // @synthesize tappableArea=_tappableArea;
@property(nonatomic) long long collectionViewType; // @synthesize collectionViewType=_collectionViewType;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void)_handleTap:(id)arg1;	// IMP=0x0000000000182d64
- (struct CGSize)_performLayoutInRect:(struct CGRect)arg1 updateSubviewFrames:(_Bool)arg2;	// IMP=0x0000000000182af7
- (void)_updateHeaderTextColorStyle;	// IMP=0x0000000000182a4c
- (void)prepareForReuse;	// IMP=0x00000000001829bf
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000182979
- (void)layoutSubviews;	// IMP=0x0000000000182907
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000182698

@end

