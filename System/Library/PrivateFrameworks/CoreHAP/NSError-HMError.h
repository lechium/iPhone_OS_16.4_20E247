//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (HMError)
+ (id)hmPrivateErrorWithCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;	// IMP=0x0020000000057c86
+ (id)hmPrivateErrorWithCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x0020000000057c68
+ (id)hmInternalErrorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0020000000057c42
+ (id)hmPrivateErrorWithCode:(long long)arg1;	// IMP=0x0020000000057c1c
+ (id)hmInternalErrorWithCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x0020000000057b42
+ (id)hmInternalErrorWithCode:(long long)arg1;	// IMP=0x0020000000057b27
+ (id)hmErrorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0020000000057b01
+ (id)hmErrorWithCode:(long long)arg1;	// IMP=0x0020000000057ae6
+ (id)hmErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4;	// IMP=0x0020000000057ac3
+ (id)hmErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;	// IMP=0x0020000000057828
+ (id)hapErrorWithcode:(long long)arg1;	// IMP=0x00200000000ec34d
+ (id)errorWithOSStatus:(int)arg1;	// IMP=0x00200000000ec227
+ (id)hapErrorWithcode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;	// IMP=0x00200000000ebf85
+ (id)hapErrorWithCode:(long long)arg1;	// IMP=0x00200000000ec385
@property(readonly, copy, nonatomic) NSError *hmPublicError;
@property(readonly, nonatomic, getter=isHMError) _Bool hmError;
- (_Bool)isHAPError;	// IMP=0x00100000000ebf3a
@end
