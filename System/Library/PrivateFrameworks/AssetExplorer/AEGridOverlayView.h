//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AEGridOverlayConfiguration, NSString;

__attribute__((visibility("hidden")))
@interface AEGridOverlayView : UIView
{
    AEGridOverlayConfiguration *_overlayConfiguration;	// 8 = 0x8
}

+ (id)loopBadge;	// IMP=0x001000000000fe13
+ (id)videoBadge;	// IMP=0x001000000000fde3
+ (id)cloudBadge;	// IMP=0x001000000000fdb3
+ (id)gradientShadow;	// IMP=0x001000000000fd83
+ (id)gridOverlayLayoutInfo;	// IMP=0x001000000000fd20
- (void).cxx_destruct;	// IMP=0x000000000000fd0d
@property(retain, nonatomic, setter=_setOverlayConfiguration:) AEGridOverlayConfiguration *overlayConfiguration; // @synthesize overlayConfiguration=_overlayConfiguration;
- (void)prepareForReuse;	// IMP=0x000000000000fcd4
- (void)becomeReusable;	// IMP=0x000000000000fc9f
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;	// IMP=0x000000000000fc71
@property(readonly, nonatomic) UIView *view;
- (struct CGRect)_loopRect;	// IMP=0x000000000000fbfe
- (struct CGRect)_videoRect;	// IMP=0x000000000000fb94
- (struct CGRect)_cloudRect;	// IMP=0x000000000000fb31
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000000000f960
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000000f958
- (id)init;	// IMP=0x000000000000f8a7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
