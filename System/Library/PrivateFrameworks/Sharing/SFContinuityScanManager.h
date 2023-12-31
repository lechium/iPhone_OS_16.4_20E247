//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SFXPCClient.h"

@class NSHashTable, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface SFContinuityScanManager : SFXPCClient
{
    NSMutableSet *_foundDevices;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    unsigned long long _scanTypes;	// 24 = 0x18
}

+ (id)sharedManager;	// IMP=0x0010000000049ba6
- (void).cxx_destruct;	// IMP=0x000000000004af70
@property unsigned long long scanTypes; // @synthesize scanTypes=_scanTypes;
@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain) NSMutableSet *foundDevices; // @synthesize foundDevices=_foundDevices;
- (_Bool)shouldEscapeXpcTryCatch;	// IMP=0x000000000004aef8
- (id)remoteObjectInterface;	// IMP=0x000000000004aed8
- (id)exportedInterface;	// IMP=0x000000000004ad59
- (id)machServiceName;	// IMP=0x000000000004ad4c
- (void)pairedDevicesChanged:(id)arg1;	// IMP=0x000000000004abb7
- (void)lostDeviceWithDevice:(id)arg1;	// IMP=0x000000000004a948
- (void)foundDeviceWithDevice:(id)arg1;	// IMP=0x000000000004a6d9
- (void)receivedAdvertisement:(id)arg1;	// IMP=0x000000000004a462
- (void)onqueue_connectionInterrupted;	// IMP=0x000000000004a2b8
- (void)onqueue_connectionEstablished;	// IMP=0x000000000004a253
- (void)activityPayloadFromDeviceUniqueID:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000049f9b
- (void)scanForTypes:(unsigned long long)arg1;	// IMP=0x0000000000049e17
- (void)_getRemoteObjectProxyOnQueue:(CDUnknownBlockType)arg1;	// IMP=0x0000000000049e05
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000049d35
- (void)addObserver:(id)arg1;	// IMP=0x0000000000049cd1
- (id)init;	// IMP=0x0000000000049c08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

