//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MFNanoBridgeSettingsSharedMailbox
{
    unsigned long long _type;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000981c8
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)_includesMeIconImage;	// IMP=0x001000000009895a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000988cd
- (unsigned long long)hash;	// IMP=0x00100000000988bc
- (id)icon;	// IMP=0x00100000000985e0
- (id)displayName;	// IMP=0x001000000009832d
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000009826e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000981d0
- (unsigned long long)mailboxFilterType;	// IMP=0x0010000000098113
- (id)initWithType:(unsigned long long)arg1;	// IMP=0x00100000000980cf

@end
