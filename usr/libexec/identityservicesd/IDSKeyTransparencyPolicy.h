//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSKeyTransparencyPolicy : NSObject
{
}

- (_Bool)isKeyTransparencyUIEnabled;	// IMP=0x0040000000763b00
- (_Bool)shouldSyncTrustCircleAfterSelfQueryForServiceIdentifier:(id)arg1;	// IMP=0x0010000000763700
- (_Bool)isKeyTransparencySFAnalyticsEnabled;	// IMP=0x00100000007635e0
- (_Bool)isKeyTransparencyRTCAnalyticsEnabled;	// IMP=0x00100000007634b0
- (_Bool)isKeyTransparencyAnalyticsEnabled;	// IMP=0x0010000000763390
- (unsigned long long)keyTransparencyMaximumVerificationsPerXPCActivity;	// IMP=0x0010000000763270
- (unsigned long long)keyTransparencyXPCActivityIntervalInSeconds;	// IMP=0x0010000000763130
- (_Bool)isKeyTransparencyXPCActivityEnabled;	// IMP=0x0010000000763010
- (_Bool)isKeyTransparencyAccountKeyCircleEnabled;	// IMP=0x0010000000762eb0
- (_Bool)isKeyTransparencyCloudKitCircleEnabled;	// IMP=0x0010000000762d50
- (_Bool)isKeyTransparencyTrustCircleEnabled;	// IMP=0x0010000000762cf0
- (_Bool)isKeyTransparencyEnabledForServiceType:(id)arg1;	// IMP=0x0010000000762bc0
- (_Bool)isKeyTransparencyEnabledForServiceIdentifier:(id)arg1;	// IMP=0x00100000007629f0
- (_Bool)_isKeyTransparencyDisabledViaServerBag;	// IMP=0x00100000007628f0
- (_Bool)_isKeyTransparencyEnabledViaServerBag;	// IMP=0x00100000007628c0
- (_Bool)_isKeyTransparencyEnabledViaDefaults;	// IMP=0x0010000000762860
- (_Bool)isKeyTransparencyTrustCircleAllowedWithoutEnrollment;	// IMP=0x0010000000762840
- (_Bool)isKeyTransparencyPeerVerificationAllowedWithoutEnrollment;	// IMP=0x0010000000762810
- (_Bool)isKeyTransparencyEnabled;	// IMP=0x00100000007627b0

@end
