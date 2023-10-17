//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ControlCenterUI/NSObject-Protocol.h>

@class CCUILayoutView, NSArray, UIView;

@protocol CCUILayoutViewLayoutSource <NSObject>
- (NSArray *)horizontalDoubleMarginIndicesForLayoutView:(CCUILayoutView *)arg1;
- (NSArray *)verticalDoubleMarginIndicesForLayoutView:(CCUILayoutView *)arg1;
- (struct CCUILayoutRect)layoutView:(CCUILayoutView *)arg1 layoutRectForSubview:(UIView *)arg2;
- (struct CCUILayoutSize)layoutSizeForLayoutView:(CCUILayoutView *)arg1;
@end
