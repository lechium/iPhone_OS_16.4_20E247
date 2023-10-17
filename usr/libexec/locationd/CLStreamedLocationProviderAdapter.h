//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLStreamedLocationProviderAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x00200000000f9c64
+ (id)getSilo;	// IMP=0x00100000000f9a50
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f9a37
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000000f99da
- (void)pairedDeviceIsNearby:(_Bool)arg1;	// IMP=0x00200000000fab77
- (void)successfullySentMessage:(id)arg1;	// IMP=0x00100000000fab71
- (void)failedToSendMessage:(id)arg1 withError:(id)arg2 isFatal:(_Bool)arg3;	// IMP=0x00000000000fab6b
- (void)receivedMessageOfType:(id)arg1 withPayload:(id)arg2;	// IMP=0x00100000000faab9
- (void)releaseEmergencyEnablementAssertion;	// IMP=0x00100000000fa769
- (void)takeEmergencyEnablementAssertion;	// IMP=0x00100000000fa40e
- (void)releaseDisablementAssertion;	// IMP=0x00100000000fa0b5
- (void)takeDisablementAssertion;	// IMP=0x00100000000f9d43
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f9c3c
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f9c0f
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f9be7
- (void *)adaptee;	// IMP=0x00100000000f9bb4
- (void)endService;	// IMP=0x00100000000f9b99
- (void)beginService;	// IMP=0x00100000000f9ae9
- (id)init;	// IMP=0x00100000000f9aac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
