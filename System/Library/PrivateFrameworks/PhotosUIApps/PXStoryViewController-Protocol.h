//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIApps/NSObject-Protocol.h>

@class NSObject;
@protocol PXStoryExportActivityHelper, PXStoryViewControllerDismissalDelegate, PXStoryViewControllerNavigationItemHelper, PXStoryViewControllerShareActionDelegate, PXStoryViewEnvironmentActionPerformer;

@protocol PXStoryViewController <NSObject>
@property(retain, nonatomic) id <PXStoryViewControllerNavigationItemHelper> navigationItemHelper;
@property(readonly, nonatomic) NSObject<PXStoryExportActivityHelper> *exportActivityHelper;
@property(nonatomic) __weak id <PXStoryViewEnvironmentActionPerformer> viewEnvironmentActionPerformer;
@property(nonatomic) __weak id <PXStoryViewControllerDismissalDelegate> dismissalDelegate;
@property(nonatomic) __weak id <PXStoryViewControllerShareActionDelegate> shareActionDelegate;
@property(retain, nonatomic) Class gridDecorationViewClass;
@property(nonatomic) _Bool remainsActiveWhileApplicationIsHidden;
- (_Bool)prepareForPopTransition;
@end

