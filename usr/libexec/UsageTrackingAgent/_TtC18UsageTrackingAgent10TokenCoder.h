//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC18UsageTrackingAgent10TokenCoder : NSObject
{
    MISSING_TYPE *decoder;	// 8 = 0x8
    MISSING_TYPE *encoder;	// 16 = 0x10
    MISSING_TYPE *teamIdentifier;	// 24 = 0x18
}

+ (id)internal;	// IMP=0x002000000004aa10
- (void).cxx_destruct;	// IMP=0x004000000004bbe0
- (id)encodeWebDomain:(id)arg1;	// IMP=0x001000000004b840
- (id)encodeCategory:(id)arg1;	// IMP=0x001000000004b780
- (id)encodeApplication:(id)arg1;	// IMP=0x001000000004b760
- (id)encodeWebDomains:(id)arg1;	// IMP=0x001000000004b690
- (id)encodeCategories:(id)arg1;	// IMP=0x001000000004b670
- (id)encodeApplications:(id)arg1;	// IMP=0x001000000004b650
- (id)decodeWebDomains:(id)arg1;	// IMP=0x001000000004b1e0
- (id)decodeCategories:(id)arg1;	// IMP=0x001000000004b1a0
- (id)decodeApplications:(id)arg1;	// IMP=0x001000000004b160
- (id)init;	// IMP=0x001000000004b120

@end
