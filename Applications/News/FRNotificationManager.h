//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCAMSPushHandler, FCNotificationsConfiguration, FRNotificationAutoEnableHelper, NFMutexLock, NSDictionary, NSHashTable, NSString, TSNotificationSettings, _TtC5TeaUI12Bootstrapper;
@protocol FCNewsAppConfigurationManager, FRFeldsparContext, FRURLRouterManagerType, FRUserNotificationResponseHandlerType;

@interface FRNotificationManager : NSObject
{
    _Bool _systemNotificationEnabled;	// 8 = 0x8
    _Bool _notificationUIEnabled;	// 9 = 0x9
    _Bool _isHandlingArticleNotification;	// 10 = 0xa
    _Bool _autoEnableNotificationsIsPending;	// 11 = 0xb
    id <FRFeldsparContext> _feldsparContext;	// 16 = 0x10
    id <FRUserNotificationResponseHandlerType> _userResponseHandler;	// 24 = 0x18
    _TtC5TeaUI12Bootstrapper *_bootstrapper;	// 32 = 0x20
    id <FRURLRouterManagerType> _urlRouterManager;	// 40 = 0x28
    TSNotificationSettings *_notificationSettings;	// 48 = 0x30
    NSHashTable *_observers;	// 56 = 0x38
    id <FCNewsAppConfigurationManager> _appConfigurationManager;	// 64 = 0x40
    FCNotificationsConfiguration *_notificationsConfiguration;	// 72 = 0x48
    NSString *_deviceToken;	// 80 = 0x50
    FRNotificationAutoEnableHelper *_notificationAutoEnableHelper;	// 88 = 0x58
    NSDictionary *_newsUserInfo;	// 96 = 0x60
    NFMutexLock *_newsUserInfoLock;	// 104 = 0x68
    FCAMSPushHandler *_amsPushHandler;	// 112 = 0x70
}

