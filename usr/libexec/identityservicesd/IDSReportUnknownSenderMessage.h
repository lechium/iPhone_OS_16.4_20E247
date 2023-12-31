//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSString;

@interface IDSReportUnknownSenderMessage : FTIDSMessage
{
    _Bool _isBlackholed;	// 232 = 0xe8
    _Bool _isJunked;	// 233 = 0xe9
    int _messageServerTimestamp;	// 236 = 0xec
    NSString *_unknownSenderURI;	// 240 = 0xf0
    NSString *_messageID;	// 248 = 0xf8
    NSString *_responseMessage;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x0020000000708710
@property(copy) NSString *responseMessage; // @synthesize responseMessage=_responseMessage;
@property int messageServerTimestamp; // @synthesize messageServerTimestamp=_messageServerTimestamp;
@property _Bool isJunked; // @synthesize isJunked=_isJunked;
@property _Bool isBlackholed; // @synthesize isBlackholed=_isBlackholed;
@property(copy) NSString *messageID; // @synthesize messageID=_messageID;
@property(copy) NSString *unknownSenderURI; // @synthesize unknownSenderURI=_unknownSenderURI;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x0010000000708240
- (id)messageBody;	// IMP=0x0010000000707cc0
- (id)requiredKeys;	// IMP=0x0010000000707c10
- (id)bagKey;	// IMP=0x0010000000707bf0
- (double)anisetteHeadersTimeout;	// IMP=0x0010000000707bd0
- (_Bool)wantsManagedRetries;	// IMP=0x0010000000707bb0
- (_Bool)wantsBodySignature;	// IMP=0x0010000000707b90
- (int)maxTimeoutRetries;	// IMP=0x0010000000707b70
- (_Bool)wantsExtraTimeoutRetry;	// IMP=0x0010000000707b50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000707970
- (id)init;	// IMP=0x00100000007078d0

@end

