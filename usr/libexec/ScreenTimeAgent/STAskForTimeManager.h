//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, STFamilyOrganizationController, STUserNotificationManager;
@protocol STAskForTimeConfigurationProvider, STAskForTimeEventRelay, STPersistenceControllerProtocol;

@interface STAskForTimeManager : NSObject
{
    STFamilyOrganizationController *_familyOrganizationController;	// 8 = 0x8
    id <STAskForTimeEventRelay> _eventRelay;	// 16 = 0x10
    STUserNotificationManager *_userNotificationManager;	// 24 = 0x18
    id <STPersistenceControllerProtocol> _persistenceController;	// 32 = 0x20
    id <STAskForTimeConfigurationProvider> _askForTimeConfigurationProvider;	// 40 = 0x28
}

+ (long long)_responseAnswerForAnswer:(long long)arg1 timeApproved:(id *)arg2;	// IMP=0x002000000000efca
+ (long long)_approvedTimeForResponseAnswer:(long long)arg1 amount:(id)arg2;	// IMP=0x001000000000ef54
+ (long long)_resourceTypeForUsageType:(long long)arg1;	// IMP=0x001000000000ef3d
- (void).cxx_destruct;	// IMP=0x002000000000f053
@property(readonly, nonatomic) id <STAskForTimeConfigurationProvider> askForTimeConfigurationProvider; // @synthesize askForTimeConfigurationProvider=_askForTimeConfigurationProvider;
@property(readonly, nonatomic) id <STPersistenceControllerProtocol> persistenceController; // @synthesize persistenceController=_persistenceController;
@property(readonly, nonatomic) STUserNotificationManager *userNotificationManager; // @synthesize userNotificationManager=_userNotificationManager;
@property(readonly) id <STAskForTimeEventRelay> eventRelay; // @synthesize eventRelay=_eventRelay;
@property(nonatomic) __weak STFamilyOrganizationController *familyOrganizationController; // @synthesize familyOrganizationController=_familyOrganizationController;
- (void)handleAnswer:(long long)arg1 forRequestWithIdentifier:(id)arg2;	// IMP=0x001000000000edcf
- (_Bool)_sendRequestToParents:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000e92b
- (_Bool)_approveAskForTimeRequest:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000e566
- (_Bool)_applyAskForTimeDeclarationsForAnswer:(long long)arg1 usageType:(long long)arg2 requestedResourceIdentifier:(id)arg3 timeGranted:(id)arg4 oneMoreMinute:(_Bool)arg5 toUser:(id)arg6 managedObjectContext:(id)arg7 error:(id *)arg8;	// IMP=0x001000000000dce0
- (void)_handleAnswer:(long long)arg1 requestIdentifier:(id)arg2 timeApproved:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000000cc3e
- (void)_postAskForTimeResponseNotificationWithRespondingUserGivenName:(id)arg1 respondingUserDSID:(id)arg2 respondingUserAltDSID:(id)arg3 respondingUserAppleID:(id)arg4 associatedRequestIdentifier:(id)arg5 answer:(long long)arg6 requestedResourceName:(id)arg7 amountGranted:(id)arg8;	// IMP=0x001000000000c436
- (void)handleV2AskForTimeResponsePayload:(id)arg1;	// IMP=0x001000000000b7b9
- (void)handleAskForTimeResponsePayload:(id)arg1;	// IMP=0x001000000000a750
- (void)handleAskForTimeRequestPayload:(id)arg1;	// IMP=0x00100000000094d4
- (void)_handleDisapprovalOfRequest:(id)arg1;	// IMP=0x00100000000093b6
- (void)_handleApprovalOfRequest:(id)arg1;	// IMP=0x0010000000009291
- (void)handleAnswer:(long long)arg1 requestIdentifier:(id)arg2 timeApproved:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000009137
- (void)fetchLastResponseForRequestedResourceIdentifier:(id)arg1 usageType:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000089f7
- (void)approveExceptionForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000087f0
- (void)sendAskForTimeRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007dfc
- (id)initWithPersistenceController:(id)arg1 userNotificationManager:(id)arg2 eventRelay:(id)arg3 askForTimeConfigurationProvider:(id)arg4;	// IMP=0x0010000000007c97

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

