//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol COSApplicationsInstallStateProviderDelegate;

@interface COSApplicationsInstallStateProvider : NSObject
{
    id <COSApplicationsInstallStateProviderDelegate> _delegate;	// 8 = 0x8
}

- (void);	// IMP=0x0020000000085d67
@property(nonatomic) __weak id <COSApplicationsInstallStateProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)applicationsUninstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;	// IMP=0x0010000000085a90
- (void)applicationsInstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;	// IMP=0x001000000008579d
- (void)_processChangedRows:(id)arg1 installed:(_Bool)arg2;	// IMP=0x001000000008561b
- (void)dealloc;	// IMP=0x00100000000855a6
- (id)initWithDelegate:(id)arg1;	// IMP=0x00100000000854fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

