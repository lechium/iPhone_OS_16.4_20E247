//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKPushMessage;

@interface AKPushMessageNotificationPresenter : NSObject
{
    AKPushMessage *_message;	// 8 = 0x8
    struct __CFUserNotification *_pendingNotification;	// 16 = 0x10
}

+ (void)populateNotificationOptionsWithCommonKeys:(id)arg1 makeNoise:(_Bool)arg2;	// IMP=0x004000000007535d
+ (struct __CFUserNotification *)createUserNotificationWithTitle:(id)arg1 body:(id)arg2 lockScreenTitle:(id)arg3 lockScreenBody:(id)arg4 defaultButtonTitle:(id)arg5 alternateButtonTitle:(id)arg6 makeNoise:(_Bool)arg7;	// IMP=0x0010000000074ff1
+ (struct __CFUserNotification *)createUserNotificationWithTitle:(id)arg1 body:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 makeNoise:(_Bool)arg5;	// IMP=0x0010000000074fc1
+ (id)createUserNotificationOptionsWithTitle:(id)arg1 body:(id)arg2 lockScreenTitle:(id)arg3 lockScreenBody:(id)arg4 defaultButtonTitle:(id)arg5 alternateButtonTitle:(id)arg6 makeNoise:(_Bool)arg7;	// IMP=0x0010000000074d61
+ (id)createUserNotificationOptionsWithTitle:(id)arg1 body:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 makeNoise:(_Bool)arg5;	// IMP=0x0010000000074d31
+ (id)_presenterQueue;	// IMP=0x0010000000073172
- (void).cxx_destruct;	// IMP=0x0020000000075ee4
- (void)_promptForAuthenticationPasswordForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000075cc6
- (_Bool)_isPasswordPromptNecessaryForCommand:(unsigned long long)arg1;	// IMP=0x0010000000075c6f
- (void)_startChangePasswordFlowForAccount:(id)arg1;	// IMP=0x0010000000075a16
- (void)_promptForChangePasswordForAccount:(id)arg1;	// IMP=0x0010000000075653
- (unsigned long long)_notificationResultFromButtonPressed:(unsigned long long)arg1;	// IMP=0x0010000000075635
- (void)_receiveResponseFromNotification:(struct __CFUserNotification *)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000007547b
- (void)tearDown;	// IMP=0x001000000007515d
- (id)_loginNotificationOptionsWithContext:(id)arg1 isSilent:(_Bool)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4;	// IMP=0x00100000000749a7
- (void)_locationNameWithLatitude:(id)arg1 longitude:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000745d0
- (struct __CFUserNotification *)_loginAlertForAccount:(id)arg1 latitude:(id)arg2 longitude:(id)arg3 message:(id)arg4 resolvedBody:(id)arg5;	// IMP=0x0010000000074574
- (id)_loginAlertOptionsForAccount:(id)arg1 latitude:(id)arg2 longitude:(id)arg3 message:(id)arg4 resolvedBody:(id)arg5;	// IMP=0x0010000000074212
- (void)_waitForNotificationResponse:(struct __CFUserNotification *)arg1 withIdentifier:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000073f61
- (void)_showCode:(id)arg1 body:(id)arg2 title:(id)arg3 footer:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000073da8
- (void)presentLoginNotificationWithCode:(id)arg1 piggy:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000073a58
- (void)_handleResult:(unsigned long long)arg1 forAccount:(id)arg2;	// IMP=0x00100000000739e3
- (void)presentMessageWithAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000731f3
- (id)initWithMessage:(id)arg1;	// IMP=0x0010000000073107

@end
