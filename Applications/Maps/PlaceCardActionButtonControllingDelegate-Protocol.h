//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ExtensionFlowViewController, GEOAppStoreAppClip, GEOAppleMediaServicesResult, GEOQuickLink;
@protocol PlaceCardActionButtonModel;

@protocol PlaceCardActionButtonControllingDelegate
- (void)presentAppClip:(GEOAppStoreAppClip *)arg1;
- (void)presentQuickLink:(GEOQuickLink *)arg1;
- (void)appStoreAppSelected:(GEOAppleMediaServicesResult *)arg1;
- (void)presentExtensionFlowController:(ExtensionFlowViewController *)arg1;
- (void)updateActionButtonWithModel:(id <PlaceCardActionButtonModel>)arg1;
@end

