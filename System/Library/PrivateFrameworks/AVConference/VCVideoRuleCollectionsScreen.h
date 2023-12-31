//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol VCHardwareSettingsEmbeddedProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsScreen
{
    id <VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x006000000035f1d8
- (_Bool)setupMacDecodingOnlyRules;	// IMP=0x0000000000360067
- (_Bool)setupH264Rules;	// IMP=0x000000000035f799
- (void)selectPreferredRule:(id)arg1 screenSize:(struct CGSize)arg2;	// IMP=0x000000000035f48c
- (void)initSupportedPayloads;	// IMP=0x000000000035f438
- (id)initForMacDecodingOnly;	// IMP=0x000000000035f36c
- (id)initWithHardwareSettings:(id)arg1;	// IMP=0x000000000035f206

@end

