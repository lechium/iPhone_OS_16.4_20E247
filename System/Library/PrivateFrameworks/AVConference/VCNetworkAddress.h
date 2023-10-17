//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCNetworkAddress : NSObject
{
    NSString *_ip;	// 8 = 0x8
    NSString *_interfaceName;	// 16 = 0x10
    unsigned short _port;	// 24 = 0x18
    unsigned short _ipVersion;	// 26 = 0x1a
}

@property(nonatomic) unsigned short ipVersion; // @synthesize ipVersion=_ipVersion;
@property(nonatomic) unsigned short port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property(copy, nonatomic) NSString *ip; // @synthesize ip=_ip;
- (int)getSockaddrStorage:(struct sockaddr_storage *)arg1 size:(unsigned long long *)arg2;	// IMP=0x000000000038bab1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000038ba35
- (id)description;	// IMP=0x000000000038b9b1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000038b8e5
- (_Bool)isIPv6;	// IMP=0x000000000038b8d7
- (void)dealloc;	// IMP=0x000000000038b86a

@end
