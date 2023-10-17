//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AFEndpointInfo, AFInstanceInfo, AFPeerInfo, AFSpeechInfo, NSBundle, NSSet, NSString, NSURL, SABaseCommand;

@protocol AFServiceHelper <NSObject>
- (void)prepareForAudioHandoffFailedWithCompletion:(void (^)(void))arg1;
- (void)prepareForAudioHandoffWithCompletion:(void (^)(_Bool))arg1;
- (AFPeerInfo *)peerInfoForCurrentCommand;
- (_Bool)isTimeoutSuspended;
- (void)handleCommand:(SABaseCommand *)arg1 completion:(void (^)(SABaseCommand *, NSError *))arg2;
- (_Bool)isDeviceInCarDND;
- (_Bool)isDeviceInStarkMode;
- (_Bool)isDeviceLockedWithPasscode;
- (NSString *)assistantLocalizedStringForKey:(NSString *)arg1 table:(NSString *)arg2 bundle:(NSBundle *)arg3;
- (void)dismissAssistant;
- (_Bool)openSensitiveURL:(NSURL *)arg1;

@optional
- (void)isDeviceWatchAuthenticatedWithCompletion:(void (^)(_Bool))arg1;
- (AFSpeechInfo *)speechInfo;
- (AFInstanceInfo *)instanceInfo;
- (AFEndpointInfo *)endpointInfo;
- (void)fetchContextsForKeys:(NSSet *)arg1 includesNearbyDevices:(_Bool)arg2 completion:(void (^)(NSArray *))arg3;
@end
