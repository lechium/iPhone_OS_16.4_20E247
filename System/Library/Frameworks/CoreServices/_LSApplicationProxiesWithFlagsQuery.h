//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _LSApplicationProxiesWithFlagsQuery
{
    unsigned int _plistFlags;	// 12 = 0xc
    unsigned long long _bundleFlags;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000071eb2
+ (id)queryWithPlistFlags:(unsigned int)arg1 bundleFlags:(unsigned long long)arg2;	// IMP=0x0060000000071c28
@property(readonly, nonatomic) unsigned long long bundleFlags; // @synthesize bundleFlags=_bundleFlags;
@property(readonly, nonatomic) unsigned int plistFlags; // @synthesize plistFlags=_plistFlags;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000071f71
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000071eba
- (unsigned long long)hash;	// IMP=0x0000000000071e4b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000071d45
- (_Bool)_requiresDatabaseMappingEntitlement;	// IMP=0x0000000000071d3d
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000071c6f

@end