+ (void)initialize;	// IMP=0x0020000000074c48
- (void).cxx_destruct;	// IMP=0x002000000007b56c
@property(readonly, nonatomic) FCAMSPushHandler *amsPushHandler; // @synthesize amsPushHandler=_amsPushHandler;
@property(retain, nonatomic) NFMutexLock *newsUserInfoLock; // @synthesize newsUserInfoLock=_newsUserInfoLock;
@property(retain, nonatomic) NSDictionary *newsUserInfo; // @synthesize newsUserInfo=_newsUserInfo;
@property(retain, nonatomic) FRNotificationAutoEnableHelper *notificationAutoEnableHelper; // @synthesize notificationAutoEnableHelper=_notificationAutoEnableHelper;
@property(nonatomic) _Bool autoEnableNotificationsIsPending; // @synthesize autoEnableNotificationsIsPending=_autoEnableNotificationsIsPending;
@property(copy, nonatomic) NSString *deviceToken; // @synthesize deviceToken=_deviceToken;
@property(retain, nonatomic) FCNotificationsConfiguration *notificationsConfiguration; // @synthesize notificationsConfiguration=_notificationsConfiguration;
@property(retain, nonatomic) id <FCNewsAppConfigurationManager> appConfigurationManager; // @synthesize appConfigurationManager=_appConfigurationManager;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool isHandlingArticleNotification; // @synthesize isHandlingArticleNotification=_isHandlingArticleNotification;
@property(nonatomic) _Bool notificationUIEnabled; // @synthesize notificationUIEnabled=_notificationUIEnabled;
@property(retain, nonatomic) TSNotificationSettings *notificationSettings; // @synthesize notificationSettings=_notificationSettings;
@property(nonatomic) _Bool systemNotificationEnabled; // @synthesize systemNotificationEnabled=_systemNotificationEnabled;
@property(retain, nonatomic) id <FRURLRouterManagerType> urlRouterManager; // @synthesize urlRouterManager=_urlRouterManager;
@property(retain, nonatomic) _TtC5TeaUI12Bootstrapper *bootstrapper; // @synthesize bootstrapper=_bootstrapper;
@property(retain, nonatomic) id <FRUserNotificationResponseHandlerType> userResponseHandler; // @synthesize userResponseHandler=_userResponseHandler;
@property(readonly, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
- (long long)notificationPrompt;	// IMP=0x001000000007b2e7
- (long long)subscribeNotificationPromptForTagID:(id)arg1;	// IMP=0x001000000007b21c
- (void)_scheduleLocalNotificationWithIdentifier:(id)arg1 title:(id)arg2 body:(id)arg3 userInfo:(id)arg4 category:(id)arg5 timeInterval:(double)arg6;	// IMP=0x001000000007affb
- (id)_notificationAttachmentsWithThumbnailFileURL:(id)arg1 publisherLogoFileURL:(id)arg2 publisherLogoCompactFileURL:(id)arg3;	// IMP=0x001000000007aa35
- (void)_notifiyObserversOfHandledNotificationResponseWithAnalyticsReferral:(id)arg1;	// IMP=0x001000000007a8b1
- (void)scheduleLocalNotificationForArticleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000791b5
- (void)_openUserNotificationSettings;	// IMP=0x00100000000790ea
- (void)userNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2;	// IMP=0x00100000000790d8
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007807e
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000077e91
- (void)unregisterForRemoteNotifications;	// IMP=0x0010000000077e4d
- (id)_headlineFromArticleNotificationPayload:(id)arg1;	// IMP=0x0010000000077c75
- (void)handleActionForRemoteArticleNotificationWithIdentifier:(id)arg1 forUserInfo:(id)arg2;	// IMP=0x00100000000772fa
- (_Bool)canHandleRemoteNotification:(id)arg1;	// IMP=0x0010000000077272
- (id)_identifierWithPrefix:(id)arg1 tags:(id)arg2;	// IMP=0x0010000000077147
- (id)_combinedStringWithTagNames:(id)arg1;	// IMP=0x0010000000076f4e
- (void)_notifyOfTagsWithNotificationEnabled:(id)arg1;	// IMP=0x0010000000076cbf
- (void)_notifyOfTagsWithNotificationAvailable:(id)arg1;	// IMP=0x0010000000076971
- (void)scheduleLocalNotificationforChannels:(id)arg1;	// IMP=0x001000000007695f
- (void)subscriptionController:(id)arg1 didFindTagsWithNotificationSupport:(id)arg2;	// IMP=0x00100000000761bd
- (_Bool)isTagIDWhitelistedForNotifications:(id)arg1;	// IMP=0x00100000000760ca
- (void)_updateNotificationUIEnabled;	// IMP=0x0010000000075fa6
- (void)configurationManager:(id)arg1 appConfigurationDidChange:(id)arg2;	// IMP=0x0010000000075edd
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000075e31
- (void)addObserver:(id)arg1;	// IMP=0x0010000000075d1d
- (void)_checkUNAuthorizationStatus;	// IMP=0x0010000000075bc8
- (void)activityObservingApplicationWindowDidBecomeForeground;	// IMP=0x0010000000075bb6
- (void)notifyDeviceTokenIsAvailable:(id)arg1;	// IMP=0x0010000000075b24
- (id)lastNotificationPayloadInfo;	// IMP=0x0010000000075993
- (id)resetLastNotificationPayloadInfo;	// IMP=0x00100000000757ca
- (void)autoEnableNotificationsForPreSubscribedChannels;	// IMP=0x00100000000756c5
- (void)refreshLastDeclinedNotificationAlertDate;	// IMP=0x0010000000075643
- (_Bool)canShowNotificationAlert;	// IMP=0x00100000000754d9
- (id)notificationMarketingCategory;	// IMP=0x00100000000754a6
- (id)channelNotificationSupportCategory;	// IMP=0x001000000007534b
- (id)notificationArticleCategory;	// IMP=0x0010000000075108
- (void)dealloc;	// IMP=0x0010000000075060
- (id)initWithFeldsparContext:(id)arg1 amsPushHandler:(id)arg2;	// IMP=0x0010000000074d34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
