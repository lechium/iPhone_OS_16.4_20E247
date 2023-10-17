//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSMutableArray, NSOperationQueue, NSString, SKUIClientContext, SKUIScreenshotDataConsumer, SKUIVideoImageDataConsumer, UICollectionView;
@protocol SKUIScreenshotsDelegate;

__attribute__((visibility("hidden")))
@interface SKUIScreenshotsViewController : UIViewController
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    SKUIScreenshotDataConsumer *_dataConsumer;	// 24 = 0x18
    id <SKUIScreenshotsDelegate> _delegate;	// 32 = 0x20
    NSOperationQueue *_operationQueue;	// 40 = 0x28
    NSArray *_screenshots;	// 48 = 0x30
    NSMutableArray *_screenshotImages;	// 56 = 0x38
    NSMutableArray *_screenshotRawImages;	// 64 = 0x40
    struct CGSize _screenshotMaxSize;	// 72 = 0x48
    SKUIVideoImageDataConsumer *_trailerConsumer;	// 88 = 0x58
    NSArray *_trailers;	// 96 = 0x60
    NSMutableArray *_trailerImages;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000021470e
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) __weak id <SKUIScreenshotsDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)_setTrailerImage:(id)arg1 forIndex:(long long)arg2;	// IMP=0x00000000002145dc
- (void)_setImage:(id)arg1 forIndex:(long long)arg2;	// IMP=0x00000000002144b8
- (id)viewForZoomingInScrollView:(id)arg1;	// IMP=0x00000000002144b0
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000000021440c
- (id)slideshowViewController:(id)arg1 poppedImageViewAtIndex:(long long)arg2;	// IMP=0x00000000002140a7
- (void)slideshowViewController:(id)arg1 scrollToImageAtIndex:(long long)arg2;	// IMP=0x0000000000213ff7
- (id)slideshowViewController:(id)arg1 dataConsumerAtIndex:(long long)arg2;	// IMP=0x0000000000213f27
- (id)slideshowViewController:(id)arg1 imageURLAtIndex:(long long)arg2;	// IMP=0x0000000000213ebf
- (id)slideshowViewController:(id)arg1 placeholderImageAtIndex:(long long)arg2;	// IMP=0x0000000000213ded
- (long long)numberOfItemsInSlideshowViewController:(id)arg1;	// IMP=0x0000000000213dd0
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000213c4c
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000213be3
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000213bd8
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000213ad6
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000002137e2
- (void)loadView;	// IMP=0x0000000000213544
- (void)reloadData;	// IMP=0x0000000000212b02
- (id)initWithTrailers:(id)arg1 screenshots:(id)arg2 clientContext:(id)arg3;	// IMP=0x000000000021247a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
