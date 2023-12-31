//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFDatabaseProxyHost-Protocol.h>

@class NSSet, NSString, WFDialogAttribution, WFDialogRequest, WFWorkflowReference, WFWorkflowRunningContext;

@protocol WFOutOfProcessWorkflowControllerHost <WFDatabaseProxyHost>
- (void)runnerDidPunchToShortcutsJr;
- (void)presenterRequestedWorkflowPauseForContext:(WFWorkflowRunningContext *)arg1 dialogRequest:(WFDialogRequest *)arg2;
- (void)runnerWillExit;
- (void)requestSandboxExtensionForAccessResources:(NSSet *)arg1 completion:(void (^)(NSSet *, NSSet *, NSError *))arg2;
- (void)quarantineWorkflowWithReference:(WFWorkflowReference *)arg1;
- (void)workflowWantsToToastSessionKitSessionWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)workflowDidDecideRunningProgressIsAllowed:(_Bool)arg1 dialogAttribution:(WFDialogAttribution *)arg2;
- (void)workflowDidStartRunning;
@end

