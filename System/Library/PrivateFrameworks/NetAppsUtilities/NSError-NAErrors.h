//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (NAErrors)
+ (id)na_genericError;	// IMP=0x0060000000002ae4
+ (id)na_cancelledError;	// IMP=0x0060000000002ab9
+ (id)na_timeoutError;	// IMP=0x0060000000002aa2
+ (id)na_errorWithCode:(unsigned long long)arg1;	// IMP=0x0060000000002a7c
- (_Bool)na_isCancelledError;	// IMP=0x0010000000002b6b
- (_Bool)na_isTimeoutError;	// IMP=0x0010000000002afb
@end

