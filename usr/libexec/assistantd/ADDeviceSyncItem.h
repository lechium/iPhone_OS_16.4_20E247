//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSUUID;

@interface ADDeviceSyncItem : NSObject
{
    NSUUID *_UUID;	// 8 = 0x8
    NSDictionary *_properties;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000268fbc
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0010000000268c49
- (void).cxx_destruct;	// IMP=0x0010000000269216
@property(readonly, copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly, copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000269194
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000268fc4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000268fb1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000268ea8
- (unsigned long long)hash;	// IMP=0x0010000000268e69
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x0010000000268ddf
- (id)description;	// IMP=0x0010000000268dcb
- (id)initWithUUID:(id)arg1 properties:(id)arg2;	// IMP=0x0010000000268caa
- (id)init;	// IMP=0x0010000000268c96
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0010000000268b0b
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x0010000000269397

@end
