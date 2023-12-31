//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, WBSGlobalFrameIdentifier;

__attribute__((visibility("hidden")))
@interface SFAccountPickerConfiguration : NSObject
{
    _Bool _forUserNamesOnly;	// 8 = 0x8
    _Bool _shouldShowIcons;	// 9 = 0x9
    _Bool _shouldAllowMultipleSelection;	// 10 = 0xa
    _Bool _shouldShowPasskeysInAccountPicker;	// 11 = 0xb
    _Bool _shouldShowAutoFillPasskeys;	// 12 = 0xc
    _Bool _hasAuditToken;	// 13 = 0xd
    _Bool _shouldEnableAddingNewPasswordsIfPossible;	// 14 = 0xe
    NSString *_title;	// 16 = 0x10
    NSString *_prompt;	// 24 = 0x18
    NSString *_promptWhenPasskeysAreAvailable;	// 32 = 0x20
    NSArray *_serviceNameHintStrings;	// 40 = 0x28
    NSArray *_domainHintStrings;	// 48 = 0x30
    unsigned long long _minimumNumberOfCredentialsToShowLikelyMatchesSection;	// 56 = 0x38
    WBSGlobalFrameIdentifier *_currentWebFrameIdentifierForAutoFillPasskeys;	// 64 = 0x40
    NSString *_addPasswordSuggestedDomain;	// 72 = 0x48
    CDStruct_4c969caf _connectedAppAuditToken;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000003e3f4
@property(copy, nonatomic) NSString *addPasswordSuggestedDomain; // @synthesize addPasswordSuggestedDomain=_addPasswordSuggestedDomain;
@property(nonatomic) _Bool shouldEnableAddingNewPasswordsIfPossible; // @synthesize shouldEnableAddingNewPasswordsIfPossible=_shouldEnableAddingNewPasswordsIfPossible;
@property(readonly, nonatomic) _Bool hasAuditToken; // @synthesize hasAuditToken=_hasAuditToken;
@property(nonatomic) CDStruct_4c969caf connectedAppAuditToken; // @synthesize connectedAppAuditToken=_connectedAppAuditToken;
@property(copy, nonatomic) WBSGlobalFrameIdentifier *currentWebFrameIdentifierForAutoFillPasskeys; // @synthesize currentWebFrameIdentifierForAutoFillPasskeys=_currentWebFrameIdentifierForAutoFillPasskeys;
@property(nonatomic) _Bool shouldShowAutoFillPasskeys; // @synthesize shouldShowAutoFillPasskeys=_shouldShowAutoFillPasskeys;
@property(nonatomic) _Bool shouldShowPasskeysInAccountPicker; // @synthesize shouldShowPasskeysInAccountPicker=_shouldShowPasskeysInAccountPicker;
@property(nonatomic) _Bool shouldAllowMultipleSelection; // @synthesize shouldAllowMultipleSelection=_shouldAllowMultipleSelection;
@property(nonatomic) _Bool shouldShowIcons; // @synthesize shouldShowIcons=_shouldShowIcons;
@property(nonatomic) _Bool forUserNamesOnly; // @synthesize forUserNamesOnly=_forUserNamesOnly;
@property(nonatomic) unsigned long long minimumNumberOfCredentialsToShowLikelyMatchesSection; // @synthesize minimumNumberOfCredentialsToShowLikelyMatchesSection=_minimumNumberOfCredentialsToShowLikelyMatchesSection;
@property(copy, nonatomic) NSArray *domainHintStrings; // @synthesize domainHintStrings=_domainHintStrings;
@property(copy, nonatomic) NSArray *serviceNameHintStrings; // @synthesize serviceNameHintStrings=_serviceNameHintStrings;
@property(copy, nonatomic) NSString *promptWhenPasskeysAreAvailable; // @synthesize promptWhenPasskeysAreAvailable=_promptWhenPasskeysAreAvailable;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) _Bool shouldAllowAddingNewPasswords;

@end

