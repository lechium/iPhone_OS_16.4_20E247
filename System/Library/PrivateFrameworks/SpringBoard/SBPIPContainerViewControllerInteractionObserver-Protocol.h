//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBPIPContainerViewController, SBWindowScene;

@protocol SBPIPContainerViewControllerInteractionObserver <NSObject>
- (void)containerViewControllerDidEndInteraction:(SBPIPContainerViewController *)arg1 targetWindowScene:(SBWindowScene *)arg2;
- (void)containerViewControllerDidBeginInteraction:(SBPIPContainerViewController *)arg1;
@end

