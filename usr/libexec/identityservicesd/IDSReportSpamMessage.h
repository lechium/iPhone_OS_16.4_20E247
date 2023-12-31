//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSArray, NSString;

@interface IDSReportSpamMessage : FTIDSMessage
{
    NSArray *_spamMessages;	// 232 = 0xe8
    NSString *_responseMessage;	// 240 = 0xf0
    NSArray *_responseSpamMessages;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x00200000004d3100
@property(copy) NSArray *responseSpamMessages; // @synthesize responseSpamMessages=_responseSpamMessages;
@property(copy) NSString *responseMessage; // @synthesize responseMessage=_responseMessage;
@property(copy) NSArray *spamMessages; // @synthesize spamMessages=_spamMessages;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x00100000004d2cf0
- (id)messageBody;	// IMP=0x00100000004d2b60
- (id)requiredKeys;	// IMP=0x00100000004d2ae0
- (id)bagKey;	// IMP=0x00100000004d2ac0
- (double)anisetteHeadersTimeout;	// IMP=0x00100000004d2aa0
- (_Bool)wantsManagedRetries;	// IMP=0x00100000004d2a80
- (_Bool)wantsBodySignature;	// IMP=0x00100000004d2a60
- (int)maxTimeoutRetries;	// IMP=0x00100000004d2a40
- (_Bool)wantsExtraTimeoutRetry;	// IMP=0x00100000004d2a20
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000004d28e0
- (id)init;	// IMP=0x00100000004d2840

@end

