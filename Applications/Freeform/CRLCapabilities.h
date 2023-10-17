//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CRLCapabilities : NSObject
{
    long long _platform;	// 8 = 0x8
    long long _deviceType;	// 16 = 0x10
    long long _device;	// 24 = 0x18
    long long _renderer;	// 32 = 0x20
}

+ (id)currentCapabilities;	// IMP=0x00200000004d5f26
@property(readonly, nonatomic) long long renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) long long device; // @synthesize device=_device;
@property(readonly, nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
@property(readonly, nonatomic) long long platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) _Bool hasHEVCHardwareEncoding;
@property(readonly, nonatomic) unsigned long long physicalMemory;
@property(readonly, nonatomic) _Bool isMetalCapable;
- (_Bool)p_isMetalCapable;	// IMP=0x00100000004d6c1d
- (id)metalCapabilitiesForDevice:(id)arg1;	// IMP=0x00100000004d697f
- (struct CGSize)maximumMetalTextureSizeForDevice:(id)arg1;	// IMP=0x00100000004d6434
@property(readonly, nonatomic) struct CGSize maximumImageSize;
@property(readonly, nonatomic) struct CGSize maximumHardcodedTextureSize;
@property(readonly, nonatomic) _Bool hasLightningPort;
@property(readonly, nonatomic) _Bool isRendererH5OrBelow;
@property(readonly, nonatomic) _Bool isRendererH4OrBelow;
@property(readonly, nonatomic) _Bool isRendererH3OrBelow;
- (id)init;	// IMP=0x00100000004d5e35
- (void)p_setupDevice;	// IMP=0x00100000004d565c
- (void)p_setupPlatform;	// IMP=0x00100000004d564e

@end
