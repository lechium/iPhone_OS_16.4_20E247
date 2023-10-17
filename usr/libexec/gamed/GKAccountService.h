//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKAccountService
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x002000000000cfe5
+ (Class)interfaceClass;	// IMP=0x001000000000cfd4
- (void)_reloadWidgetTimeline;	// IMP=0x0020000000011a19
- (oneway void)setLastContactsIntegrationConsentVersionDisplayedForSignedInPlayer:(id)arg1;	// IMP=0x0010000000011677
- (oneway void)getLastContactsIntegrationConsentVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000011252
- (oneway void)setLastFriendSuggestionsVersionDisplayedForSignedInPlayer:(id)arg1;	// IMP=0x0010000000010eb0
- (oneway void)getLastFriendSuggestionsVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000010a8b
- (oneway void)setLastProfilePrivacyVersionDisplayedForSignedInPlayer:(id)arg1;	// IMP=0x00100000000106e9
- (oneway void)getLastProfilePrivacyVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000102c4
- (oneway void)getLastPersonalizationVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000fe9f
- (oneway void)setLastPersonalizationVersionDisplayedForSignedInPlayer:(id)arg1;	// IMP=0x001000000000fafd
- (oneway void)getLastPrivacyNoticeVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f663
- (oneway void)setLastPrivacyNoticeVersionDisplayedForSignedInPlayer:(unsigned long long)arg1;	// IMP=0x001000000000f251
- (oneway void)getLastWelcomeWhatsNewCopyVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000edb7
- (oneway void)setLastWelcomeWhatsNewCopyVersionDisplayedForSignedInPlayer:(unsigned long long)arg1;	// IMP=0x001000000000e9d3
- (oneway void)signOutPlayerWithOptOut:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d345
- (oneway void)resetCredentialsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000d2c7
- (oneway void)authenticationWasCancelled;	// IMP=0x001000000000d272
- (oneway void)fetchItemsForIdentityVerificationSignature:(CDUnknownBlockType)arg1;	// IMP=0x001000000000d174
- (oneway void)generateIdentityVerificationSignatureWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000d076
- (oneway void)authenticatePlayerWithExistingCredentialsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000cff6
- (oneway void);	// IMP=0x001000000000cff0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
