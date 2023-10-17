//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, NSString, ShortcutManager, UserProfileLink;

@interface UserProfileLinkFavoritesProvider : NSObject
{
    UserProfileLink *_newLink;	// 8 = 0x8
    ShortcutManager *_shortcutManager;	// 16 = 0x10
    _Bool _loggedIn;	// 24 = 0x18
    GEOObserverHashTable *_observers;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0020000000788222
- (void).cxx_destruct;	// IMP=0x002000000078876d
- (void)shortcutManagerMeCardDidChange:(id)arg1;	// IMP=0x0010000000788756
@property(readonly, nonatomic) GEOObserverHashTable *observers;
- (void)_updateLinkAndNotifyObservers:(_Bool)arg1;	// IMP=0x0010000000788643
- (id)retrieveSubtitleText;	// IMP=0x0010000000788544
@property(readonly, nonatomic) long long userProfileLinkType;
- (id)createUserProfileLink;	// IMP=0x00100000007882f6
- (id)init;	// IMP=0x0010000000788277

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
