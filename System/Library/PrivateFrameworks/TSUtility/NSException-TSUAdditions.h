//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSException.h>

@interface NSException (TSUAdditions)
+ (void)tsu_raiseWithError:(id)arg1;	// IMP=0x008000000001e7a8
+ (void)errnoRaise:(id)arg1 format:(id)arg2;	// IMP=0x008000000004e7a6
- (id)tsu_error;	// IMP=0x001000000001e8b5
- (int)localErrno;	// IMP=0x001000000004e921
@end
