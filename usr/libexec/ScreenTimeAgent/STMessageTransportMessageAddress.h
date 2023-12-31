//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface STMessageTransportMessageAddress : NSObject
{
    long long _addressType;	// 8 = 0x8
    NSNumber *_userDSID;	// 16 = 0x10
    NSString *_deviceIdentifier;	// 24 = 0x18
}

+ (id)createPartialAddressFromMessageAddress:(id)arg1;	// IMP=0x002000000005644d
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000561bc
- (void).cxx_destruct;	// IMP=0x0020000000056506
@property(readonly, copy) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(readonly, copy) NSNumber *userDSID; // @synthesize userDSID=_userDSID;
@property(readonly, nonatomic) long long addressType; // @synthesize addressType=_addressType;
- (unsigned long long)hash;	// IMP=0x00100000000563b2
- (_Bool)isEqualToMessageAddress:(id)arg1;	// IMP=0x0010000000056278
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000056215
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000561c4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000056137
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000056055
- (id)description;	// IMP=0x0010000000055f7d
- (id)initWithUserDSID:(id)arg1 deviceIdentifier:(id)arg2 addressType:(long long)arg3;	// IMP=0x0010000000055eba
- (id)initWithUserDSID:(id)arg1 deviceIdentifier:(id)arg2;	// IMP=0x0010000000055ea2
- (id)initWithUserDSID:(id)arg1;	// IMP=0x0010000000055e8b

@end

