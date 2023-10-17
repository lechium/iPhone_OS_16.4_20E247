//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKPlayerEmailInternal
{
    NSString *_address;	// 8 = 0x8
    NSString *_addressSHA1;	// 16 = 0x10
    NSString *_addressPrefix;	// 24 = 0x18
    _Bool _verified;	// 32 = 0x20
}

+ (id)secureCodedPropertyKeys;	// IMP=0x004000000011a738
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000011a730
- (void).cxx_destruct;	// IMP=0x002000000011aa3c
@property(nonatomic) _Bool verified; // @synthesize verified=_verified;
@property(retain, nonatomic) NSString *addressPrefix; // @synthesize addressPrefix=_addressPrefix;
@property(retain, nonatomic) NSString *addressSHA1; // @synthesize addressSHA1=_addressSHA1;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
- (unsigned long long)hash;	// IMP=0x001000000011a931
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000011a817

@end
