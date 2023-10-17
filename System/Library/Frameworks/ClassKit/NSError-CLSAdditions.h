//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (CLSAdditions)
+ (_Bool)cls_assignError:(id *)arg1 fromError:(id)arg2;	// IMP=0x006000000002f9de
+ (_Bool)cls_assignError:(id *)arg1 code:(long long)arg2 format:(id)arg3;	// IMP=0x006000000002f8b7
+ (_Bool)cls_assignError:(id *)arg1 code:(long long)arg2 description:(id)arg3;	// IMP=0x006000000002f89f
+ (_Bool)cls_assignError:(id *)arg1 code:(long long)arg2 errorObject:(id)arg3 format:(id)arg4;	// IMP=0x006000000002f764
+ (_Bool)cls_assignError:(id *)arg1 code:(long long)arg2 errorObject:(id)arg3 description:(id)arg4;	// IMP=0x006000000002f720
+ (id)cls_createErrorWithCode:(long long)arg1 successfulObjects:(id)arg2 underlyingErrors:(id)arg3 description:(id)arg4;	// IMP=0x006000000002f5b7
+ (id)cls_createErrorWithCode:(long long)arg1 format:(id)arg2;	// IMP=0x006000000002f487
+ (id)cls_createErrorWithCode:(long long)arg1 description:(id)arg2;	// IMP=0x006000000002f470
+ (id)cls_createErrorWithCode:(long long)arg1 errorObject:(id)arg2 format:(id)arg3;	// IMP=0x006000000002f330
+ (id)cls_createErrorWithCode:(long long)arg1 underlyingError:(id)arg2 description:(id)arg3;	// IMP=0x006000000002f1e6
+ (id)cls_createErrorWithCode:(long long)arg1 errorObject:(id)arg2 description:(id)arg3;	// IMP=0x006000000002f0fc
- (void)cls_notice:(id)arg1;	// IMP=0x0010000000030260
- (void)cls_debug:(id)arg1;	// IMP=0x00100000000301af
- (void)cls_info:(id)arg1;	// IMP=0x0010000000030100
- (void)cls_warn:(id)arg1;	// IMP=0x0010000000030057
- (void)cls_log:(id)arg1;	// IMP=0x001000000002ffa6
- (id)cls_underlyingErrorWithDomain:(id)arg1;	// IMP=0x001000000002fbb9
- (_Bool)cls_isClassKitError;	// IMP=0x001000000002fb6b
- (_Bool)cls_isRetryable:(_Bool)arg1;	// IMP=0x001000000002fabf
@end
