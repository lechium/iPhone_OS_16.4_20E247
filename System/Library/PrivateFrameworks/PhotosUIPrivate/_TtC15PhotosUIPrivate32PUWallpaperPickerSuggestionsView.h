//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, PXWallpaperPickerDataSource;
@protocol _TtP15PhotosUIPrivate40PUWallpaperPickerSuggestionsViewDelegate_;

__attribute__((visibility("hidden")))
@interface _TtC15PhotosUIPrivate32PUWallpaperPickerSuggestionsView : UIView
{
    MISSING_TYPE *scrollView;	// 8 = 0x8
    MISSING_TYPE *stackView;	// 16 = 0x10
    MISSING_TYPE *needsRTLInitialOffsetCorrection;	// 24 = 0x18
    MISSING_TYPE *contentWidthConstraint;	// 32 = 0x20
    MISSING_TYPE *delegate;	// 40 = 0x28
    MISSING_TYPE *contentHeightObservation;	// 48 = 0x30
    MISSING_TYPE *preferredViewHeight;	// 56 = 0x38
    MISSING_TYPE *dataSource;	// 64 = 0x40
    MISSING_TYPE *reloadQueue;	// 72 = 0x48
}

+ (double)verticalMargin;	// IMP=0x00400000000070b0
- (void).cxx_destruct;	// IMP=0x000000000000a183
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000000a100
- (void)layoutSubviews;	// IMP=0x0000000000009faa
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
@property(nonatomic, retain) PXWallpaperPickerDataSource *dataSource; // @synthesize dataSource;
@property(nonatomic) double preferredViewHeight; // @synthesize preferredViewHeight;
- (void)layoutMarginsDidChange;	// IMP=0x0000000000007759
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000007622
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000073b8
@property(nonatomic) __weak id <_TtP15PhotosUIPrivate40PUWallpaperPickerSuggestionsViewDelegate_> delegate; // @synthesize delegate;

@end

