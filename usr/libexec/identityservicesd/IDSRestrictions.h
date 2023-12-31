//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSRestrictions : NSObject
{
    NSMutableDictionary *_parentalControls;	// 8 = 0x8
    _Bool _active;	// 16 = 0x10
    _Bool _shouldPostNotifications;	// 17 = 0x11
}

+ (id)sharedInstance;	// IMP=0x0040000000295bb0
- (void).cxx_destruct;	// IMP=0x0020000000297070
@property(readonly, nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool shouldPostNotifications; // @synthesize shouldPostNotifications=_shouldPostNotifications;
- (void)_managedPrefsNotification:(id)arg1;	// IMP=0x0010000000296f10
- (_Bool)shouldDisableAccount:(id)arg1;	// IMP=0x0010000000296e10
- (_Bool)shouldDisableService:(id)arg1;	// IMP=0x0010000000296d10
- (void)updateAccountActivation;	// IMP=0x00100000002965d0
- (void)_updateParentalSettings;	// IMP=0x00100000002960e0
- (void)_setIsDisabled:(_Bool)arg1 forService:(id)arg2;	// IMP=0x0010000000296010
- (_Bool)_isDisabledService:(id)arg1;	// IMP=0x0010000000295f80
- (id)init;	// IMP=0x0010000000295d80

@end

