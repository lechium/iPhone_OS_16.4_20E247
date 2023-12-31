//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOutputStream.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface BRCChecksummingOutputStream : NSOutputStream
{
    struct CC_SHA1state_st _ctx;	// 8 = 0x8
    unsigned char _sig[21];	// 104 = 0x68
    _Bool _isOpen;	// 125 = 0x7d
}

+ (id)checksummingOutputStreamWithTag:(unsigned char)arg1;	// IMP=0x006000000005c48a
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x000000000005c595
- (unsigned long long)streamStatus;	// IMP=0x000000000005c577
- (void)close;	// IMP=0x000000000005c539
- (void)open;	// IMP=0x000000000005c4c7
- (_Bool)hasSpaceAvailable;	// IMP=0x000000000005c4bf
- (id)initWithTag:(unsigned char)arg1;	// IMP=0x000000000005c448
@property(readonly, nonatomic) NSData *signature;

@end

