//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKitLegacy/WAKView.h>

@class CALayer, UIView, UIWebDocumentView;

__attribute__((visibility("hidden")))
@interface UIWebPlugInView : WAKView
{
    UIWebDocumentView *_webView;	// 8 = 0x8
    CALayer *_hostingLayer;	// 16 = 0x10
    UIView *_uiView;	// 24 = 0x18
    struct __CFRunLoopObserver *_mainRunLoopDrawObserver;	// 32 = 0x20
    _Bool _isFullScreen;	// 40 = 0x28
    _Bool _parentedInLayer;	// 41 = 0x29
    _Bool _isQuickTimePlugIn;	// 42 = 0x2a
    _Bool _isMapViewPlugIn;	// 43 = 0x2b
    _Bool _isiAdPlugIn;	// 44 = 0x2c
}

@property(nonatomic) _Bool isiAdPlugIn; // @synthesize isiAdPlugIn=_isiAdPlugIn;
@property(nonatomic) _Bool isMapViewPlugIn; // @synthesize isMapViewPlugIn=_isMapViewPlugIn;
@property(nonatomic) _Bool isQuickTimePlugIn; // @synthesize isQuickTimePlugIn=_isQuickTimePlugIn;
@property(nonatomic, getter=isParentedInLayer) _Bool parentedInLayer; // @synthesize parentedInLayer=_parentedInLayer;
- (void)detachPluginLayer;	// IMP=0x000000000152d649
- (void)attachPluginLayer;	// IMP=0x000000000152d5b3
- (void)_detachPluginLayerOnMainThread;	// IMP=0x000000000152d5a1
- (void)_attachPluginLayerOnMainThread;	// IMP=0x000000000152d541
- (void)_disconnectPluginLayers;	// IMP=0x000000000152d453
- (void)_connectPluginLayers;	// IMP=0x000000000152d334
- (id)pluginLayer;	// IMP=0x000000000152d304
- (_Bool)willProvidePluginLayer;	// IMP=0x000000000152d2d4
- (void)setWebView:(id)arg1;	// IMP=0x000000000152d290
- (void)mouseUp:(id)arg1;	// IMP=0x000000000152d242
- (void)mouseDown:(id)arg1;	// IMP=0x000000000152d1f4
- (id)objectForWebScript;	// IMP=0x000000000152d1a5
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000152d157
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000152d0ca
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000152d075
- (void)webPlugInDestroy;	// IMP=0x000000000152d028
- (void)webPlugInStop;	// IMP=0x000000000152cfdb
- (void)webPlugInStart;	// IMP=0x000000000152cf8e
- (void)webPlugInInitialize;	// IMP=0x000000000152cf41
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000000152cdc4
- (void)layout;	// IMP=0x000000000152cd77
- (void)reshape;	// IMP=0x000000000152cccf
- (_Bool)isParented;	// IMP=0x000000000152cc95
- (id)plugInView;	// IMP=0x000000000152cc84
- (void)invalidateGState;	// IMP=0x000000000152cc43
- (void)viewDidMoveToWindow;	// IMP=0x000000000152cb57
- (void)setFrameSize:(struct CGSize)arg1;	// IMP=0x000000000152ca94
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000152c9e9
- (void)dealloc;	// IMP=0x000000000152c942
- (id)initWithWebView:(id)arg1 plugInView:(id)arg2;	// IMP=0x000000000152c7a9
- (void)_viewDidMoveToWindowOnMainThread;	// IMP=0x000000000152da04
- (void)_reshapeOnMainThread;	// IMP=0x000000000152d75f

@end

