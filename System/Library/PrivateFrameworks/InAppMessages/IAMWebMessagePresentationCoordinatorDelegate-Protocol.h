//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <InAppMessages/NSObject-Protocol.h>

@class IAMWebMessagePresentationCoordinator, NSDictionary, UIViewController;

@protocol IAMWebMessagePresentationCoordinatorDelegate <NSObject>
- (void)webMessagePresentationCoordinatorWebMessageDidRequestAction:(IAMWebMessagePresentationCoordinator *)arg1 actionConfiguration:(NSDictionary *)arg2;
- (void)webMessagePresentationCoordinatorWebMessageDidReportEvent:(IAMWebMessagePresentationCoordinator *)arg1 event:(NSDictionary *)arg2;
- (UIViewController *)viewControllerForModalPresentationUsingCoordinator:(IAMWebMessagePresentationCoordinator *)arg1;
- (void)webMessagePresentationCoordinatorWebMessageDidFinishPresentation:(IAMWebMessagePresentationCoordinator *)arg1;
- (void)webMessagePresentationCoordinatorWebMessageDidFail:(IAMWebMessagePresentationCoordinator *)arg1;
- (void)webMessagePresentationCoordinatorWebMessageDidLoad:(IAMWebMessagePresentationCoordinator *)arg1;
@end
