//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, UIPageControl;
@protocol _UIPageIndicatorFeedDelegate;

__attribute__((visibility("hidden")))
@interface _UIPageIndicatorFeed : NSObject
{
    UIPageControl *_pageControl;	// 8 = 0x8
    id <_UIPageIndicatorFeedDelegate> _delegate;	// 16 = 0x10
    NSMutableArray *_activeQueue;	// 24 = 0x18
    NSMutableArray *_reuseQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000f5d723
@property(retain, nonatomic) NSMutableArray *reuseQueue; // @synthesize reuseQueue=_reuseQueue;
@property(retain, nonatomic) NSMutableArray *activeQueue; // @synthesize activeQueue=_activeQueue;
@property(nonatomic) __weak id <_UIPageIndicatorFeedDelegate> delegate; // @synthesize delegate=_delegate;
- (id)indicatorForPage:(long long)arg1 forSizeOnly:(_Bool)arg2;	// IMP=0x0000000000f5cd13
- (struct CGSize)indicatorSizeForCustomImage:(id)arg1;	// IMP=0x0000000000f5cb61
- (id)activeIndicatorForPage:(long long)arg1;	// IMP=0x0000000000f5cb18
- (id)indicatorForPage:(long long)arg1;	// IMP=0x0000000000f5cb04
- (struct CGSize)indicatorSizeForPage:(long long)arg1;	// IMP=0x0000000000f5ca72
- (void)prepareIndicatorsFrom:(long long)arg1 to:(long long)arg2;	// IMP=0x0000000000f5c763
- (_Bool)_isPageWithinActiveBounds:(long long)arg1;	// IMP=0x0000000000f5c658
- (void)reloadIndicatorImageForPage:(long long)arg1;	// IMP=0x0000000000f5c585
- (void)reloadIndicatorImages;	// IMP=0x0000000000f5c39e
- (void)invalidateIndicators;	// IMP=0x0000000000f5c1a4
- (void)updateReuseQueue;	// IMP=0x0000000000f5c042
@property(readonly, nonatomic) NSArray *indicators;
- (id)initWithPageControl:(id)arg1;	// IMP=0x0000000000f5bf3d

@end

