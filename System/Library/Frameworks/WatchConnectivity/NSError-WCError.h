//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (WCError)
+ (id)userInfoDictionaryWithErrorStringsForErrorCode:(long long)arg1;	// IMP=0x0060000000018e03
+ (id)wcErrorFromInternalError:(id)arg1;	// IMP=0x0060000000018d34
+ (id)wcInternalErrorWithCode:(long long)arg1;	// IMP=0x0060000000018d0e
+ (id)wcErrorWithCode:(long long)arg1 underlyingWCErrorWithCode:(long long)arg2;	// IMP=0x0060000000018ca7
+ (id)wcErrorWithCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x0060000000018bcc
+ (id)wcErrorFromReceivedCode:(long long)arg1;	// IMP=0x0060000000018b4c
+ (id)wcErrorWithCode:(long long)arg1;	// IMP=0x0060000000018b38
+ (id)wcErrorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0060000000018a91
@end

