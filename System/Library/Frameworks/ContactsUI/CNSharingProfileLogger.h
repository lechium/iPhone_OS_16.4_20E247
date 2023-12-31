//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface CNSharingProfileLogger : NSObject
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
}

+ (id)log;	// IMP=0x00600000001eda27
- (void).cxx_destruct;	// IMP=0x00000000001eda17
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
- (void)logSettingsReturningEmptyImage;	// IMP=0x00000000001ed9ad
- (void)logSettingsReturningEmptyImageForNoChange;	// IMP=0x00000000001ed966
- (void)logSettingsReturningDefaultMonogram;	// IMP=0x00000000001ed91f
- (void)logSettingsReturningSharingResultWithDescription:(id)arg1;	// IMP=0x00000000001ed891
- (void)logErrorGeneratingAvatarForPhotoPickerWithDescription:(id)arg1;	// IMP=0x00000000001ed803
- (void)logSettingsSuccessSavingContact;	// IMP=0x00000000001ed7bc
- (void)logSettingsErrorSettingMeContactWithDescription:(id)arg1;	// IMP=0x00000000001ed726
- (void)logSettingsSettingMeContact;	// IMP=0x00000000001ed6df
- (void)logSettingsErrorSavingContactWithDescription:(id)arg1;	// IMP=0x00000000001ed649
- (void)logSettingsSavingContact:(id)arg1;	// IMP=0x00000000001ed5bb
- (void)logOnboardingReturningNonAnimojiItem;	// IMP=0x00000000001ed56c
- (void)logOnboardingReturningEmptyImage;	// IMP=0x00000000001ed51d
- (void)logOnboardingReturningDefaultMonogram;	// IMP=0x00000000001ed4d6
- (void)logOnboardingReturningSharingResultWithDescription:(id)arg1;	// IMP=0x00000000001ed448
- (void)logOnboardingAvatarCarouselErrorCreatingContactImageWithDescription:(id)arg1;	// IMP=0x00000000001ed3b2
- (void)logOnboardingSuccessSavingContact;	// IMP=0x00000000001ed36b
- (void)logOnboardingErrorSettingMeContactWithDescription:(id)arg1;	// IMP=0x00000000001ed2d5
- (void)logOnboardingSettingMeContact;	// IMP=0x00000000001ed28e
- (void)logOnboardingErrorSavingContactWithDescription:(id)arg1;	// IMP=0x00000000001ed1f8
- (void)logOnboardingUpdatingContactWithIdentifier:(id)arg1;	// IMP=0x00000000001ed16a
- (void)logOnboardingAddingContact;	// IMP=0x00000000001ed123
- (void)logOnboardingSavingContact:(id)arg1;	// IMP=0x00000000001ed095
- (void)logOnboardingErrorSavingMeCardImageToRecentsWithDescription:(id)arg1;	// IMP=0x00000000001ed007
- (void)logOnboardingSuccessSavingMeCardImageToRecents;	// IMP=0x00000000001ecfc0
- (void)logOnboardingSavingMeCardImageToRecentsForIdentifier:(id)arg1;	// IMP=0x00000000001ecf32
- (id)init;	// IMP=0x00000000001ecec8

@end

