//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSDCTCallCapabilities : NSObject
{
    _Bool _csCallingAvailable;	// 8 = 0x8
    _Bool _voLTECallingAvailable;	// 9 = 0x9
    _Bool _wiFiCallingAvailable;	// 10 = 0xa
    _Bool _wiFiEmergencyCallingAllowed;	// 11 = 0xb
    _Bool _wiFiEmergencyCallingAvailable;	// 12 = 0xc
}

+ (id)callCapabilitiesForCallManagementStateInfo:(id)arg1;	// IMP=0x004000000007b6b7
+ (id)callCapabilitiesForCTCallCapabilities:(id)arg1;	// IMP=0x001000000007b5d9
// Error: Property attributes should begin with the type ('T') attribute, property name: wiFiEmergencyCallingAvailable
// Property attributes: (null)

- (_Bool)isWiFiEmergencyCallingAvailable;	// IMP=0x001000000007bcb3
@property(nonatomic, getter=isWiFiEmergencyCallingAllowed) _Bool wiFiEmergencyCallingAllowed; // @synthesize wiFiEmergencyCallingAllowed=_wiFiEmergencyCallingAllowed;
@property(nonatomic, getter=isWiFiCallingAvailable) _Bool wiFiCallingAvailable; // @synthesize wiFiCallingAvailable=_wiFiCallingAvailable;
@property(nonatomic, getter=isVoLTECallingAvailable) _Bool voLTECallingAvailable; // @synthesize voLTECallingAvailable=_voLTECallingAvailable;
@property(nonatomic, getter=isCSCallingAvailable) _Bool csCallingAvailable; // @synthesize csCallingAvailable=_csCallingAvailable;
- (id)debugDescription;	// IMP=0x001000000007b928
- (id)description;	// IMP=0x001000000007b916

@end

