//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class GEOAutomobileOptions, GEOCyclingOptions, GEOTransitOptions, GEOWalkingOptions, NSArray, UIScrollView, UIView;
@protocol UIScrollViewDelegate;

@protocol MUInfoCardContentProtocol <NSObject>
+ (double)headerHeightInMinimalMode;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(nonatomic) double contentAlpha;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewDelegate;
@property(readonly, nonatomic) double heightForContentAboveTitle;
@property(retain, nonatomic) GEOCyclingOptions *cyclingOptions;
@property(retain, nonatomic) GEOTransitOptions *transitOptions;
@property(retain, nonatomic) GEOWalkingOptions *walkingOptions;
@property(retain, nonatomic) GEOAutomobileOptions *automobileOptions;
- (double)currentHeight;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (void)contentAboveTitleScrollPositionChanged:(double)arg1;
- (void)hideTitle:(_Bool)arg1;
- (UIView *)draggableHeaderView;
- (NSArray *)draggableContent;
@end
