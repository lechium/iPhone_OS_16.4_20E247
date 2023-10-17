//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSProgress, NSString;

@interface DMDiphoneOSAppLifeCycle
{
    NSProgress *_proxyProgress;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000028ef5
@property(retain, nonatomic) NSProgress *proxyProgress; // @synthesize proxyProgress=_proxyProgress;
- (void)_findProxyInProxies:(id)arg1 andCallBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000028c3c
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x0010000000028925
- (void)applicationsDidFailToUninstall:(id)arg1;	// IMP=0x0010000000028757
- (void)applicationsWillUninstall:(id)arg1;	// IMP=0x0010000000028440
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x0010000000027f50
- (void)applicationsDidFailToInstall:(id)arg1;	// IMP=0x0010000000027b75
- (void)applicationInstallsDidCancel:(id)arg1;	// IMP=0x00100000000278f2
- (void)applicationInstallsDidResume:(id)arg1;	// IMP=0x0010000000027678
- (void)applicationInstallsDidPause:(id)arg1;	// IMP=0x00100000000273fe
- (void)applicationInstallsDidChange:(id)arg1;	// IMP=0x0010000000027184
- (void)applicationInstallsDidStart:(id)arg1;	// IMP=0x0010000000026c06
- (void)applicationsWillInstall:(id)arg1;	// IMP=0x001000000002697b
- (id)progress;	// IMP=0x0010000000026969
- (void)dealloc;	// IMP=0x00100000000268f4
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x0010000000026374

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
