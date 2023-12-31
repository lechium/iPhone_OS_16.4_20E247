//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ASCProgressOfferMetadata
{
    _Bool _indeterminate;	// 8 = 0x8
    double _percent;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000001808e
@property(nonatomic, getter=isIndeterminate) _Bool indeterminate; // @synthesize indeterminate=_indeterminate;
@property(readonly, nonatomic) double percent; // @synthesize percent=_percent;
- (_Bool)isProgress;	// IMP=0x0010000000018349
- (id)description;	// IMP=0x00100000000182c2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000181fd
- (unsigned long long)hash;	// IMP=0x0010000000018194
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000018111
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000018096
- (id)initIndeterminate;	// IMP=0x0010000000018045
- (id)initWithPercent:(double)arg1;	// IMP=0x0010000000017ffb

@end

