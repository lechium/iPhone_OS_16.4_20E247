//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableDictionary;

@interface CKKSRateLimiter : NSObject
{
    NSDictionary *_config;	// 8 = 0x8
    NSMutableDictionary *_buckets;	// 16 = 0x10
    NSDate *_overloadUntil;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000032d1b
- (void).cxx_destruct;	// IMP=0x0020000000032c4b
@property(retain) NSDate *overloadUntil; // @synthesize overloadUntil=_overloadUntil;
@property(retain) NSMutableDictionary *buckets; // @synthesize buckets=_buckets;
@property(retain) NSDictionary *config; // @synthesize config=_config;
- (id)topOffendingAccessGroups:(unsigned long long)arg1;	// IMP=0x0010000000032948
- (id)diagnostics;	// IMP=0x0010000000032661
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000325e8
- (void)trim:(id)arg1;	// IMP=0x00100000000322c2
- (void)reset;	// IMP=0x001000000003226b
- (unsigned long long)stateSize;	// IMP=0x0010000000032227
- (int)judge:(id)arg1 at:(id)arg2 limitTime:(id *)arg3;	// IMP=0x0010000000031c1a
- (id)consumeTokenFromBucket:(id)arg1 type:(int)arg2 at:(id)arg3;	// IMP=0x0010000000031a28
- (int)capacity:(int)arg1;	// IMP=0x001000000003194a
- (int)rate:(int)arg1;	// IMP=0x001000000003186c
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003162b
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000003120e
- (id)init;	// IMP=0x00100000000311fa

@end

