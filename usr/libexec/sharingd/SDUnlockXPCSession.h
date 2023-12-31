//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SFAutoUnlockDevice;
@protocol SDUnlockXPCSesssionDelegate, SFUnlockClientProtocol;

@interface SDUnlockXPCSession : NSObject
{
    id <SDUnlockXPCSesssionDelegate> _delegate;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    id <SFUnlockClientProtocol> _clientProxy;	// 24 = 0x18
    SFAutoUnlockDevice *_enableDevice;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000b97fb
@property(retain, nonatomic) SFAutoUnlockDevice *enableDevice; // @synthesize enableDevice=_enableDevice;
@property(retain, nonatomic) id <SFUnlockClientProtocol> clientProxy; // @synthesize clientProxy=_clientProxy;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain) id <SDUnlockXPCSesssionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)manager:(id)arg1 didStartAuthenticationFor:(id)arg2;	// IMP=0x00100000000b9721
- (void)manager:(id)arg1 didFailAuthenticationFor:(id)arg2 error:(id)arg3;	// IMP=0x00100000000b9653
- (void)manager:(id)arg1 didCompleteAuthenticationFor:(id)arg2;	// IMP=0x00100000000b95a3
- (_Bool)checkEntitlementWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b9299
- (void)cancelAuthenticationSessionWithID:(id)arg1;	// IMP=0x00100000000b9115
- (void)authenticateUsingClientProxy:(id)arg1 type:(unsigned long long)arg2 sessionID:(id)arg3;	// IMP=0x00100000000b8f22
- (void)listEligibleDevicesForAuthenticationType:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b8d2b
- (void)unlockStateForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b8bec
- (void)establishStashBagWithManifest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b8add
- (void)establishStashBagWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b89ce
- (void)unlockEnabledWithDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b893b
- (void)disableUnlockWithDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b881f
- (void)enableUnlockWithDevice:(id)arg1 fromKey:(_Bool)arg2 withPasscode:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b85f6
- (void)session:(id)arg1 didFailUnlockWithResults:(id)arg2 error:(id)arg3 incrementedAttempt:(_Bool)arg4;	// IMP=0x00100000000b8545
- (void)session:(id)arg1 didCompleteUnlockWithDevice:(id)arg2;	// IMP=0x00100000000b83f9
- (void)session:(id)arg1 didBeginAttemptWithDevice:(id)arg2;	// IMP=0x00100000000b82ec
- (void)session:(id)arg1 didFailToEnableDevice:(id)arg2 error:(id)arg3;	// IMP=0x00100000000b8188
- (void)session:(id)arg1 didEnableWithDevice:(id)arg2;	// IMP=0x00100000000b804e
- (void)session:(id)arg1 didReceiveKeyDeviceLocked:(id)arg2;	// IMP=0x00100000000b7fdc
- (void)notifyDelegate;	// IMP=0x00100000000b7fa2
- (void)authPromptInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b7e08
- (void)autoUnlockStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b7c6e
- (void)requestRelock;	// IMP=0x00100000000b7ba4
- (void)cancelAutoUnlock:(_Bool)arg1;	// IMP=0x00100000000b7b34
- (void)cancelAutoUnlock;	// IMP=0x00100000000b7a8e
- (void)attemptAutoUnlockForSiriWithClientProxy:(id)arg1;	// IMP=0x00100000000b7888
- (void)attemptAutoUnlockWithoutNotifyingWatchWithClientProxy:(id)arg1;	// IMP=0x00100000000b7682
- (void)attemptAutoUnlockWithClientProxy:(id)arg1;	// IMP=0x00100000000b747f
- (void)completeAutoUnlockWithNotification:(_Bool)arg1;	// IMP=0x00100000000b742c
- (void)clearPhoneAutoUnlockNotification:(_Bool)arg1;	// IMP=0x00100000000b73d9
- (void)donateDeviceUnlockedWithMask:(_Bool)arg1;	// IMP=0x00100000000b7386
- (void)prewarmAutoUnlock;	// IMP=0x00100000000b7342
- (void)disableAutoUnlockForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b71c5
- (void)cancelEnablingAutoUnlockForDevice:(id)arg1;	// IMP=0x00100000000b7147
- (void)enableAutoUnlockWithDevice:(id)arg1 passcode:(id)arg2 clientProxy:(id)arg3;	// IMP=0x00100000000b6ee3
- (void)eligibleAutoUnlockDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b6c87
- (void)repairCloudPairing;	// IMP=0x00100000000b6c43
- (void)invalidate;	// IMP=0x00100000000b6bae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

