//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SwiftUI/UIFocusItemContainer-Protocol.h>

@class _UIFocusMovementInfo;

@protocol _UIFocusItemContainerPrivate <UIFocusItemContainer>

@optional
+ (_Bool)_supportsInvalidatingFocusCache;
- (unsigned long long)_focusGuideBehaviorForFocusMovement:(_UIFocusMovementInfo *)arg1;
- (_Bool)_isLazyFocusItemContainer;
@end
