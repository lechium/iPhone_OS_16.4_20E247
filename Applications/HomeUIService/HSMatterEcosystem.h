//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LSApplicationRecord, MTSDeviceSetupExtensionMessenger, NSString;

@interface HSMatterEcosystem : NSObject
{
    MTSDeviceSetupExtensionMessenger *_extensionMessenger;	// 8 = 0x8
    LSApplicationRecord *_applicationRecord;	// 16 = 0x10
}

+ (id)ecosystemForContainingAppBundleURL:(id)arg1;	// IMP=0x00400000000122e5
- (void).cxx_destruct;	// IMP=0x0020000000012864
@property(retain, nonatomic) LSApplicationRecord *applicationRecord; // @synthesize applicationRecord=_applicationRecord;
@property(readonly, nonatomic) MTSDeviceSetupExtensionMessenger *extensionMessenger; // @synthesize extensionMessenger=_extensionMessenger;
@property(readonly, nonatomic) _Bool isTestEcosystemApp;
@property(readonly, nonatomic) _Bool isAppleHome;
@property(readonly, nonatomic) NSString *teamIdentifier;
@property(readonly, nonatomic) NSString *appBundleIdentifier;
@property(readonly, nonatomic) NSString *developerName;
@property(readonly, nonatomic) NSString *displayName;
- (id)initWithExtensionMessenger:(id)arg1;	// IMP=0x0010000000012451
- (id)initWithApplicationRecord:(id)arg1;	// IMP=0x00100000000123e9

@end

