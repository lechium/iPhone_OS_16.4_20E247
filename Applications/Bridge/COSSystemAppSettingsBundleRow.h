//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSBundle, NSDictionary, NSString;

@interface COSSystemAppSettingsBundleRow : NSObject
{
    _Bool _requiredAppsInstalled;	// 8 = 0x8
    _Bool _showOnAnyRequiredWatchAppsInstalled;	// 9 = 0x9
    NSArray *_requiredInstalledWatchApps;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSBundle *_bundle;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    NSString *_displayName;	// 48 = 0x30
    NSArray *_requiredCapabilities;	// 56 = 0x38
    NSArray *_forbiddenCapabilities;	// 64 = 0x40
    NSDictionary *_requiredFeatureFlags;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000127a31
@property(nonatomic) _Bool showOnAnyRequiredWatchAppsInstalled; // @synthesize showOnAnyRequiredWatchAppsInstalled=_showOnAnyRequiredWatchAppsInstalled;
@property(retain, nonatomic) NSDictionary *requiredFeatureFlags; // @synthesize requiredFeatureFlags=_requiredFeatureFlags;
@property(retain, nonatomic) NSArray *forbiddenCapabilities; // @synthesize forbiddenCapabilities=_forbiddenCapabilities;
@property(retain, nonatomic) NSArray *requiredCapabilities; // @synthesize requiredCapabilities=_requiredCapabilities;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool requiredAppsInstalled; // @synthesize requiredAppsInstalled=_requiredAppsInstalled;
@property(retain, nonatomic) NSArray *requiredInstalledWatchApps; // @synthesize requiredInstalledWatchApps=_requiredInstalledWatchApps;
- (id)description;	// IMP=0x0010000000127878
- (_Bool)_requiredAppsInstalled:(id)arg1;	// IMP=0x0010000000127555
- (void)setAreRequiredWatchAppsInstalled:(id)arg1;	// IMP=0x0010000000127474
- (id)settingsBundleDict;	// IMP=0x0010000000127170
- (void)_setRequiredInstalledWatchAppsForLegacy:(id)arg1;	// IMP=0x00100000001270e5
- (id)initWithBundle:(id)arg1 name:(id)arg2;	// IMP=0x0010000000126da8

@end

