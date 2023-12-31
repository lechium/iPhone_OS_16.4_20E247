//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface NWOSAddressEndpoint
{
    struct sockaddr_storage address;	// 8 = 0x8
    struct ether_addr ethernet_address;	// 136 = 0x88
    NSObject<OS_dispatch_data> *ech_config;	// 144 = 0x90
    char *hostname;	// 152 = 0x98
    int original_fd;	// 160 = 0xa0
    unsigned short priority;	// 164 = 0xa4
    unsigned int calculated_hostname:1;	// 166 = 0xa6
}

- (void).cxx_destruct;	// IMP=0x0000000000691260
- (void)setEchConfig:(id)arg1;	// IMP=0x0000000000691240
- (id)echConfig;	// IMP=0x0000000000691220
- (void)setPriority:(unsigned short)arg1;	// IMP=0x0000000000691200
- (unsigned short)priority;	// IMP=0x00000000006911e0
- (unsigned long long)getHash;	// IMP=0x0000000000691130
- (id)copyEndpoint;	// IMP=0x00000000006910c0
- (_Bool)isEqualToEndpoint:(id)arg1 matchFlags:(unsigned char)arg2;	// IMP=0x0000000000690f40
- (char *)createDescription:(_Bool)arg1;	// IMP=0x0000000000690900
- (const char *)hostname;	// IMP=0x0000000000690840
- (unsigned short)port;	// IMP=0x0000000000690700
- (id)copyDictionary;	// IMP=0x00000000006906a0
- (unsigned int)type;	// IMP=0x0000000000690690
- (void)dealloc;	// IMP=0x0000000000690630

@end

