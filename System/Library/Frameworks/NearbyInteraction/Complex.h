//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface Complex : NSObject
{
    NSNumber *_real;	// 8 = 0x8
    NSNumber *_imag;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000e842
- (void).cxx_destruct;	// IMP=0x000000000000edce
@property(retain) NSNumber *imag; // @synthesize imag=_imag;
@property(retain) NSNumber *real; // @synthesize real=_real;
- (unsigned long long)hash;	// IMP=0x000000000000ed49
- (id)description;	// IMP=0x000000000000ecdb
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000eb6d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000ea30
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000e9bb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000e901
- (id)initWithRealPart:(id)arg1 imagPart:(id)arg2;	// IMP=0x000000000000e84a

@end

