//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ACLSNetworkUtilities : NSObject
{
}

+ (_Bool)areDigestedIdentifiers:(id)arg1 equalToCleartextIdentifiers:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x004000000000697d
+ (_Bool)isDigestedIdentifier:(id)arg1 equalToCleartextIdentifier:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x0010000000006617
+ (id)digestIdentifiers:(id)arg1 tag:(unsigned int)arg2;	// IMP=0x0010000000006429
+ (id)digestIdentifier:(id)arg1 tag:(unsigned int)arg2;	// IMP=0x001000000000615f
+ (_Bool)makeLocalAddresses:(id *)arg1 andGatewayIdentifiers:(id *)arg2 tag:(unsigned int)arg3;	// IMP=0x0010000000004b24
+ (id)stringFromSockaddrStorage:(const struct sockaddr_storage *)arg1;	// IMP=0x0010000000004ab6
+ (id)stringFromSockaddrDL:(const struct sockaddr_dl *)arg1;	// IMP=0x0010000000004980
+ (id)stringFromSockaddr6:(const struct sockaddr_in6 *)arg1;	// IMP=0x001000000000496a
+ (id)stringFromSockaddr4:(const struct sockaddr_in *)arg1;	// IMP=0x0010000000004954
+ (id)stringFromMacAddr:(char *)arg1;	// IMP=0x0010000000004906
+ (id)stringFromInaddr6:(const struct in6_addr *)arg1;	// IMP=0x001000000000487e
+ (id)stringFromInaddr4:(const struct in_addr *)arg1;	// IMP=0x00100000000047fe
+ (id)serviceIDFromKey:(id)arg1;	// IMP=0x0010000000004705
+ (_Bool)isWiredNetworkInterfaceType:(id)arg1;	// IMP=0x0010000000004633
+ (_Bool)isAutomaticConfigMethod6:(id)arg1;	// IMP=0x0010000000004614
+ (_Bool)isAutomaticConfigMethod4:(id)arg1;	// IMP=0x0010000000004554
+ (_Bool)isManualConfigMethod6:(id)arg1;	// IMP=0x0010000000004535
+ (_Bool)isManualConfigMethod4:(id)arg1;	// IMP=0x0010000000004516
+ (_Bool)isUsefulInaddr6:(const struct in6_addr *)arg1;	// IMP=0x00100000000044cb
+ (_Bool)isUsefulInaddr4:(const struct in_addr *)arg1;	// IMP=0x00100000000044a9
+ (_Bool)isUsefulSockaddr6:(const struct sockaddr_in6 *)arg1;	// IMP=0x0010000000004493
+ (_Bool)isUsefulSockaddr4:(const struct sockaddr_in *)arg1;	// IMP=0x001000000000447d
+ (_Bool)isShareableInaddr6:(const struct in6_addr *)arg1;	// IMP=0x001000000000444a
+ (_Bool)isShareableInaddr4:(const struct in_addr *)arg1;	// IMP=0x0010000000004417
+ (_Bool)isShareableSockaddr6:(const struct sockaddr_in6 *)arg1;	// IMP=0x0010000000004401
+ (_Bool)isShareableSockaddr4:(const struct sockaddr_in *)arg1;	// IMP=0x00100000000043eb
+ (id)createNetworkInterface:(struct __SCNetworkInterface *)arg1 service:(struct __SCNetworkService *)arg2 configInfo:(id)arg3;	// IMP=0x0010000000003deb
+ (double)speedFromEthernetMediaSubType:(id)arg1;	// IMP=0x0010000000003d5a
+ (id)allActiveNetworkInterfaces;	// IMP=0x0010000000002b9d
+ (id)netmask4ContainingStartAddress:(id)arg1 endAddress:(id)arg2;	// IMP=0x0010000000002a56
+ (_Bool)hasUsefulUSBEthernetInterface;	// IMP=0x00100000000028bc

@end
