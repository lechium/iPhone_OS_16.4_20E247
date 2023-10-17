//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MKMapItem, NSURL, UIImageView, UILabel;

@interface UGCPOIEnrichmentHeaderView : UIView
{
    UIImageView *_headerImageView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_secondaryLabel;	// 24 = 0x18
    NSURL *_brandIconURL;	// 32 = 0x20
    _Bool _isDownloadingBrandIcon;	// 40 = 0x28
    _Bool _hideSummaryText;	// 41 = 0x29
    MKMapItem *_mapItem;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000991355
@property(nonatomic) _Bool hideSummaryText; // @synthesize hideSummaryText=_hideSummaryText;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void)_setBrandIcon:(id)arg1 fallbackToMapItemIcon:(_Bool)arg2;	// IMP=0x0010000000991256
- (void)_startBrandIconDownload;	// IMP=0x001000000099108c
- (void)_cancelBrandIconDownload;	// IMP=0x0010000000991011
- (void)_updateIcon;	// IMP=0x0010000000990efd
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000990e34
- (void)layoutSubviews;	// IMP=0x0010000000990d8d
- (void)_refreshContent;	// IMP=0x0010000000990ca3
- (void)_setupConstraints;	// IMP=0x0010000000990a19
- (void)_setupSubviews;	// IMP=0x0010000000990795
- (void)dealloc;	// IMP=0x0010000000990757
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000009906d1

@end
