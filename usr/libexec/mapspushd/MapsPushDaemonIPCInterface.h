//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface MapsPushDaemonIPCInterface
{
}

- (void)establishConnection;	// IMP=0x002000000001dac1
- (void)handleTrafficeReroute:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001d993
- (void)_configureIncomingConnection:(id)arg1;	// IMP=0x001000000001d8db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
