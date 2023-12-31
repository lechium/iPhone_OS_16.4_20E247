//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, NSString, NearbyTransitFeatureDiscoveryDataStore;
@protocol OS_dispatch_queue;

@interface NearbyTransitFeatureDiscoverySource : NSObject
{
    NSObject<OS_dispatch_queue> *_mapsSuggestionsHomeFeatureDiscoveryQueue;	// 8 = 0x8
    _Bool _active;	// 16 = 0x10
    _Bool _showFeature;	// 17 = 0x11
    _Bool _addedFavorite;	// 18 = 0x12
    _Bool _recordedSession;	// 19 = 0x13
    _Bool _transitUserHere;	// 20 = 0x14
    _Bool _shouldForceTransitUser;	// 21 = 0x15
    _Bool _hasInitialData;	// 22 = 0x16
    GEOObserverHashTable *_observers;	// 24 = 0x18
    NearbyTransitFeatureDiscoveryDataStore *_dataStore;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000020e2b0
@property(nonatomic) _Bool hasInitialData; // @synthesize hasInitialData=_hasInitialData;
@property(nonatomic) _Bool shouldForceTransitUser; // @synthesize shouldForceTransitUser=_shouldForceTransitUser;
@property(nonatomic, getter=isTransitUserHere) _Bool transitUserHere; // @synthesize transitUserHere=_transitUserHere;
@property(retain, nonatomic) NearbyTransitFeatureDiscoveryDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(nonatomic, getter=hasRecordedSession) _Bool recordedSession; // @synthesize recordedSession=_recordedSession;
@property(nonatomic, getter=hasAddedFavorite) _Bool addedFavorite; // @synthesize addedFavorite=_addedFavorite;
@property(nonatomic, getter=shouldShowFeature) _Bool showFeature; // @synthesize showFeature=_showFeature;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void)shortcutManagerMeCardDidChange:(id)arg1;	// IMP=0x001000000020e232
- (id)discoveryModelWithActionHandler:(CDUnknownBlockType)arg1 displayHandler:(CDUnknownBlockType)arg2 cancelHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000020db74
- (void)dismissedTipNotification;	// IMP=0x001000000020db1c
- (_Bool)hasDismissedNotificationRecently;	// IMP=0x001000000020da1f
- (unsigned long long)_daysSinceDate:(id)arg1;	// IMP=0x001000000020d94f
- (_Bool)hasUserIgnoredTipTooMuch;	// IMP=0x001000000020d7d7
- (void)_updateIsTransitUserHere;	// IMP=0x001000000020d491
- (void)_checkForExistingNearbyTransitFavorite;	// IMP=0x001000000020d23a
- (_Bool)_shouldShowNearbyTransitBanner;	// IMP=0x001000000020d1e9
- (void)updateFeatureAvailabilityIfNecessary;	// IMP=0x001000000020d0b6
- (void)_updateShouldShowFeature;	// IMP=0x001000000020cf0a
- (void)_updateAndNotifyObservers:(_Bool)arg1;	// IMP=0x001000000020cee2
@property(readonly, nonatomic) GEOObserverHashTable *observers; // @synthesize observers=_observers;
- (_Bool)_isUserEligibleForNotification;	// IMP=0x001000000020cc2d
- (id)initWithDataStore:(id)arg1;	// IMP=0x001000000020cac9
- (id)init;	// IMP=0x001000000020ca89

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

