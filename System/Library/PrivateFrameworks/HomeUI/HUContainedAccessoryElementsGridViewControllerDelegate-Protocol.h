//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUServiceGridViewControllerDelegate-Protocol.h>

@class HFItem, HUContainedAccessoryElementsGridViewController, UIViewController;
@protocol HUDetailsPresentationDelegateHost;

@protocol HUContainedAccessoryElementsGridViewControllerDelegate <HUServiceGridViewControllerDelegate>

@optional
- (UIViewController<HUDetailsPresentationDelegateHost> *)detailsViewControllerFor:(HUContainedAccessoryElementsGridViewController *)arg1 item:(HFItem *)arg2;
- (_Bool)hasDetailsActionFor:(HUContainedAccessoryElementsGridViewController *)arg1 item:(HFItem *)arg2;
@end

