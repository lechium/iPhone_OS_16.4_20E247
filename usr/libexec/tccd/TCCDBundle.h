//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary, NSString, NSURL;

@interface TCCDBundle : NSObject
{
    struct __CFBundle *_cfBundle;	// 8 = 0x8
}

+ (id)bundleWithIdentifier:(id)arg1;	// IMP=0x004000000002fa34
+ (id)bundleWithURL:(id)arg1;	// IMP=0x001000000002f9e7
- (_Bool)isPathContainedWithin:(id)arg1;	// IMP=0x002000000003028e
- (_Bool)isPathTheMainExecutable:(id)arg1;	// IMP=0x001000000003019e
@property(readonly, getter=isRunsIndependentlyOfCompanionApp) _Bool runsIndependentlyOfCompanionApp;
@property(readonly, getter=isWatchOnly) _Bool watchOnly;
@property(readonly, getter=isWatchKitApp) _Bool watchKitApp;
- (id)localizedUsageDescriptionForKey:(id)arg1;	// IMP=0x001000000002ff95
@property(readonly, getter=isLSUIElement) _Bool LSUIElement;
@property(readonly) NSString *extensionPointIdentifier;
@property(readonly) NSString *bundleVersion;
@property(readonly) NSDictionary *localizedInfoDictionary;
@property(readonly) NSDictionary *infoDictionary;
@property(readonly) NSURL *executableURL;
@property(readonly) NSString *executablePath;
- (id)description;	// IMP=0x001000000002fb03
@property(readonly) NSURL *bundleURL;
@property(readonly) NSString *bundlePath;
@property(readonly) NSString *bundleIdentifier;
- (void)dealloc;	// IMP=0x001000000002f9a8
- (MISSING_TYPE *)initWithIdentifier: /* Error: Ran out of types for this method. */;	// IMP=0x001000000002f886
- (id)initWithURL:(id)arg1;	// IMP=0x001000000002f7bc

@end
