//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EAAccessory, MapsExternalAccessoryState;

@interface MapsExternalAccessory : NSObject
{
    _Bool _initialising;	// 8 = 0x8
    EAAccessory *_accessory;	// 16 = 0x10
    MapsExternalAccessoryState *_currentState;	// 24 = 0x18
    MapsExternalAccessoryState *_lastPostedState;	// 32 = 0x20
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;	// IMP=0x004000000069761b
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;	// IMP=0x00100000006975a9
+ (id)sharedInstance;	// IMP=0x0010000000695da3
- (void).cxx_destruct;	// IMP=0x0020000000697efd
@property(retain, nonatomic) MapsExternalAccessoryState *lastPostedState; // @synthesize lastPostedState=_lastPostedState;
@property(retain, nonatomic) MapsExternalAccessoryState *currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) EAAccessory *accessory; // @synthesize accessory=_accessory;
- (void)_disconnectFromVehicle;	// IMP=0x0010000000697dab
- (void)_postNotificationIfNeeded;	// IMP=0x00100000006979be
- (_Bool)_isCurrentStateEqualLastPostedState;	// IMP=0x001000000069793c
- (void)_updateFromNotificationName:(id)arg1 userInfo:(id)arg2;	// IMP=0x001000000069764e
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0010000000697582
- (void)forwardInvocation:(id)arg1;	// IMP=0x00100000006974c3
@property(readonly, nonatomic) int primaryEngineType;
@property(readonly, nonatomic) _Bool isHybridEngineType;
@property(readonly, nonatomic) _Bool needsFuel;
@property(readonly, nonatomic) _Bool hasEngineType;
- (id)identifier;	// IMP=0x0010000000696f9c
- (void)_accessoryDidDisconnect:(id)arg1;	// IMP=0x0010000000696eb1
- (void)_accessoryDidUpdate:(id)arg1;	// IMP=0x0010000000696e1c
- (void)_accessoryDidUpdateVehicle:(id)arg1;	// IMP=0x0010000000696d87
- (void)_accessoryDidConnect:(id)arg1;	// IMP=0x0010000000696cf2
- (void);	// IMP=0x00100000006968fe
- (void)_stopListenForDebugTestNotifications;	// IMP=0x00100000006967cb
- (void)_startListenForDebugTestNotifications;	// IMP=0x0010000000696313
- (void)sendDestinationInformation:(id)arg1 identifier:(id)arg2;	// IMP=0x001000000069628d
- (_Bool)isConnected;	// IMP=0x001000000069621f
- (void)dealloc;	// IMP=0x0010000000696166
- (id)init;	// IMP=0x0010000000695df8

@end

