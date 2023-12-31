//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface STDeviceID : NSObject
{
    NSString *_identifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000002d11a
- (void).cxx_destruct;	// IMP=0x002000000002d27a
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;	// IMP=0x001000000002d222
- (_Bool)isEqualToDeviceID:(id)arg1;	// IMP=0x001000000002d185
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000002d122
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000002d0a1
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000002d014
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002cfcb
- (id)description;	// IMP=0x001000000002cf4f
- (id)initWithIdentifier:(id)arg1;	// IMP=0x001000000002ced2

@end

