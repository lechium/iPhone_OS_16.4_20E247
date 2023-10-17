//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class NSArray, SBIconListView, SBIconListViewLayoutMetrics, SBIconView;
@protocol SBIconListLayoutAnimating;

@protocol SBIconListLayoutDelegate <NSObject>

@optional
- (id <SBIconListLayoutAnimating>)iconListView:(SBIconListView *)arg1 animatorForRemovingIcons:(NSArray *)arg2 proposedAnimator:(id <SBIconListLayoutAnimating>)arg3;
- (void)iconListViewDidLayoutIcons:(SBIconListView *)arg1;
- (void)iconListView:(SBIconListView *)arg1 willLayoutIconView:(SBIconView *)arg2;
- (struct CGSize)iconListView:(SBIconListView *)arg1 sizeThatFits:(struct CGSize)arg2 metrics:(SBIconListViewLayoutMetrics *)arg3 proposedSize:(struct CGSize)arg4;
- (unsigned long long)iconListView:(SBIconListView *)arg1 rowAtPoint:(struct CGPoint)arg2 metrics:(SBIconListViewLayoutMetrics *)arg3 proposedRow:(unsigned long long)arg4;
- (struct CGPoint)iconListView:(SBIconListView *)arg1 centerForIconCoordinate:(struct SBIconCoordinate)arg2 metrics:(SBIconListViewLayoutMetrics *)arg3 proposedCenter:(struct CGPoint)arg4;
- (struct CGPoint)iconListView:(SBIconListView *)arg1 originForIconCoordinate:(struct SBIconCoordinate)arg2 metrics:(SBIconListViewLayoutMetrics *)arg3 proposedOrigin:(struct CGPoint)arg4;
@end
