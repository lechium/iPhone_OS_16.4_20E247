//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSBundle.h>

@class MISSING_TYPE;

@interface NSBundle (GKAdditions)
+ (_Bool)_gkMainBundleIsGameCenterSystemProcess;	// IMP=0x002000000011eba4
+ (_Bool)_gkBundleIdentifierUsesRemoteAlertAsDashboardPresenter:(id)arg1;	// IMP=0x001000000011e9c9
+ (_Bool)_gkBundleIdentifierIsRelatedToContactsUI:(id)arg1;	// IMP=0x001000000011e866
+ (id)_gkLocalizedMessageFromPushDictionary:(id)arg1 forBundleID:(id)arg2;	// IMP=0x001000000011e1d0
+ (id)_gkLocalizedMessageFromDictionary:(id)arg1 forBundleID:(id)arg2;	// IMP=0x001000000011dfa6
+ (id)_gkLocalizedMessageFromDictionary:(id)arg1;	// IMP=0x001000000011de8e
+ (id)_gkPreferredSystemLanguage;	// IMP=0x001000000011d2b3
+ (id)_gkBundleIdentifierOrProcessNameForPID:(int)arg1;	// IMP=0x001000000011c73f
+ (id)_gkBundleWithPID:(int)arg1;	// IMP=0x001000000011c599
+ (id)_gkBundleWithIdentifier:(id)arg1;	// IMP=0x001000000011c4f3
- (_Bool)_gkIsPurpleBuddy;	// IMP=0x001000000011eb56
- (_Bool)_gkIsDaemon;	// IMP=0x001000000011eb08
- (_Bool)_gkIsContacts;	// IMP=0x001000000011e80f
- (_Bool)_gkIsFirstParty;	// IMP=0x001000000011e624
- (_Bool)_gkIsPreferences;	// IMP=0x001000000011e4f6
- (_Bool)_gkIsGameCenterExtension;	// IMP=0x001000000011e3ac
- (_Bool)_gkIsGameCenter;	// IMP=0x001000000011e35e
- (id)_gkLocalizedStringForKey:(id)arg1 defaultValue:(id)arg2 arguments:(id)arg3;	// IMP=0x001000000011dcde
- (id)_gkLocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 language:(id)arg4;	// IMP=0x001000000011dccc
- (id)_gkSystemLocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;	// IMP=0x001000000011d3af
- (id)_gkLocalizedName;	// IMP=0x001000000011d200
- (id)_gkBundleShortVersion;	// IMP=0x001000000011d1a9
- (id)_gkBundleVersion;	// IMP=0x001000000011d14f
- (id)_gkPathForChallengeSound;	// IMP=0x001000000011d136
- (id)_gkPathForInviteSound;	// IMP=0x001000000011d11d
- (id)_gkPathForMessageImage;	// IMP=0x001000000011d104
- (id)_gkPathForImageWithName:(id)arg1;	// IMP=0x001000000011d0eb
- (id)_gkPathForSoundWithName:(id)arg1;	// IMP=0x001000000011d044
- (_Bool)_gkIsBadgingEnabled;	// IMP=0x001000000011cfcb
- (MISSING_TYPE *)_gkIsGameCenterEnabled;	// IMP=0x001000000011c6a5
- (id)_gkFrameworkVersionDescription;	// IMP=0x0010000000225ace
@end
