//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, NSCountedSet, NSMutableSet;

__attribute__((visibility("hidden")))
@interface CNQuickActionsUsageManager : NSObject
{
    _Bool _sortsWithDuet;	// 8 = 0x8
    NSCountedSet *_actionsUsageSet;	// 16 = 0x10
    NSMutableSet *_enabledActionIdentifiers;	// 24 = 0x18
    CNContact *_contact;	// 32 = 0x20
}

+ (_Bool)sortUsingCoreDuetAvailable;	// IMP=0x006000000021b44b
+ (id)managerForContact:(id)arg1;	// IMP=0x006000000021b372
- (void).cxx_destruct;	// IMP=0x000000000021b217
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSMutableSet *enabledActionIdentifiers; // @synthesize enabledActionIdentifiers=_enabledActionIdentifiers;
@property(retain, nonatomic) NSCountedSet *actionsUsageSet; // @synthesize actionsUsageSet=_actionsUsageSet;
@property(nonatomic) _Bool sortsWithDuet; // @synthesize sortsWithDuet=_sortsWithDuet;
- (id)sortedActions:(id)arg1;	// IMP=0x000000000021afcc
- (void)_updateDuetInteractionsIfNeeded;	// IMP=0x000000000021afc6
- (void)updateCachedEnabledStateForAction:(id)arg1;	// IMP=0x000000000021af1d
- (void)cacheEnabledStateForAction:(id)arg1;	// IMP=0x000000000021ae69
- (double)scoreForAction:(id)arg1;	// IMP=0x000000000021adb5
- (void)actionPerformed:(id)arg1;	// IMP=0x000000000021ad25
- (id)init;	// IMP=0x000000000021ac28

@end
