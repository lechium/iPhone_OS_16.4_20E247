//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterKit/BSInvalidatable-Protocol.h>

@class LSPropertyList, NSArray, NSBundle, NSData, NSOperation, NSString, PRUpdatingService, RBSProcessIdentity;

@protocol PRPosterExtensionDescribing <BSInvalidatable>
@property(readonly, nonatomic) NSBundle *pr_posterExtensionBundle;
@property(readonly, nonatomic) NSData *pr_persistentIdentifier;
@property(readonly, nonatomic) LSPropertyList *pr_posterExtensionEntitlementsPlist;
@property(readonly, nonatomic) LSPropertyList *pr_posterExtensionInfoPlist;
@property(readonly, nonatomic) NSString *pr_posterExtensionContainerBundleIdentifier;
@property(readonly, nonatomic) NSString *pr_localizedName;
@property(readonly, nonatomic) NSString *pr_posterExtensionBundleIdentifier;
@property(readonly, nonatomic) RBSProcessIdentity *pr_processIdentity;
- (void)clearUpdatingServiceForReason:(NSString *)arg1;
- (PRUpdatingService *)pr_assetUpdaterWithError:(id *)arg1;
- (void)pr_addRefreshConfigurationOperation:(NSOperation *)arg1 waitUntilFinished:(_Bool)arg2;
- (NSArray *)pr_refreshConfigurationOperations;
- (void)pr_addReloadDescriptorOperation:(NSOperation *)arg1;
- (NSArray *)pr_reloadDescriptorOperations;
@end
