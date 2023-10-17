//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol DMTEnrollmentStateProviding;

__attribute__((visibility("hidden")))
@interface DMTFetchAutomatedDeviceEnrollmentStateOperation
{
    id <DMTEnrollmentStateProviding> _enrollmentStateProvider;	// 8 = 0x8
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000001f0a
- (void).cxx_destruct;	// IMP=0x000000000000209d
@property(readonly, nonatomic) id <DMTEnrollmentStateProviding> enrollmentStateProvider; // @synthesize enrollmentStateProvider=_enrollmentStateProvider;
- (void)runWithRequest:(id)arg1;	// IMP=0x0000000000001faf
- (id)initWithRequest:(id)arg1 enrollmentStateProvider:(id)arg2;	// IMP=0x0000000000001e92

@end
