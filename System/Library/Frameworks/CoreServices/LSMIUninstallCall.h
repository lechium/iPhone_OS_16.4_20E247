//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LSMIUninstallCall : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000e1384
- (void).cxx_destruct;	// IMP=0x00000000000e15c5
- (_Bool)validateEntitlementsOfConnection:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000e15b2
- (id)invokeWithOptions:(id)arg1 error:(id *)arg2 progressCallback:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e153a
- (_Bool)isUninstall;	// IMP=0x00000000000e1532
- (id)bundleIdentifier;	// IMP=0x00000000000e1524
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e14b3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e1490
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e13ff
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x00000000000e138c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
