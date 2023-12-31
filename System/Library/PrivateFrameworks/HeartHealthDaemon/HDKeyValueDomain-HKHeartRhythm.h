//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDKeyValueDomain.h>

@interface HDKeyValueDomain (HKHeartRhythm)
+ (id)hdhr_aFibBurdenProtectedSyncedDomainForProfile:(id)arg1;	// IMP=0x0010000000004025
+ (id)hdhr_aFibBurdenProtectedLocalDomainForProfile:(id)arg1;	// IMP=0x0010000000003fcd
+ (id)hdhr_heartRhythmProtectedLocalDomainForProfile:(id)arg1;	// IMP=0x0010000000003f75
+ (id)hdhr_heartRhythmProtectedSyncedDomainForProfile:(id)arg1;	// IMP=0x0010000000003f1d
- (_Bool)hdhr_resetAtrialFibrillationDetectionOnboardingWithError:(id *)arg1;	// IMP=0x0010000000004afe
- (_Bool)hdhr_setAtrialFibrillationDetectionCurrentOnboardingVersionCompletedInCountryCode:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000495d
- (id)hdhr_atrialFibrillationOnboardingCompletedDateWithError:(id *)arg1;	// IMP=0x0010000000004635
- (id)hdhr_atrialFibrillationOnboardingCompletionVersionWithError:(id *)arg1;	// IMP=0x00100000000044f2
- (id)hdhr_irregularRhythmNotificationsOnboardingCompletionForFeatureIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000042e6
- (id)hdhr_atrialFibrillationOnboardingCountryCodeWithError:(id *)arg1;	// IMP=0x001000000000407d
- (void)setNotificationSentDate:(id)arg1;	// IMP=0x0010000000013aea
- (_Bool)hdhr_resetElectrocardiogramRecordingFirstOnboardingCompletedDateWithError:(id *)arg1;	// IMP=0x00100000000484ab
- (id)hdhr_electrocardiogramRecordingOnboardingCountryCodeWithError:(id *)arg1;	// IMP=0x0010000000048242
- (id)hdhr_electrocardiogramRecordingOnboardingCompletionVersionWithError:(id *)arg1;	// IMP=0x00100000000480ff
- (_Bool)hdhr_setElectrocardiogramRecordingFirstOnboardingCompletedDate:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000047fdd
- (id)hdhr_electrocardiogramRecordingFirstOnboardingCompletedDateWithError:(id *)arg1;	// IMP=0x0010000000047e5d
- (id)hdhr_electrocardiogramRecordingOnboardingHistoryWithError:(id *)arg1;	// IMP=0x0010000000047cbf
@end

