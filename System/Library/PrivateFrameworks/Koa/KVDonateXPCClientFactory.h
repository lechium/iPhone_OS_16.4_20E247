//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVDonateVersionLog, NSString;

@interface KVDonateXPCClientFactory : NSObject
{
    KVDonateVersionLog *_versionLog;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002aeef
- (id)versionLog;	// IMP=0x000000000002aee1
- (void)terminateConnection:(id)arg1;	// IMP=0x000000000002ae95
- (id)makeConnection:(id)arg1;	// IMP=0x000000000002ae48
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000002adc4
- (id)init;	// IMP=0x000000000002ad7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

