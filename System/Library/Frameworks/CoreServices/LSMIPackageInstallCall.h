//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface LSMIPackageInstallCall : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    NSURL *_packageURL;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000e0918
- (void).cxx_destruct;	// IMP=0x00000000000e0c94
- (_Bool)validateEntitlementsOfConnection:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000e0c81
- (id)invokeWithOptions:(id)arg1 error:(id *)arg2 progressCallback:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e0bb9
- (_Bool)isUninstall;	// IMP=0x00000000000e0bb1
- (id)bundleIdentifier;	// IMP=0x00000000000e0ba3
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e0b21
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e0ab3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e09d9
- (id)initWithBundleIdentifier:(id)arg1 packageURL:(id)arg2;	// IMP=0x00000000000e0920

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
