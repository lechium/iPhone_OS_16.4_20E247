//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (ADTimerStore)
+ (id)_ad_timerStoreErrorWithCode:(long long)arg1;	// IMP=0x00100000000fefaa
+ (id)_ad_alarmStoreErrorWithCode:(long long)arg1;	// IMP=0x00100000001349d3
+ (id)ad_calendarErrorWithCode:(long long)arg1;	// IMP=0x00100000001b7cfc
+ (id)ad_siriTaskHandlerAceTranslationFailureError;	// IMP=0x00100000001e8be0
+ (id)ad_siriTaskHandlerErrorWithCode:(long long)arg1;	// IMP=0x00100000001e8ba7
- (_Bool)ad_isNetworkDownError;	// IMP=0x00100000001344f0
- (_Bool)ad_requiresDampedRetry:(long long *)arg1;	// IMP=0x00100000001343b4
- (_Bool)ad_isPeerRemoteError;	// IMP=0x0010000000134302
- (_Bool)ad_isPeerNotNearbyError;	// IMP=0x001000000013428e
- (_Bool)ad_isPeerConnectionError;	// IMP=0x00100000001341c5
- (_Bool)ad_isRetryableSessionError;	// IMP=0x00100000001340d8
- (_Bool)ad_isUnrecoverablePeerError;	// IMP=0x0010000000134065
- (_Bool)ad_isStricterRetryableConnectionError;	// IMP=0x0010000000133f77
- (_Bool)ad_isStricterUnreachableError;	// IMP=0x0010000000133ead
- (_Bool)ad_isRetryableConnectionError;	// IMP=0x0010000000133cf0
- (_Bool)ad_isUnreachableError;	// IMP=0x0010000000133b17
- (_Bool)ad_isAssistantNotReadyError;	// IMP=0x0010000000133adb
- (_Bool)ad_isInAssistantErrorDomain;	// IMP=0x0010000000133a8d
@end

