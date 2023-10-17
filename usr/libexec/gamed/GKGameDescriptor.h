//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface GKGameDescriptor
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSString *_bundleVersion;	// 16 = 0x10
    NSNumber *_adamID;	// 24 = 0x18
    NSNumber *_externalVersion;	// 32 = 0x20
    NSString *_shortBundleVersion;	// 40 = 0x28
    long long _platform;	// 48 = 0x30
}

+ (id)platformStringForServerRequest:(long long)arg1;	// IMP=0x00400000001f3bd2
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001f3bca
+ (id)secureCodedPropertyKeys;	// IMP=0x00100000001f3a7f
+ (id)supportedPlatforms;	// IMP=0x00100000001f3631
+ (id)currentPlatformServerString;	// IMP=0x00100000001f3624
+ (long long)currentPlatform;	// IMP=0x00100000001f3619
+ (long long)gamePlatformFromServerPushString:(id)arg1;	// IMP=0x00100000001f3577
+ (long long)gamePlatformFromServerGameDescriptorString:(id)arg1;	// IMP=0x00100000001f34d5
+ (id)gameDescriptorWithBundleID:(id)arg1 bundleVersion:(id)arg2 shortBundleVersion:(id)arg3 adamID:(id)arg4;	// IMP=0x00100000001f33d9
- (void).cxx_destruct;	// IMP=0x00200000001f4193
@property(nonatomic) long long platform; // @synthesize platform=_platform;
@property(copy, nonatomic) NSString *shortBundleVersion; // @synthesize shortBundleVersion=_shortBundleVersion;
@property(retain, nonatomic) NSNumber *externalVersion; // @synthesize externalVersion=_externalVersion;
@property(retain, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)description;	// IMP=0x00100000001f3f4f
- (id)dictionaryForRequest;	// IMP=0x00100000001f3dbc
- (id)initWithPushDictionary:(id)arg1;	// IMP=0x00100000001f37d4
- (id)initWithDictionary:(id)arg1;	// IMP=0x00100000001f363e

@end
