//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "OBPrivacyCombinedController.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface OBPrivacyCombinedController_iOS : OBPrivacyCombinedController
{
    _Bool _isUnifiedAbout;	// 8 = 0x8
    NSArray *_bundles;	// 16 = 0x10
    NSArray *_privacyFlowGroups;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000029dbb
@property _Bool isUnifiedAbout; // @synthesize isUnifiedAbout=_isUnifiedAbout;
@property(retain) NSArray *privacyFlowGroups; // @synthesize privacyFlowGroups=_privacyFlowGroups;
@property(retain, nonatomic) NSArray *bundles; // @synthesize bundles=_bundles;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;	// IMP=0x0000000000029cd4
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000029ccc
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000029a53
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x000000000002941a
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000000000291f8
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000002915d
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000029119
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000028f99
- (id)_privacyFlowForIndexPath:(id)arg1;	// IMP=0x0000000000028eaf
- (void)setCustomTintColor:(id)arg1;	// IMP=0x0000000000028e12
- (void)showPrivacyGateway:(id)arg1;	// IMP=0x0000000000028ceb
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000028caa
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000289f4
- (void)viewDidLoad;	// IMP=0x0000000000027839
- (id)initWithBundles:(id)arg1;	// IMP=0x00000000000277bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

