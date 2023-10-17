//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, TFDisplay, TFMemoryUsage;

@interface TFDevice : PBCodable
{
    NSString *_architecture;	// 8 = 0x8
    unsigned int _batteryPercentage;	// 16 = 0x10
    NSString *_carrier;	// 24 = 0x18
    NSString *_cellularNetworkType;	// 32 = 0x20
    int _connection;	// 40 = 0x28
    int _deviceFamily;	// 44 = 0x2c
    int _devicePlatform;	// 48 = 0x30
    TFMemoryUsage *_disk;	// 56 = 0x38
    TFDisplay *_display;	// 64 = 0x40
    NSString *_locale;	// 72 = 0x48
    NSString *_model;	// 80 = 0x50
    NSString *_osVersion;	// 88 = 0x58
    NSString *_timezone;	// 96 = 0x60
    struct {
        unsigned int batteryPercentage:1;
        unsigned int connection:1;
        unsigned int deviceFamily:1;
        unsigned int devicePlatform:1;
    } _has;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x002000000020006e
- (unsigned long long)hash;	// IMP=0x00100000001ffed5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001ffbfb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001ff9c6
- (void)writeTo:(id)arg1;	// IMP=0x00100000001ff729
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001ff71c
- (id)dictionaryRepresentation;	// IMP=0x00100000001fee1f
- (id)description;	// IMP=0x00100000001fed70

@end
