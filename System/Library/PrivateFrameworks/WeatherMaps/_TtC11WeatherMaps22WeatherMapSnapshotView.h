//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC11WeatherMaps22WeatherMapSnapshotView : UIView
{
    MISSING_TYPE *annotationViewModelFactory;	// 8 = 0x8
    MISSING_TYPE *mapLocationAccessibilityModelManager;	// 48 = 0x30
    MISSING_TYPE *overlaySonifier;	// 88 = 0x58
    MISSING_TYPE *snapshotManager;	// 104 = 0x68
    MISSING_TYPE *$__lazy_storage_$_showDebugConsole;	// 144 = 0x90
    MISSING_TYPE *status;	// 0 = 0x0
    MISSING_TYPE *snapshotDisplayView;	// 0 = 0x0
    MISSING_TYPE *borderLayer;	// 0 = 0x0
    MISSING_TYPE *annotationView;	// 0 = 0x0
    MISSING_TYPE *annotationViewFractionalCenter;	// 0 = 0x0
    MISSING_TYPE *debugLabel;	// 0 = 0x0
    MISSING_TYPE *errorLabelEffect;	// 0 = 0x0
    MISSING_TYPE *errorEffectView;	// 0 = 0x0
    MISSING_TYPE *errorLabel;	// 0 = 0x0
    MISSING_TYPE *errorPlatterView;	// 0 = 0x0
    MISSING_TYPE *loadingIndicator;	// 0 = 0x0
    MISSING_TYPE *options;	// 2285568 = 0x22e000
    MISSING_TYPE *isTransitioningToSnapshotView;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000027720
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000002ecc0
- (void)didTransitionToSnapshotMap:(id)arg1;	// IMP=0x0000000000029750
- (void)willTransitionToSnapshotMap:(id)arg1;	// IMP=0x0000000000029450
- (void)layoutSubviews;	// IMP=0x00000000000289e0
- (void)dealloc;	// IMP=0x0000000000027700
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000273b0
@property(nonatomic) struct CGRect frame;

@end
