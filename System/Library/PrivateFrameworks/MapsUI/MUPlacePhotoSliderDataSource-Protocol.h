//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/NSObject-Protocol.h>

@class MUPhotoTileOverlay, MUPlacePhotoSliderView, NSArray, UIView;
@protocol MUPhotoTileViewModel;

@protocol MUPlacePhotoSliderDataSource <NSObject>
- (unsigned long long)numberOfAttributionsForPhotoSliderView:(MUPlacePhotoSliderView *)arg1;
- (NSArray *)attributionViewModelsForPhotoSliderView:(MUPlacePhotoSliderView *)arg1;
- (UIView *)photoSliderViewHeaderViewForPhotoSlider:(MUPlacePhotoSliderView *)arg1;
- (MUPhotoTileOverlay *)photoSliderView:(MUPlacePhotoSliderView *)arg1 photoOverlayForModel:(id <MUPhotoTileViewModel>)arg2;
- (NSArray *)photoSliderViewRequestsViewModels:(MUPlacePhotoSliderView *)arg1;

@optional
- (_Bool)photoSliderView:(MUPlacePhotoSliderView *)arg1 shouldShowFullWidthForModel:(id <MUPhotoTileViewModel>)arg2;
@end
