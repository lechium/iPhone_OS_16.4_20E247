//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSWiFiConfigurationData : NSObject
{
    _Bool _WEP;	// 8 = 0x8
    _Bool _hidden;	// 9 = 0x9
    NSString *_ssid;	// 16 = 0x10
    NSString *_password;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000028502
- (void).cxx_destruct;	// IMP=0x0000000000028530
@property(readonly, nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(readonly, copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic, getter=isWEP) _Bool WEP; // @synthesize WEP=_WEP;
@property(readonly, copy, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000028411
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000282b6
@property(readonly, copy, nonatomic) NSString *extraPreviewText;
@property(readonly, nonatomic) long long type;
- (id)initWithSSID:(id)arg1 isWEP:(_Bool)arg2 password:(id)arg3 isHidden:(_Bool)arg4;	// IMP=0x00000000000281cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

