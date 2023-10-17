//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIScrollView.h"

@class CALayer, DOMNode, UIWebBrowserView, UIWebOverflowContentView, UIWebOverflowScrollListener;

__attribute__((visibility("hidden")))
@interface UIWebOverflowScrollView : UIScrollView
{
    _Bool _beingRemoved;	// 152 = 0x98
    UIWebBrowserView *_webBrowserView;	// 160 = 0xa0
    UIWebOverflowScrollListener *_scrollListener;	// 168 = 0xa8
    UIWebOverflowContentView *_overflowContentView;	// 176 = 0xb0
    DOMNode *_node;	// 184 = 0xb8
    CALayer *_webLayer;	// 192 = 0xc0
}

@property(retain, nonatomic) CALayer *webLayer; // @synthesize webLayer=_webLayer;
@property(nonatomic, getter=isBeingRemoved) _Bool beingRemoved; // @synthesize beingRemoved=_beingRemoved;
@property(retain, nonatomic) DOMNode *node; // @synthesize node=_node;
@property(retain, nonatomic) UIWebOverflowContentView *overflowContentView; // @synthesize overflowContentView=_overflowContentView;
@property(retain, nonatomic) UIWebOverflowScrollListener *scrollListener; // @synthesize scrollListener=_scrollListener;
@property(nonatomic) UIWebBrowserView *webBrowserView; // @synthesize webBrowserView=_webBrowserView;
- (void)setContentOffset:(struct CGPoint)arg1;	// IMP=0x000000000154b27c
- (_Bool)fixUpViewAfterInsertion;	// IMP=0x000000000154b1c9
- (id)superview;	// IMP=0x000000000154b0f8
- (void)willBeRemoved;	// IMP=0x000000000154b0e4
- (void)replaceLayer:(id)arg1;	// IMP=0x000000000154b0a7
- (void)dealloc;	// IMP=0x000000000154b033
- (id)initWithLayer:(id)arg1 node:(id)arg2 webBrowserView:(id)arg3;	// IMP=0x000000000154af18

@end
