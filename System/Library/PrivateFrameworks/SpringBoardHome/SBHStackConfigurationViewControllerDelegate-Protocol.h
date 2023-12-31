//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class NSString, SBHStackConfiguration, SBHStackConfigurationViewController, SBIcon, SBIconView, SBWidgetIcon, UIView, UIWindow, UIWindowScene;
@protocol SBIconDragPreview, SBIconDragPreviewContaining, SBLeafIconDataSource, UIDropSession;

@protocol SBHStackConfigurationViewControllerDelegate <NSObject>
- (UIWindow<SBIconDragPreviewContaining> *)windowForIconDragPreviewsForStackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 forWindowScene:(UIWindowScene *)arg2;
- (UIView<SBIconDragPreview> *)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 dragPreviewForIconView:(SBIconView *)arg2;
- (void)stackConfigurationViewControllerRequestsDismissal:(SBHStackConfigurationViewController *)arg1;
- (void)stackConfigurationViewControllerWillAnimateWidgetInsertion:(SBHStackConfigurationViewController *)arg1;
- (void)stackConfigurationViewControllerRequestsPresentAddWidgetSheet:(SBHStackConfigurationViewController *)arg1;
- (id <SBLeafIconDataSource>)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 promoteSuggestedWidget:(id <SBLeafIconDataSource>)arg2 withinStack:(SBWidgetIcon *)arg3;
- (void)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 didRemoveSuggestedWidgetIcon:(SBWidgetIcon *)arg2;
- (void)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 isConsumingDropSession:(id <UIDropSession>)arg2;
- (SBIcon *)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 draggedIconForIdentifier:(NSString *)arg2;
- (void)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 didCommitStackConfiguration:(SBHStackConfiguration *)arg2;
@end

