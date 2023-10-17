//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_EXExtensionIdentity.h"

@class LSBundleRecord, NSDictionary, NSString, NSURL, NSUUID;

__attribute__((visibility("hidden")))
@interface _EXExtensionValueIdentity : _EXExtensionIdentity
{
    unsigned char _userElection;	// 8 = 0x8
    unsigned char _defaultUserElection;	// 9 = 0x9
    unsigned int _platform;	// 12 = 0xc
    NSString *_extensionPointIdentifier;	// 16 = 0x10
    NSString *_bundleIdentifier;	// 24 = 0x18
    LSBundleRecord *_containingBundleRecord;	// 32 = 0x20
    NSUUID *_UUID;	// 40 = 0x28
    NSString *_localizedName;	// 48 = 0x30
    NSURL *_url;	// 56 = 0x38
    NSURL *_containingURL;	// 64 = 0x40
    NSDictionary *_sdkDictionary;	// 72 = 0x48
    NSDictionary *_extensionDictionary;	// 80 = 0x50
    NSDictionary *_attributes;	// 88 = 0x58
    NSDictionary *_entitlements;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000002f968
- (void).cxx_destruct;	// IMP=0x000000000002ff89
- (unsigned char)defaultUserElection;	// IMP=0x000000000002ff78
- (unsigned char)userElection;	// IMP=0x000000000002ff67
- (id)entitlements;	// IMP=0x000000000002ff51
- (id)attributes;	// IMP=0x000000000002ff3b
- (id)extensionDictionary;	// IMP=0x000000000002ff25
- (id)sdkDictionary;	// IMP=0x000000000002ff0f
- (id)containingURL;	// IMP=0x000000000002fef9
- (id)url;	// IMP=0x000000000002fee3
- (id)localizedName;	// IMP=0x000000000002fecd
- (id)UUID;	// IMP=0x000000000002feb7
- (unsigned int)platform;	// IMP=0x000000000002fea7
- (id)containingBundleRecord;	// IMP=0x000000000002fe91
- (id)bundleIdentifier;	// IMP=0x000000000002fe7b
- (id)extensionPointIdentifier;	// IMP=0x000000000002fe65
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002f970
- (id)entitlementNamed:(id)arg1 ofClass:(Class)arg2;	// IMP=0x000000000002f8df

@end
