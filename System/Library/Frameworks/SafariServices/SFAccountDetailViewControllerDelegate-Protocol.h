//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class SFAccountDetailViewController, WBSPasswordGenerationManager, WBSPasswordWarning, WBSPasswordWarningManager, WBSSavedAccount, _SFAccountIconController;

@protocol SFAccountDetailViewControllerDelegate <NSObject>

@optional
@property(retain, nonatomic) WBSSavedAccount *savedAccountToRemoveAfterCompletedUpgradeInDetailView;
- (void)accountDetailViewController:(SFAccountDetailViewController *)arg1 didDeleteAccountWithWarning:(WBSPasswordWarning *)arg2;
- (void)accountDetailViewController:(SFAccountDetailViewController *)arg1 didHideWarning:(WBSPasswordWarning *)arg2;
- (WBSPasswordGenerationManager *)passwordGeneratorForAccountDetailViewController:(SFAccountDetailViewController *)arg1;
- (_SFAccountIconController *)iconControllerForAccountDetailViewController:(SFAccountDetailViewController *)arg1;
- (WBSPasswordWarningManager *)passwordWarningManagerForAccountDetailViewController:(SFAccountDetailViewController *)arg1;
@end

