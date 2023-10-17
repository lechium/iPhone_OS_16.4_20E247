//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextEffectsWindow.h"

@class CAContext, FBSScene, FBSSceneIdentityToken, FBSSceneLayer, NSDictionary, NSString, UIScreen, _UIContextBinder;

__attribute__((visibility("hidden")))
@interface UIRemoteKeyboardWindow : UITextEffectsWindow
{
    NSDictionary *_perScreenOptions;	// 240 = 0xf0
    UIScreen *_intendedScreen;	// 248 = 0xf8
    _Bool _arePlaceholdersInitialised;	// 256 = 0x100
    FBSSceneLayer *_keyboardSceneLayer;	// 264 = 0x108
    FBSScene *_activeScene;	// 272 = 0x110
    _Bool _resetRequired;	// 280 = 0x118
}

+ (id)remoteKeyboardWindowForScreen:(id)arg1 create:(_Bool)arg2;	// IMP=0x0010000000c661b8
+ (_Bool)_isHostedInAnotherProcess;	// IMP=0x0010000000c661b0
- (void).cxx_destruct;	// IMP=0x0000000000c6758f
- (void)_configureAlphaIfNecessary;	// IMP=0x0000000000c6749a
- (_Bool)_isEligibleForFocusOcclusion;	// IMP=0x0000000000c67492
- (_Bool)isTransparentFocusItem;	// IMP=0x0000000000c6748a
- (void)dealloc;	// IMP=0x0000000000c6732b
- (long long)_orientationForClassicPresentation;	// IMP=0x0000000000c6731a
- (void)endDisablingInterfaceAutorotation;	// IMP=0x0000000000c672cc
- (void)resetScene;	// IMP=0x0000000000c6728a
- (void)_resetScene;	// IMP=0x0000000000c6722a
@property(readonly, nonatomic) FBSSceneIdentityToken *activeSceneIdentity;
- (void)detachBindable;	// IMP=0x0000000000c67194
- (_Bool)shouldDetachBindable;	// IMP=0x0000000000c67075
- (void)attachBindable;	// IMP=0x0000000000c66eb1
- (_Bool)shouldAttachBindable;	// IMP=0x0000000000c66df0
- (id)_layerForCoordinateSpaceConversion;	// IMP=0x0000000000c66ddb
- (double)_adjustedWindowLevelFromLevel:(double)arg1;	// IMP=0x0000000000c66dd5
- (_Bool)_isTextEffectsWindowNotificationOwner;	// IMP=0x0000000000c66dcd
- (_Bool)_isRemoteKeyboardWindow;	// IMP=0x0000000000c66dc5
- (_Bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x0000000000c66d35
- (void)_setRotatableClient:(id)arg1 toOrientation:(long long)arg2 updateStatusBar:(_Bool)arg3 duration:(double)arg4 force:(_Bool)arg5 isRotating:(_Bool)arg6;	// IMP=0x0000000000c66c39
- (void)setWindowLevel:(double)arg1;	// IMP=0x0000000000c66b90
- (_Bool)_isFullscreen;	// IMP=0x0000000000c66b28
- (_Bool)_usesWindowServerHitTesting;	// IMP=0x0000000000c66b16
- (long long)_orientationInSceneSpace;	// IMP=0x0000000000c66abd
- (_Bool)_canIgnoreInteractionEvents;	// IMP=0x0000000000c66ab5
- (_Bool)_alwaysGetsContexts;	// IMP=0x0000000000c66aad
- (_Bool)_isHostedInAnotherProcess;	// IMP=0x0000000000c66a93
- (_Bool)_isWindowServerHostingManaged;	// IMP=0x0000000000c66a8b
- (_Bool)_wantsSceneAssociation;	// IMP=0x0000000000c66a83
- (_Bool)_isAlwaysKeyboardWindow;	// IMP=0x0000000000c66a7b
- (_Bool)isInternalWindow;	// IMP=0x0000000000c6698e
- (void)invalidate;	// IMP=0x0000000000c66972
@property(readonly) NSDictionary *_options;
@property(readonly) UIScreen *_intendedScreen;
- (_Bool)_matchingOptions:(id)arg1;	// IMP=0x0000000000c66940
- (id)_initWithScreen:(id)arg1 options:(id)arg2;	// IMP=0x0000000000c6681a
- (id)_initBasicWithScreen:(id)arg1 options:(id)arg2;	// IMP=0x0000000000c66622

// Remaining properties
@property(readonly, nonatomic) CDStruct_b73e569c _bindingDescription;
@property(nonatomic, setter=_setBoundContext:) __weak CAContext *_boundContext;
@property(nonatomic, setter=_setContextBinder:) __weak _UIContextBinder *_contextBinder;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
