//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSExtension, SFAccountCellData, WBSPasswordWarning;
@protocol SFActionableSecurityRecommendationDataDelegate;

__attribute__((visibility("hidden")))
@interface SFActionableSecurityRecommendationData : NSObject
{
    _Bool _isUpgradeToSignInWithAppleAvailable;	// 8 = 0x8
    _Bool _didUpgradeToSignInWithApple;	// 9 = 0x9
    _Bool _didUpgradeToStrongPassword;	// 10 = 0xa
    SFAccountCellData *_accountCellData;	// 16 = 0x10
    WBSPasswordWarning *_warning;	// 24 = 0x18
    unsigned long long _eligibleAccountModificationActions;	// 32 = 0x20
    NSExtension *_extension;	// 40 = 0x28
    id <SFActionableSecurityRecommendationDataDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000017238a
@property(nonatomic) _Bool didUpgradeToStrongPassword; // @synthesize didUpgradeToStrongPassword=_didUpgradeToStrongPassword;
@property(nonatomic) _Bool didUpgradeToSignInWithApple; // @synthesize didUpgradeToSignInWithApple=_didUpgradeToSignInWithApple;
@property(nonatomic) __weak id <SFActionableSecurityRecommendationDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isUpgradeToSignInWithAppleAvailable; // @synthesize isUpgradeToSignInWithAppleAvailable=_isUpgradeToSignInWithAppleAvailable;
@property(readonly, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(readonly, nonatomic) unsigned long long eligibleAccountModificationActions; // @synthesize eligibleAccountModificationActions=_eligibleAccountModificationActions;
@property(readonly, nonatomic) WBSPasswordWarning *warning; // @synthesize warning=_warning;
@property(readonly, nonatomic) SFAccountCellData *accountCellData; // @synthesize accountCellData=_accountCellData;
- (void)_fetchEligibleAccountModificationActionsForSavedAccount:(id)arg1;	// IMP=0x0000000000171db1
@property(readonly, nonatomic) NSArray *items;
- (id)cellForTableView:(id)arg1 forCellType:(id)arg2;	// IMP=0x000000000017118c
- (id)initWithAccountCellData:(id)arg1 warning:(id)arg2 delegate:(id)arg3;	// IMP=0x000000000017108c

@end
