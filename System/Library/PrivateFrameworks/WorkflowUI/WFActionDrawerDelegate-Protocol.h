//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class UIViewController, WFAction;

@protocol WFActionDrawerDelegate <NSObject>
- (void)appendAction:(WFAction *)arg1;

@optional
- (void)presentDrawerViewController:(UIViewController *)arg1 inPopover:(_Bool)arg2 withSourceRect:(struct CGRect)arg3;
- (void)expandDrawer;
- (void)collapseDrawer;
- (double)actionCanvasWidth;
@end
