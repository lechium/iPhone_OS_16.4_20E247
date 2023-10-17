//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface COSFindMyController : NSObject
{
}

+ (_Bool)canProceedToUnpairForError:(id)arg1;	// IMP=0x00400000000319aa
+ (id)usernameForContext:(id)arg1;	// IMP=0x00100000000306b3
+ (_Bool)isTinkerDevice:(id)arg1;	// IMP=0x0010000000030662
+ (void)allowsMarkAsMissingForUDID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003049c
+ (_Bool)enabledDeviceLocatorForCompanion;	// IMP=0x00100000000303ad
+ (_Bool)isDeviceLocatorEnabled;	// IMP=0x00100000000302de
+ (void)recordShowingActivationLockDetailsForPairingDevice;	// IMP=0x0010000000030103
- (void)markAsMissingForContext:(id)arg1 messageString:(id)arg2 buttonTitle:(id)arg3 presentingViewController:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0040000000031687
- (void)disableActivationLockForContext:(id)arg1 messageString:(id)arg2 buttonTitle:(id)arg3 presentingViewController:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000030f0e
- (void)authenticateAccountActionForContext:(id)arg1 withMessage:(id)arg2 buttonTitle:(id)arg3 presentingViewController:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000307b0

@end
