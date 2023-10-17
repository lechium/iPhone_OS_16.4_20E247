//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CKVettingAlerts : NSObject
{
}

+ (id)appSpecificLocKeyForURLSlug:(id)arg1 prefix:(id)arg2;	// IMP=0x0040000000016991
+ (id)appSpecificLocKeyForBundleID:(id)arg1 shareType:(id)arg2 prefix:(id)arg3;	// IMP=0x0010000000016605
+ (id)alertContentForGenericErrorWithURLSlug:(id)arg1;	// IMP=0x0010000000016442
+ (id)mediumNameFromComponents:(id)arg1;	// IMP=0x00100000000163c9
+ (id)alertContentForGenericInitiateVettingError;	// IMP=0x001000000001622a
+ (id)platformSpecificAlertOptionsWithOptions:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x0010000000016197
+ (void)showDropDownAlert:(id)arg1 defaultResponseBlock:(CDUnknownBlockType)arg2 alternateResponseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000000160bf
+ (void)showICloudAccountSettingAlert:(id)arg1 appName:(id)arg2 previewRequested:(_Bool *)arg3 isSourceICS:(_Bool)arg4;	// IMP=0x0010000000015b44
+ (void)showFailureAlert:(id)arg1 isSourceICS:(_Bool)arg2;	// IMP=0x001000000001587a
+ (id)_alertContentForDropDownSelectionWithShareName:(id)arg1 ownerName:(id)arg2 currentUserName:(id)arg3 currentUserFormattedUsername:(id)arg4 dropDownTitles:(id)arg5 locKeyPrefix:(id)arg6 isSourceICS:(_Bool)arg7;	// IMP=0x00100000000153c7
+ (id)alertContentForAppStoreAppSelectionWithShareName:(id)arg1 ownerName:(id)arg2 currentUserName:(id)arg3 currentUserFormattedUsername:(id)arg4 dropDownTitles:(id)arg5 isSourceICS:(_Bool)arg6;	// IMP=0x0010000000015394
+ (id)alertContentForAppSelectionWithShareName:(id)arg1 ownerName:(id)arg2 currentUserName:(id)arg3 currentUserFormattedUsername:(id)arg4 dropDownTitles:(id)arg5 isSourceICS:(_Bool)arg6;	// IMP=0x0010000000015361
+ (id)alertContentDictionaryForServiceUnavailableErrorWithURLSlug:(id)arg1;	// IMP=0x00100000000151a7
+ (id)alertContentDictionaryForDeviceOfflineErrorWithURLSlug:(id)arg1;	// IMP=0x0010000000014fed
+ (id)alertContentForICloudAccountError:(id)arg1 shareMetadata:(id)arg2 shareURL:(id)arg3;	// IMP=0x00100000000146aa
+ (id)alertContentForShareMetadataErrorWithURL:(id)arg1;	// IMP=0x00100000000144b4
+ (id)alertContentForCompleteVettingError:(id)arg1 shareTitle:(id)arg2 email:(id)arg3 phone:(id)arg4 reconstructedShareURL:(id)arg5;	// IMP=0x0010000000012d96
+ (id)_sanitizedShareURLSlug:(id)arg1;	// IMP=0x0010000000012c34
+ (id)alertContentForInitiateVettingError:(id)arg1 shareTitle:(id)arg2 isEmail:(_Bool)arg3 address:(id)arg4;	// IMP=0x0010000000012303
+ (id)_alertContentForAppStoreOperationWithApp:(id)arg1 shareMetadata:(id)arg2 keyPrefix:(id)arg3 titleKeySuffix:(id)arg4 bodyKeySuffix:(id)arg5 isSourceICS:(_Bool)arg6;	// IMP=0x0010000000011f02
+ (id)alertContentForAppStoreUpdateLookupFailureWithShareName:(id)arg1 appName:(id)arg2 error:(id)arg3;	// IMP=0x0010000000011c18
+ (id)alertContentForAppStoreAppLookupFailureWithShareName:(id)arg1 error:(id)arg2;	// IMP=0x00100000000117da
+ (id)alertContentForAppUpdate:(id)arg1 shareMetadata:(id)arg2 isSourceICS:(_Bool)arg3;	// IMP=0x00100000000117a8
+ (id)alertContentForAppDownload:(id)arg1 shareMetadata:(id)arg2 isSourceICS:(_Bool)arg3;	// IMP=0x00100000000116f1
+ (id)deviceTypeSpecificSuffix;	// IMP=0x00100000000115a4
+ (id)_alertContentForVettingBindingPromptWithBundleID:(id)arg1 shareName:(id)arg2 ownerName:(id)arg3 shareType:(id)arg4 isShortcut:(_Bool)arg5 isSourceICS:(_Bool)arg6;	// IMP=0x00100000000111ea
+ (id)getLaunchingOptionsFromOptions:(id)arg1 isSourceICS:(_Bool)arg2;	// IMP=0x0010000000011128
+ (id)getAlertOptionsFromOptions:(id)arg1 isSourceICS:(_Bool)arg2;	// IMP=0x0010000000011048
+ (id)alertContentForShortcutVettingBindingPromptWithBundleID:(id)arg1 shareName:(id)arg2 ownerName:(id)arg3 shareType:(id)arg4 isSourceICS:(_Bool)arg5;	// IMP=0x0010000000011023
+ (id)alertContentForFullVettingBindingPromptWithBundleID:(id)arg1 shareName:(id)arg2 ownerName:(id)arg3 shareType:(id)arg4 isSourceICS:(_Bool)arg5;	// IMP=0x0010000000010ffe
+ (id)alertContentForFirstJoinAlertWithRecordName:(id)arg1 appName:(id)arg2 bundleID:(id)arg3 shareMetadata:(id)arg4 currentUserName:(id)arg5 currentUserFormattedUsername:(id)arg6;	// IMP=0x0010000000010488

@end
