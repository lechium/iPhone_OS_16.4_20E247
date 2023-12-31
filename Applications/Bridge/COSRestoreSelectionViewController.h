//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NRDevice, NSArray, NSIndexPath, NSMutableArray, NSString, OBBoldTrayButton, OBLinkTrayButton, UITableView;

@interface COSRestoreSelectionViewController
{
    NSMutableArray *_restoreInstances;	// 8 = 0x8
    long long _backupIndex;	// 16 = 0x10
    NRDevice *_device;	// 24 = 0x18
    NSArray *_backups;	// 32 = 0x20
    NSArray *_pairedDevices;	// 40 = 0x28
    UITableView *_backupsTableView;	// 48 = 0x30
    OBLinkTrayButton *_setupAsNewButton;	// 56 = 0x38
    OBBoldTrayButton *_continueButton;	// 64 = 0x40
    NSIndexPath *_selectedIndex;	// 72 = 0x48
}

+ (_Bool)controllerNeedsToRun;	// IMP=0x00200000000455b0
- (void).cxx_destruct;	// IMP=0x0020000000045c10
@property(retain, nonatomic) NSIndexPath *selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) OBBoldTrayButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) OBLinkTrayButton *setupAsNewButton; // @synthesize setupAsNewButton=_setupAsNewButton;
@property(retain, nonatomic) UITableView *backupsTableView; // @synthesize backupsTableView=_backupsTableView;
@property(retain, nonatomic) NSArray *pairedDevices; // @synthesize pairedDevices=_pairedDevices;
@property(retain, nonatomic) NSArray *backups; // @synthesize backups=_backups;
@property(retain, nonatomic) NRDevice *device; // @synthesize device=_device;
@property(nonatomic) long long backupIndex; // @synthesize backupIndex=_backupIndex;
@property(retain, nonatomic) NSMutableArray *restoreInstances; // @synthesize restoreInstances=_restoreInstances;
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;	// IMP=0x00100000000459b8
- (void)backupsChanged:(unsigned long long)arg1;	// IMP=0x0010000000045777
- (id)holdActivityIdentifier;	// IMP=0x001000000004576a
- (id)localizedWaitScreenDescription;	// IMP=0x00100000000456fe
- (double)waitScreenPushGracePeriod;	// IMP=0x00100000000456f0
- (_Bool)holdWithWaitScreen;	// IMP=0x00100000000456e8
- (_Bool)holdBeforeDisplaying;	// IMP=0x00100000000455cf
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000000454ac
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000000453cc
- (void)_skipRestoreFromBackup;	// IMP=0x00100000000452c0
- (void)_restoreCompletedWithSuccess;	// IMP=0x0010000000045203
- (void)_restoreFailedWithError:(id)arg1;	// IMP=0x0010000000044f75
- (void)_triggerRestoreFromDeviceIndex:(long long)arg1;	// IMP=0x0010000000044bfa
- (void)_triggerRestoreFromBackupIndex:(long long)arg1;	// IMP=0x00100000000448c4
- (void)_triggerUpdate:(long long)arg1;	// IMP=0x00100000000448be
- (void)_triggerRestoreFromIndex:(long long)arg1;	// IMP=0x0010000000044739
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000044558
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x001000000004454a
- (void)tappedNewButton:(id)arg1;	// IMP=0x0010000000044538
- (void)tappedContinueButton:(id)arg1;	// IMP=0x0010000000044397
- (void)viewDidLoad;	// IMP=0x0010000000043ebb
- (_Bool)controllerAllowsNavigatingBackFrom;	// IMP=0x0010000000043e6e
- (_Bool)controllerAllowsNavigatingBackTo;	// IMP=0x0010000000043e66
- (void)dealloc;	// IMP=0x0010000000043da6
- (id)init;	// IMP=0x0010000000043c6e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

