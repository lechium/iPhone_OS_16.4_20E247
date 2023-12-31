//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIWindow.h"

__attribute__((visibility("hidden")))
@interface _UIWindowSystemOverlayWindow : UIWindow
{
}

+ (_Bool)_needsPassthroughInteraction;	// IMP=0x00800000008c056c
+ (_Bool)_isSecure;	// IMP=0x00800000008c0564
+ (_Bool)_isSystemWindow;	// IMP=0x00800000008c055c
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000008c05a4
- (_Bool)_extendsScreenSceneLifetime;	// IMP=0x00000000008c059c
- (_Bool)_shouldAdjustSizeClassesAndResizeWindow;	// IMP=0x00000000008c0594
- (_Bool)_canActAsKeyWindowForScreen:(id)arg1;	// IMP=0x00000000008c058c
- (_Bool)canBecomeKeyWindow;	// IMP=0x00000000008c0584
- (_Bool)_isSettingFirstResponder;	// IMP=0x00000000008c057c
- (_Bool)isInternalWindow;	// IMP=0x00000000008c0574

@end

