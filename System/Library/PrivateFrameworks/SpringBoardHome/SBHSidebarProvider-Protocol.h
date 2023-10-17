//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/SBHLegibility-Protocol.h>

@class SBHSidebarVisualConfiguration, UIViewController, WGWidgetGroupViewController;
@protocol SBHSidebarProviderDelegate;

@protocol SBHSidebarProvider <SBHLegibility>
@property(nonatomic) __weak id <SBHSidebarProviderDelegate> delegate;
@property(nonatomic) unsigned long long layoutInsetsIgnoredEdges;
@property(retain, nonatomic) SBHSidebarVisualConfiguration *sidebarVisualConfiguration;
@property(retain, nonatomic) WGWidgetGroupViewController *widgetViewController;
- (void)setEditingIcons:(_Bool)arg1;

@optional
@property(retain, nonatomic) UIViewController *avocadoViewController;
@end
