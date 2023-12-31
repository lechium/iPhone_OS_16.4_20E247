//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, NSString;

@interface APMockAdServerSettings
{
}

+ (id)adResponseDataForPlacementType:(long long)arg1;	// IMP=0x004000000009e024
+ (_Bool)isAdResponseMockedForPlacementType:(long long)arg1;	// IMP=0x001000000009dfab
+ (id)storageWithDefaultValues:(id)arg1;	// IMP=0x001000000009dea8

// Remaining properties
@property NSString *adResponseAudio; // @dynamic adResponseAudio;
@property NSString *adResponseBanner; // @dynamic adResponseBanner;
@property NSString *adResponseInterstitial; // @dynamic adResponseInterstitial;
@property NSString *adResponseNative; // @dynamic adResponseNative;
@property NSString *adResponseVideo; // @dynamic adResponseVideo;
@property NSString *adTag; // @dynamic adTag;
@property NSArray *keyboardOverride; // @dynamic keyboardOverride;
@property NSNumber *latencyInMilliseconds; // @dynamic latencyInMilliseconds;
@property NSNumber *logAdResponsesAsText; // @dynamic logAdResponsesAsText;
@property NSString *mockAdServerUrl; // @dynamic mockAdServerUrl;
@property NSNumber *mockingEnabled; // @dynamic mockingEnabled;
@property NSString *statusConditionExpression; // @dynamic statusConditionExpression;

@end

