//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _HMFNetAddressIPV4
{
    struct sockaddr_in _in;	// 24 = 0x18
}

- (id)dataUsingEncoding:(unsigned long long)arg1;	// IMP=0x0000000000040ecc
- (id)addressString;	// IMP=0x0000000000040e96
- (unsigned long long)addressFamily;	// IMP=0x0000000000040e8b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000040df4
- (unsigned long long)hash;	// IMP=0x0000000000040dde
- (id)initWithSocketAddress:(const struct sockaddr *)arg1;	// IMP=0x0000000000040cba
- (id)init;	// IMP=0x0000000000040c12

@end
