//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FPActiveSpotlightDomain : NSObject
{
    NSString *_providerIdentifier;	// 8 = 0x8
    NSString *_domainIdentifier;	// 16 = 0x10
    NSString *_spotlightDomainIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001214e4
@property(retain, nonatomic) NSString *spotlightDomainIdentifier; // @synthesize spotlightDomainIdentifier=_spotlightDomainIdentifier;
@property(retain, nonatomic) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property(retain, nonatomic) NSString *providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
- (id)description;	// IMP=0x0000000000121466

@end

