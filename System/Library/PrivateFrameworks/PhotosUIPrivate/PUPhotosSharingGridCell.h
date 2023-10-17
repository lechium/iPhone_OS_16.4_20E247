//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class PUPhotoView, PUPhotosZoomingSharingGridCell, UIView;

__attribute__((visibility("hidden")))
@interface PUPhotosSharingGridCell : UICollectionViewCell
{
    PUPhotoView *_photoView;	// 8 = 0x8
    UIView *_highlightOverlayView;	// 16 = 0x10
    struct CGPoint _originalZoomPoint;	// 24 = 0x18
    struct CGPoint _lastZoomPoint;	// 40 = 0x28
    PUPhotosZoomingSharingGridCell *_zoomingCell;	// 56 = 0x38
    UIView *_zoomingCellSuperview;	// 64 = 0x40
    long long _currentImageRequestID;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000003ccc1b
@property(nonatomic) long long currentImageRequestID; // @synthesize currentImageRequestID=_currentImageRequestID;
@property(readonly, nonatomic) PUPhotoView *photoView; // @synthesize photoView=_photoView;
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000003ccb6c
- (void)layoutSubviews;	// IMP=0x00000000003cca66
- (void)prepareForReuse;	// IMP=0x00000000003cc990
- (void)_updateSubviewOrdering;	// IMP=0x00000000003cc973
- (void)_updateHighlight;	// IMP=0x00000000003cc7da
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003cc6a7

@end
