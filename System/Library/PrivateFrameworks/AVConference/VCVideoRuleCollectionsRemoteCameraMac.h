//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol VCHardwareSettingsMacProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsRemoteCameraMac
{
    id <VCHardwareSettingsMacProtocol> _hardwareSettings;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00600000002d3b42
- (_Bool)initSupportedPayloads;	// IMP=0x00000000002d3b4a
- (id)initWithHardwareSettings:(id)arg1;	// IMP=0x00000000002d3a54

@end
