//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface DAPartialIP : NSObject
{
    NSData *_address;	// 8 = 0x8
    NSData *_mask;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000f22c
- (void).cxx_destruct;	// IMP=0x002000000000f8d2
@property(readonly, copy, nonatomic) NSData *mask; // @synthesize mask=_mask;
@property(readonly, copy, nonatomic) NSData *address; // @synthesize address=_address;
- (id)description;	// IMP=0x001000000000f81e
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000f705
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000f5e3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000f575
- (void)encodeWithXPCObject:(id)arg1;	// IMP=0x001000000000f445
- (id)initWithXPCObject:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000f355
- (id)initWithAddress:(id)arg1 mask:(id)arg2;	// IMP=0x001000000000f234

@end

