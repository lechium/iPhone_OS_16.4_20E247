//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationBar.h>

@interface UINavigationBar (Bridge)
+ (_Bool)ts_chromelessBarsEnabled;	// IMP=0x0080000000013d2d
- (id)fetchRegularTitleViewInView:(id)arg1;	// IMP=0x0010000000013f09
- (id)fetchCustomTitleViewInView:(id)arg1;	// IMP=0x0010000000013d45
- (void)syncOpacityForBarButtonItems:(id)arg1;	// IMP=0x001000000001387c
- (id)ts_fetchTitleView;	// IMP=0x001000000001382c
- (id)ts_fetchCompressibleTitleView;	// IMP=0x0010000000013741
- (void)ts_resetButtonTransforms;	// IMP=0x001000000001350b
- (void)ts_setBackgroundEffects:(id)arg1;	// IMP=0x00100000000134f9
- (id)ts_contentView;	// IMP=0x0010000000013409
- (id)ts_barButtonViews;	// IMP=0x0010000000013125
- (id)ts_backdropViewLayerGroupName;	// IMP=0x0010000000013113
- (void)ts_setBlurthroughBackground;	// IMP=0x0010000000013063
- (void)ts_clearAccessibilityElementsCache;	// IMP=0x0010000000013051
@end
