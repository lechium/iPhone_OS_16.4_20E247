//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSCXPhoneCallStateMonitor
{
}

+ (id)sharedInstance;	// IMP=0x00000000000e546a
- (unsigned long long)phoneCallState;	// IMP=0x00400000000e5540
- (_Bool)firstPartyCall;	// IMP=0x00100000000e5538
- (void)_stopMonitoring;	// IMP=0x00100000000e5532
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000e552c
- (id)init;	// IMP=0x00100000000e54bf

@end

