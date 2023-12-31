//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ASCOfferContext : NSObject
{
    long long _flags;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000004567c
@property(readonly, nonatomic) long long flags; // @synthesize flags=_flags;
- (id)description;	// IMP=0x000000000004584a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004578d
- (unsigned long long)hash;	// IMP=0x0000000000045726
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004571b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000456c2
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000045684
@property(readonly, nonatomic) _Bool supportsDSIDLessInstall;
- (id)init;	// IMP=0x0000000000045653
- (id)initWithFlags:(long long)arg1;	// IMP=0x0000000000045616

@end

