//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VUIAccessViewController;

__attribute__((visibility("hidden")))
@interface VUIVPPAManager : NSObject
{
    _Bool _alreadyInProgress;	// 8 = 0x8
    VUIAccessViewController *_accessViewController;	// 16 = 0x10
}

+ (id)_getDeniedChannels;	// IMP=0x00600000002a41c8
+ (id)_getConsentedChannels;	// IMP=0x00600000002a3f50
+ (id)addUniqueChannels:(id)arg1 channels:(id)arg2;	// IMP=0x00600000002a3d08
+ (_Bool)channelAlreadyExists:(id)arg1 channelID:(id)arg2;	// IMP=0x00600000002a3acf
+ (_Bool)_isReminderDue:(id)arg1 reminderInterval:(double)arg2;	// IMP=0x00600000002a3a4e
+ (id)sharedInstance;	// IMP=0x00600000002a14df
- (void).cxx_destruct;	// IMP=0x00000000002a44c4
@property(nonatomic) _Bool alreadyInProgress; // @synthesize alreadyInProgress=_alreadyInProgress;
@property(retain, nonatomic) VUIAccessViewController *accessViewController; // @synthesize accessViewController=_accessViewController;
- (id)_rootViewController;	// IMP=0x00000000002a4440
- (id)_getEligibleBulkChannels;	// IMP=0x00000000002a350b
- (id)_getVPPABulkChannels:(long long)arg1;	// IMP=0x00000000002a33f3
- (void)_presentVPPAConsentScreen:(id)arg1 vppaState:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002a2a3c
- (_Bool)_isVPPAPromptDueForConfig:(id)arg1;	// IMP=0x00000000002a283e
- (_Bool)_isChannelVPPAPromptEligible:(id)arg1;	// IMP=0x00000000002a27ee
- (void)_fetchConfigurationAndPresentVPPAIfRequired:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a213e
- (void)reloadConfigurationAfterVPPAChange;	// IMP=0x00000000002a2002
- (void)startVPPAConsentFlowForDeeplink:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a1b17
- (void)startVPPAConsentFlow:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a156c
- (id)init;	// IMP=0x00000000002a1534

@end

