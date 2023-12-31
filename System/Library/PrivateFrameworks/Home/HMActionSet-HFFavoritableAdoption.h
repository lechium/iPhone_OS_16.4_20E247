//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMActionSet.h>

@class HFImageIconDescriptor, NSDate, NSSet, NSString, NSUUID, UIColor;

@interface HMActionSet (HFFavoritableAdoption)
+ (id)hf_standardSystemIconIdentifierForActionSetType:(id)arg1;	// IMP=0x00100000001bc34c
- (id)hf_updateShowInHomeDashboard:(_Bool)arg1;	// IMP=0x00100000000646c6
@property(readonly, nonatomic) _Bool hf_effectiveShowInHomeDashboard;
@property(readonly, nonatomic) _Bool hf_hasSetShowInHomeDashboard;
@property(readonly, nonatomic) _Bool hf_showInHomeDashboard;
- (id)hf_updateIsFavorite:(_Bool)arg1;	// IMP=0x001000000006465a
@property(readonly, nonatomic) _Bool hf_effectiveIsFavorite;
@property(readonly, nonatomic) _Bool hf_shouldShowInFavorites;
@property(readonly, nonatomic) _Bool hf_hasSetFavorite;
@property(readonly, nonatomic) _Bool hf_isFavorite;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x00100000000a9b22
- (_Bool)hf_isShortcutOwned;	// IMP=0x00100000001bcc06
- (id)hf_shortcutAction;	// IMP=0x00100000001bcb0b
- (id)hf_standardIconTintColorForIconIdentifier:(id)arg1;	// IMP=0x00100000001bc73c
- (id)hf_mapOldIconIdentifierToNewSystemIconIdentifier:(id)arg1;	// IMP=0x00100000001bc4ec
- (id)hf_setIconIdentifier:(id)arg1 andTintColor:(id)arg2;	// IMP=0x00100000001bc0e1
@property(readonly, nonatomic) UIColor *hf_iconTintColor;
@property(readonly, nonatomic) HFImageIconDescriptor *hf_iconDescriptor;
- (id)_hf_iconIdentifier;	// IMP=0x00100000001bbd43
- (float)hf_percentOfAccessoryRepresentableObjectsAssociatedWithGroup:(id)arg1;	// IMP=0x00100000001bbb5b
@property(readonly, nonatomic) _Bool hf_requiresDeviceUnlock;
@property(readonly, nonatomic) _Bool hf_isBuilder;
- (_Bool)hf_isAnonymous;	// IMP=0x00100000001bb9f5
- (id)hf_affectedAccessoryRepresentableObjects;	// IMP=0x00100000001bb72b
- (_Bool)hf_affectsServiceWithIdentifier:(id)arg1;	// IMP=0x00100000001bb5e6
- (id)hf_affectedServices;	// IMP=0x00100000001bb301
- (id)hf_affectedProfiles;	// IMP=0x00100000001bb01a
- (id)hf_affectedMediaSessions;	// IMP=0x00100000001bad9b
- (id)hf_affectedCharacteristics;	// IMP=0x00100000001bab6a
@property(readonly, copy, nonatomic) NSSet *hf_characteristicWriteActions;
- (id)hf_updateValue:(_Bool)arg1 forContextType:(unsigned long long)arg2;	// IMP=0x00100000001c34b9
- (_Bool)hf_shouldHideForContextType:(unsigned long long)arg1;	// IMP=0x00100000001c34a9
- (_Bool)hf_shouldBeOnForContextType:(unsigned long long)arg1;	// IMP=0x00100000001c3337
- (_Bool)hf_hasSetForContextType:(unsigned long long)arg1;	// IMP=0x00100000001c31fe
- (_Bool)hf_isOnForContextType:(unsigned long long)arg1;	// IMP=0x00100000001c309c
- (void)hf_updateApplicationData:(id)arg1 handleError:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000247903
- (void)_hf_didUpdateApplicationData:(id)arg1;	// IMP=0x00100000002477b3
- (id)hf_updateDateAdded:(id)arg1;	// IMP=0x00100000003189ca
@property(readonly, copy, nonatomic) NSDate *hf_dateAdded;
@property(readonly, copy, nonatomic) NSString *hf_displayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end

