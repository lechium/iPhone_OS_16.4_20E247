//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface SRError : NSError
{
}

+ (id)errorWithCode:(long long)arg1;	// IMP=0x004000000007c927
+ (id)errorWithCode:(long long)arg1 localizedFailureReason:(id)arg2;	// IMP=0x001000000007c8cf
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x001000000007c877
- (id)initWithCode:(long long)arg1;	// IMP=0x004000000007ca29
- (id)initWithCode:(long long)arg1 localizedFailureReason:(id)arg2;	// IMP=0x001000000007c95a
- (id)initWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x001000000007c93b

@end
