//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

__attribute__((visibility("hidden")))
@interface __HMDApplicationInfo
{
    _Bool _installed;	// 48 = 0x30
    NSData *_vendorIdentifier;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000059fc51
- (_Bool)isInstalled;	// IMP=0x000000000059fc3f
- (id)vendorIdentifier;	// IMP=0x000000000059fbe9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000059facd
- (id)initWithRecord:(id)arg1;	// IMP=0x000000000059f994

@end

