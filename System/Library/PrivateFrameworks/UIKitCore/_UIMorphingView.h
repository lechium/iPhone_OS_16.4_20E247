//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface _UIMorphingView : UIView
{
    _Bool _useOpacityPairFilter;	// 8 = 0x8
    double _progress;	// 16 = 0x10
    NSMutableOrderedSet *_contentViews;	// 24 = 0x18
    UIView *_opacityPairSourceView;	// 32 = 0x20
    struct CGRect _initialBounds;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000011dd8a2
@property(nonatomic) __weak UIView *opacityPairSourceView; // @synthesize opacityPairSourceView=_opacityPairSourceView;
@property(nonatomic) struct CGRect initialBounds; // @synthesize initialBounds=_initialBounds;
@property(retain, nonatomic) NSMutableOrderedSet *contentViews; // @synthesize contentViews=_contentViews;
@property(nonatomic) _Bool useOpacityPairFilter; // @synthesize useOpacityPairFilter=_useOpacityPairFilter;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)_updateMorphProgress;	// IMP=0x00000000011dcff5
- (id)_currentDestinationView;	// IMP=0x00000000011dcfa5
- (void)addContentView:(id)arg1;	// IMP=0x00000000011dc8eb

@end

