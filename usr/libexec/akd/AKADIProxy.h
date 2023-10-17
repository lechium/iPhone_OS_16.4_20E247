//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AKADIProxy : NSObject
{
}

+ (int)eraseProvisioningForDSID:(unsigned long long)arg1;	// IMP=0x00400000000193a6
+ (int)synchronizeWithDSID:(unsigned long long)arg1 SIM:(const char *)arg2 SIMLength:(unsigned int)arg3 outMID:(char **)arg4 outMIDLength:(unsigned int *)arg5 outSRM:(char **)arg6 outSRMLength:(unsigned int *)arg7;	// IMP=0x0010000000019372
+ (int)destroyProvisioningSession:(unsigned int)arg1;	// IMP=0x0010000000019366
+ (int)endProvisioningWithSession:(unsigned int)arg1 PTM:(const char *)arg2 PTMLength:(unsigned int)arg3 TK:(const char *)arg4 TKLength:(unsigned int)arg5;	// IMP=0x001000000001934b
+ (int)startProvisioningWithDSID:(unsigned long long)arg1 SPIM:(const char *)arg2 SPIMLength:(unsigned int)arg3 outCPIM:(char **)arg4 outCPIMLength:(unsigned int *)arg5 outSession:(unsigned int *)arg6;	// IMP=0x0010000000019328
+ (int)isMachineProvisioned:(unsigned long long)arg1;	// IMP=0x001000000001931b
+ (int)dispose:(void *)arg1;	// IMP=0x001000000001930e
+ (int)requestOTPForDSID:(unsigned long long)arg1 outMID:(char **)arg2 outMIDSize:(unsigned int *)arg3 outOTP:(char **)arg4 outOTPSize:(unsigned int *)arg5;	// IMP=0x00100000000192f1
+ (int)setIDMSRoutingInfo:(unsigned long long)arg1 forDSID:(unsigned long long)arg2;	// IMP=0x00100000000192e1
+ (int)getIDMSRoutingInfo:(unsigned long long *)arg1 forDSID:(unsigned long long)arg2;	// IMP=0x00100000000192d1

@end
