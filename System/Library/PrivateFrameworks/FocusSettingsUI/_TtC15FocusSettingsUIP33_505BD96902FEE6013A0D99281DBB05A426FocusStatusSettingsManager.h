//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC15FocusSettingsUIP33_505BD96902FEE6013A0D99281DBB05A426FocusStatusSettingsManager : NSObject
{
    MISSING_TYPE *clientIdentifier;	// 8 = 0x8
    MISSING_TYPE *isListeningToModeConfigurationService;	// 24 = 0x18
    MISSING_TYPE *isListeningToGlobalConfigurationService;	// 25 = 0x19
    MISSING_TYPE *modeConfigurationService;	// 32 = 0x20
    MISSING_TYPE *globalConfigurationService;	// 40 = 0x28
    MISSING_TYPE *cachedModes;	// 48 = 0x30
    MISSING_TYPE *cachedConfigurations;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000169810
- (id)init;	// IMP=0x000000000016b390
- (void)dealloc;	// IMP=0x0000000000169790
- (void)modeConfigurationService:(id)arg1 didReceiveAvailableModesUpdate:(id)arg2;	// IMP=0x000000000016b4d0

@end
