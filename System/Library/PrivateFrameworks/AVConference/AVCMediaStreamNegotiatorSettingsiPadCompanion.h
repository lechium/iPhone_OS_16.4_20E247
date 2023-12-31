//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface AVCMediaStreamNegotiatorSettingsiPadCompanion
{
    NSArray *_hdrModePixelFormats;	// 48 = 0x30
    NSMutableSet *_hdrModesSupported;	// 56 = 0x38
}

- (id)hdrModesSupported;	// IMP=0x000000000027d33b
- (id)hdrModePixelFormats;	// IMP=0x000000000027d32a
- (long long)tilesPerFrame;	// IMP=0x000000000027d2f8
- (int)operatingMode;	// IMP=0x000000000027d2ed
- (long long)captureSource;	// IMP=0x000000000027d2e2
- (long long)videoStreamMode;	// IMP=0x000000000027d2d7
- (void)dealloc;	// IMP=0x000000000027d25c
- (id)initWithOptions:(id)arg1 deviceRole:(unsigned char)arg2 error:(id *)arg3;	// IMP=0x000000000027d078

@end

