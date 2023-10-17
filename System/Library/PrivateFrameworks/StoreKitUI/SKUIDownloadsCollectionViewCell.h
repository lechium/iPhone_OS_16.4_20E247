//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class SKUIDownloadsCellView, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUIDownloadsCollectionViewCell : UICollectionViewCell
{
    SKUIDownloadsCellView *_cellView;	// 8 = 0x8
    UIImageView *_editIndicator;	// 16 = 0x10
    long long _cellState;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002f6017
@property(readonly, nonatomic) SKUIDownloadsCellView *cellView; // @synthesize cellView=_cellView;
@property(nonatomic) long long cellState; // @synthesize cellState=_cellState;
- (void)_reloadEditState;	// IMP=0x00000000002f5dad
- (void)layoutSubviews;	// IMP=0x00000000002f5b7a
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000002f5ae3
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002f5a2b

@end
