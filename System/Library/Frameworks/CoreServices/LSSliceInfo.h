//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface LSSliceInfo : NSObject
{
    int _type;	// 8 = 0x8
    int _subtype;	// 12 = 0xc
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000014859f
@property(readonly, nonatomic) int subtype; // @synthesize subtype=_subtype;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (struct LSSliceData)sliceValue;	// IMP=0x000000000014869b
- (id)description;	// IMP=0x000000000014866a
- (unsigned long long)hash;	// IMP=0x0000000000148653
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001485a7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000014852a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000148473
- (id)initWithSliceDescData:(struct LSSliceData)arg1;	// IMP=0x0000000000148459
- (id)initWithType:(int)arg1 subtype:(int)arg2;	// IMP=0x0000000000148413

@end
