//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IOSurface;

__attribute__((visibility("hidden")))
@interface REIOSurfaceTexturePayload
{
    IOSurface *_ioSurface;	// 8 = 0x8
    unsigned long long _planeIndex;	// 16 = 0x10
    unsigned long long _pixelFormat;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000219720
- (void).cxx_destruct;	// IMP=0x0000000000219cc5
@property(readonly, nonatomic) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(readonly, nonatomic) unsigned long long planeIndex; // @synthesize planeIndex=_planeIndex;
@property(readonly, nonatomic) IOSurface *ioSurface; // @synthesize ioSurface=_ioSurface;
- (id)redactedDescription;	// IMP=0x0000000000219c4e
- (id)description;	// IMP=0x0000000000219c3c
- (_Bool)hasSameUnderlyingIOSurface:(id)arg1;	// IMP=0x0000000000219bc7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000219b22
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000219900
- (id)initWithIOSurface:(id)arg1 plane:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3;	// IMP=0x0000000000219728

@end
