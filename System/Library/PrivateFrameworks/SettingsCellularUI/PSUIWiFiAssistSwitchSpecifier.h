//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SettingsCellular/PSAppDataUsagePolicySwitchSpecifier.h>

__attribute__((visibility("hidden")))
@interface PSUIWiFiAssistSwitchSpecifier : PSAppDataUsagePolicySwitchSpecifier
{
    struct __CTServerConnection *_serverConnection;	// 184 = 0xb8
}

+ (id)wifiAssistGroupSpecifier;	// IMP=0x006000000006178c
+ (_Bool)shouldShowWifiAssist;	// IMP=0x0060000000061784
- (id)getLogger;	// IMP=0x0000000000061f3e
- (void)setCellularUsagePolicy:(id)arg1;	// IMP=0x0000000000061c78
- (id)cellularUsagePolicy;	// IMP=0x0000000000061936
- (unsigned long long)dataUsage;	// IMP=0x0000000000061873
- (void)dealloc;	// IMP=0x000000000006173e
- (id)initDefault;	// IMP=0x00000000000615ed

@end

