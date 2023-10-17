//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class DragAndDropMapItem, DragAndDropPreview, UIImageView;

@interface PreviewViewController : UIViewController
{
    DragAndDropMapItem *_dragItem;	// 8 = 0x8
    DragAndDropPreview *_previewView;	// 16 = 0x10
    UIImageView *_imageSourceView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000008e3915
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000008e37e9
- (void)_updatePreview;	// IMP=0x00100000008e36ef
- (void)setLabelMarker:(id)arg1 searchresult:(id)arg2 mapView:(id)arg3;	// IMP=0x00100000008e35b8
- (void)dragAndDropPreviewDidUpdate:(id)arg1;	// IMP=0x00100000008e34ad
- (void)viewDidLoad;	// IMP=0x00100000008e33cd

@end
