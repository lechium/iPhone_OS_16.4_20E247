//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (QueryParameters)
+ (id)screenSharingAppURL;	// IMP=0x0010000000015950
+ (id)faceTimeRefreshShareableContentURLForBundleIdentifier:(id)arg1;	// IMP=0x0010000000014550
+ (id)faceTimeAppJoinConversationURLForConversationLinkURL:(id)arg1;	// IMP=0x001000000001438d
+ (id)faceTimeAppViewLinkDetailsURLForPseudonym:(id)arg1;	// IMP=0x0010000000014201
+ (id)faceTimeAnswerURLWithSourceIdentifier:(id)arg1;	// IMP=0x001000000001413b
+ (id)faceTimeUpdateForegroundAppURLForBundleIdentifier:(id)arg1 applicationType:(long long)arg2;	// IMP=0x0010000000013f3e
+ (id)faceTimeRefreshShareableContentURL;	// IMP=0x0010000000013e37
+ (id)faceTimeAppJoinConversationLinkURL;	// IMP=0x0010000000013d8e
+ (id)faceTimeNeedsBackgroundLaunchURL;	// IMP=0x0010000000013ce5
+ (id)faceTimeAppViewLinkDetailsURL;	// IMP=0x0010000000013c3c
+ (id)faceTimeUpdateForegroundAppURL;	// IMP=0x0010000000013b93
+ (id)faceTimeShowIncomingTransmissionNoticeUIURL;	// IMP=0x0010000000013aea
+ (id)faceTimeShowHandoffEligibleNearbyURL;	// IMP=0x0010000000013a41
+ (id)faceTimeShowSystemCallControlsURL;	// IMP=0x0010000000013998
+ (id)faceTimeShowCarPlayInCallUIURL;	// IMP=0x00100000000138ef
+ (id)faceTimeShowInCallUIURL;	// IMP=0x0010000000013846
+ (id)faceTimeLaunchForOutgoingConversationURL;	// IMP=0x001000000001379d
+ (id)faceTimeLaunchForIncomingCallURL;	// IMP=0x00100000000136f4
+ (id)faceTimePromptURLWithURL:(id)arg1;	// IMP=0x0010000000013632
+ (id)faceTimeURLWithURL:(id)arg1;	// IMP=0x001000000001360f
+ (id)_applyFaceTimeScheme:(id)arg1 toFaceTimeURL:(id)arg2;	// IMP=0x00100000000134cd
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1 showPrompt:(_Bool)arg2;	// IMP=0x0010000000013384
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1;	// IMP=0x0010000000013370
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5 audioOnly:(_Bool)arg6;	// IMP=0x00100000000131c3
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;	// IMP=0x00100000000131aa
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;	// IMP=0x001000000001318e
+ (id)faceTimeURLWithDestinationID:(id)arg1;	// IMP=0x001000000001316d
+ (id)_faceTimeURLWithHandle:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;	// IMP=0x0010000000012f2b
+ (id)_faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;	// IMP=0x0010000000012eb1
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3 forceAssist:(_Bool)arg4 suppressAssist:(_Bool)arg5 wasAssisted:(_Bool)arg6;	// IMP=0x0010000000015ad2
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5;	// IMP=0x0010000000015ab4
+ (id)telephonyURLForTelEmergencyCall;	// IMP=0x001000000007ad0a
+ (id)telephonyURLForVoicemail;	// IMP=0x001000000007ac89
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5;	// IMP=0x001000000007ab08
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;	// IMP=0x001000000007aa46
+ (id)telephonyURLWithDestinationID:(id)arg1 promptUser:(_Bool)arg2;	// IMP=0x001000000007a916
+ (id)telephonyURLWithDestinationID:(id)arg1;	// IMP=0x001000000007a902
+ (id)tu_defaultAllowedSchemes;	// IMP=0x00100000000a0cf1
- (id)URLByDeletingQueryParameterWithKey:(id)arg1;	// IMP=0x001000000000c828
- (id)URLBySettingQueryParameterValue:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000000c6d7
- (id)tuQueryParameters;	// IMP=0x001000000000c24b
- (id)queryParameters;	// IMP=0x001000000000c239
- (id)answerRequestSourceIdentifier;	// IMP=0x00100000000158f9
- (_Bool)isAnswerRequestURL;	// IMP=0x001000000001588f
- (_Bool)isFaceTimeNeedsBackgroundLaunchURL;	// IMP=0x0010000000015813
- (long long)foregroundAppApplicationType;	// IMP=0x001000000001579e
- (id)foregroundAppBundleIdentifier;	// IMP=0x0010000000015747
- (_Bool)isRefreshShareableContentURL;	// IMP=0x00100000000156cb
- (_Bool)isUpdateForegroundAppURL;	// IMP=0x001000000001564f
- (_Bool)isShowScreenSharingURL;	// IMP=0x0010000000015604
- (_Bool)isShowHandoffEligibleNearbyURL;	// IMP=0x0010000000015588
- (_Bool)isShowSystemCallControlsURL;	// IMP=0x001000000001550c
- (_Bool)isShowCarPlayInCallUIURL;	// IMP=0x0010000000015490
- (_Bool)isShowIncomingTransmissionNoticeURL;	// IMP=0x0010000000015414
- (_Bool)isShowInCallUIURL;	// IMP=0x0010000000015350
- (_Bool)isLaunchForOutgoingConversationURL;	// IMP=0x00100000000152d4
- (_Bool)isLaunchForIncomingCallURL;	// IMP=0x0010000000015258
- (_Bool)isDialCallURL;	// IMP=0x0010000000015221
- (_Bool)hasNoPromptOption;	// IMP=0x0010000000015199
- (id)conversationLinkURLForJoinConversation;	// IMP=0x0010000000014eec
- (_Bool)isFaceTimeAppJoinConversationLinkURL;	// IMP=0x0010000000014e70
- (id)conversationLinkURLForOpenLinkURL;	// IMP=0x0010000000014bc3
- (_Bool)isFaceTimeOpenLinkURL;	// IMP=0x0010000000014b78
- (id)pseudonymForLinkDetailsView;	// IMP=0x0010000000014900
- (_Bool)isFaceTimeAppViewLinkDetailsURL;	// IMP=0x0010000000014884
- (_Bool)isSystemCallControlsURL;	// IMP=0x0010000000014839
- (_Bool)isFaceTimeMultiwayURL;	// IMP=0x00100000000147ee
- (_Bool)isFaceTimeAudioPromptURL;	// IMP=0x00100000000147a3
- (_Bool)isFaceTimeAudioURL;	// IMP=0x0010000000014737
- (_Bool)isFaceTimePromptURL;	// IMP=0x00100000000146ec
- (_Bool)isFaceTimeURL;	// IMP=0x0010000000014680
- (_Bool)_isPhoneNumberID:(id)arg1;	// IMP=0x0010000000012e49
- (id)faceTimeDestinationAccount;	// IMP=0x0010000000012d14
- (id)_mobilePhoneQueryParameters;	// IMP=0x001000000007bd8b
- (id)_mobilePhonePathParameters;	// IMP=0x001000000007ba90
- (id)telephonyParameterDictionary;	// IMP=0x001000000007b9c6
@property(readonly) _Bool isVoicemailURL;
@property(readonly) _Bool isEmergencyCallURL;
@property(readonly) _Bool isEmergencyURL;
@property(readonly, nonatomic, getter=isBasebandLogURL) _Bool basebandLogURL;
- (id)webSafeTelephoneURL;	// IMP=0x001000000007b631
- (_Bool)isWebSafeTelephoneURL;	// IMP=0x001000000007b4d6
@property(readonly, copy, nonatomic) NSString *formattedPhoneNumber;
- (_Bool)_hasScheme:(id)arg1;	// IMP=0x001000000007b2d9
- (_Bool)hasTelephonyScheme;	// IMP=0x001000000007b299
- (_Bool)isTelephonyPromptURL;	// IMP=0x001000000007b280
- (_Bool)isTelephonyURL;	// IMP=0x001000000007b229
- (_Bool)_dialAssistBooleanQueryParameterValueForKey:(id)arg1;	// IMP=0x001000000007b149
@property(readonly) _Bool wasAlreadyAssisted;
@property(readonly) _Bool suppressAssist;
@property(readonly) _Bool forceAssist;
@property(readonly) NSString *originatingUIIdentifier;
@property(readonly) int callService;
@property(readonly, nonatomic) int addressBookUID;
@property(readonly) NSString *phoneNumber;
- (id)_destinationIDConvertingNumbersToLatin:(_Bool)arg1;	// IMP=0x001000000007ad84
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1 allowedSchemes:(id)arg2;	// IMP=0x00100000000a0e30
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000a0dc5
- (id)sanitizedCopy;	// IMP=0x00100000000a0d5d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

