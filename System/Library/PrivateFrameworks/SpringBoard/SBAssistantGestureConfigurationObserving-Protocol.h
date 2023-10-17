//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBAssistantGestureConfiguration;

@protocol SBAssistantGestureConfigurationObserving <NSObject>
- (void)assistantGestureConfiguration:(SBAssistantGestureConfiguration *)arg1 didUpdateHomeAffordanceSuppression:(long long)arg2;
- (void)assistantGestureConfiguration:(SBAssistantGestureConfiguration *)arg1 didUpdateShouldShowHomeAffordance:(_Bool)arg2;
- (void)assistantGestureConfiguration:(SBAssistantGestureConfiguration *)arg1 didUpdateShouldPassTouchesThroughToSpringBoard:(_Bool)arg2;
- (void)assistantGestureConfiguration:(SBAssistantGestureConfiguration *)arg1 didUpdateShouldDismissForSwipesOutsideContent:(_Bool)arg2;
- (void)assistantGestureConfiguration:(SBAssistantGestureConfiguration *)arg1 didUpdateShouldDismissForTapsOutsideContent:(_Bool)arg2;
- (void)assistantGestureConfiguration:(SBAssistantGestureConfiguration *)arg1 didUpdateHomeGestureSharing:(_Bool)arg2;
@end
