//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _MXVersion;

__attribute__((visibility("hidden")))
@interface _MXBundleBlacklistEntry : NSObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    _MXVersion *_minimum;	// 16 = 0x10
    _MXVersion *_maximum;	// 24 = 0x18
}

+ (id)blacklistEntriesFromDefaultsValue:(id)arg1;	// IMP=0x0060000000106a65
- (void).cxx_destruct;	// IMP=0x0000000000106e96
- (_Bool)isExtensionAllowed:(id)arg1;	// IMP=0x00000000001069b8
- (_Bool)isBundleRecordAllowed:(id)arg1;	// IMP=0x000000000010690b
- (_Bool)_isVersionValueAllowed:(id)arg1;	// IMP=0x00000000001067c5
- (id)initWithBundleIdentifier:(id)arg1 minimumDisallowedVersion:(id)arg2 maximumDisallowedVersion:(id)arg3;	// IMP=0x0000000000106701

@end
