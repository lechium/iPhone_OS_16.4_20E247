//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMHomeManager.h>

@class NSNumber, NSString;

@interface HMHomeManager (HFDebugging)
+ (id)hf_homeFutureForName:(id)arg1;	// IMP=0x00100000000d632d
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x00100000000a7b00
- (id)hf_accessorySettingsController;	// IMP=0x00100000000d71d7
- (id)hf_accessorySettingsDataSource;	// IMP=0x00100000000d71c5
- (id)hf_updateApplicationDataFuture;	// IMP=0x00100000000d70e8
@property(readonly, nonatomic) _Bool hf_hasDetectediCloudIssue;
- (id)hf_setSeenNewFeaturesViewVersion:(long long)arg1;	// IMP=0x00100000000d6e48
- (long long)hf_lastNewFeaturesViewVersionSeen;	// IMP=0x00100000000d6d96
- (id)hf_setHasSeenOnboardingWelcomeView:(_Bool)arg1;	// IMP=0x00100000000d6a1e
- (_Bool)hf_hasSeenOnboardingWelcomeView;	// IMP=0x00100000000d67aa
- (id)hf_homeForName:(id)arg1;	// IMP=0x00100000000d664d
- (id)hf_setOrderedHomes:(id)arg1;	// IMP=0x00100000000d627a
- (id)hf_orderedHomes;	// IMP=0x00100000000d61d3
- (id)hf_orderedHomesList;	// IMP=0x00100000000d618b
- (id)hf_mutableOrderedHomesList;	// IMP=0x00100000000d6118
- (id)hf_homeWithIdentifier:(id)arg1;	// IMP=0x00100000000d5fee
- (void)hf_updateApplicationData:(id)arg1 handleError:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000248037
@property(retain) NSNumber *_cached_lastOnboardingNewFeaturesVersionSeenNumber;
@property(retain) NSNumber *_cached_hasSeenOnboardingWelcomeViewNumber;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
