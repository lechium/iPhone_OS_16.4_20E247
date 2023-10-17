//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTCarrierSpaceAppsInfo, CTCarrierSpaceCapabilities, CTCarrierSpaceClient, CTCarrierSpacePlansInfo, CTCarrierSpaceUsageInfo, CTCarrierSpaceUserConsentFlowInfo, CoreTelephonyClient, NSNumber, NSString, PSUIAppInstallController;

__attribute__((visibility("hidden")))
@interface PSUICarrierSpaceManager : NSObject
{
    CTCarrierSpaceCapabilities *_capabilities;	// 8 = 0x8
    CTCarrierSpaceUsageInfo *_usageInfo;	// 16 = 0x10
    CTCarrierSpacePlansInfo *_plansInfo;	// 24 = 0x18
    CTCarrierSpaceAppsInfo *_appsInfo;	// 32 = 0x20
    PSUIAppInstallController *_carrierAppInstallController;	// 40 = 0x28
    NSNumber *_hasUserConsent;	// 48 = 0x30
    CTCarrierSpaceUserConsentFlowInfo *_userConsentFlowInfo;	// 56 = 0x38
    NSNumber *_userConsentResponse;	// 64 = 0x40
    struct __CTServerConnection *_serverConnection;	// 72 = 0x48
    CoreTelephonyClient *_coreTelephonyClient;	// 80 = 0x50
    CTCarrierSpaceClient *_carrierSpaceClient;	// 88 = 0x58
}

+ (id)getNSURLSessionConfiguration;	// IMP=0x001000000004fa0b
+ (long long)bytesFromString:(id)arg1 carrierSpaceUnits:(long long)arg2;	// IMP=0x001000000004c2db
+ (_Bool)isCarrierMetricTypeValid:(int)arg1;	// IMP=0x001000000004c2cd
+ (int)carrierMetricTypeForString:(id)arg1;	// IMP=0x001000000004c175
+ (id)sharedManager;	// IMP=0x001000000004c120
- (void).cxx_destruct;	// IMP=0x000000000004fb2a
@property(retain, nonatomic) CTCarrierSpaceClient *carrierSpaceClient; // @synthesize carrierSpaceClient=_carrierSpaceClient;
- (id)getLogger;	// IMP=0x000000000004faef
- (void)userConsentFlowInfoDidChange;	// IMP=0x000000000004f882
- (void)appsDidChange;	// IMP=0x000000000004f713
- (void)plansDidChange;	// IMP=0x000000000004f5a4
- (void)usageDidChange;	// IMP=0x000000000004f435
- (void)capabilitiesDidChange:(id)arg1;	// IMP=0x000000000004f2d1
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;	// IMP=0x000000000004f1de
- (id)localizedDataStringFromBytes:(unsigned long long)arg1;	// IMP=0x000000000004f1ca
- (id)descriptionForPlanMetrics:(id)arg1;	// IMP=0x000000000004eb9a
- (_Bool)planChangeIsRestricted;	// IMP=0x000000000004eb41
- (id)carrierAppInstallController;	// IMP=0x000000000004e87c
- (id)appsInfo;	// IMP=0x000000000004e528
- (id)planMetrics;	// IMP=0x000000000004e276
- (id)subscribedDomesticPlanOptions;	// IMP=0x000000000004df58
- (id)subscribedPlanOptions;	// IMP=0x000000000004dc6a
- (id)plansInfo;	// IMP=0x000000000004d979
- (id)usageInfo;	// IMP=0x000000000004d688
- (id)capabilities;	// IMP=0x000000000004d37e
- (_Bool)supportsSweetgum;	// IMP=0x000000000004d287
- (void)refresh;	// IMP=0x000000000004cefc
- (void)refreshAndReload;	// IMP=0x000000000004cde3
- (void)reset;	// IMP=0x000000000004cd73
- (void)userConsentAcknowledged:(_Bool)arg1;	// IMP=0x000000000004cb2b
- (void)setUserConsent:(_Bool)arg1;	// IMP=0x000000000004ca46
- (id)userConsentFlowInfo;	// IMP=0x000000000004c87d
- (_Bool)hasUserConsent;	// IMP=0x000000000004c75e
- (void)dealloc;	// IMP=0x000000000004c716
- (id)init;	// IMP=0x000000000004c4e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
