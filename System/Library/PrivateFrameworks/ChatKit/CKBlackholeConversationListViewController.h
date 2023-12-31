//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PSRootController, PSSpecifier, UIViewController;
@protocol PSController;

__attribute__((visibility("hidden")))
@interface CKBlackholeConversationListViewController
{
    UIViewController<PSController> *_parentController;	// 8 = 0x8
    PSRootController *_rootController;	// 16 = 0x10
    PSSpecifier *_specifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002f51c6
- (_Bool)canBeShownFromSuspendedState;	// IMP=0x00000000002f51be
- (void)handleURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002f51a1
- (void)handleURL:(id)arg1;	// IMP=0x00000000002f5184
- (void)showController:(id)arg1 animate:(_Bool)arg2;	// IMP=0x00000000002f5167
- (void)showController:(id)arg1;	// IMP=0x00000000002f514a
- (id)readPreferenceValue:(id)arg1;	// IMP=0x00000000002f5131
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000002f5118
- (id)specifier;	// IMP=0x00000000002f5103
- (void)setSpecifier:(id)arg1;	// IMP=0x00000000002f50b9
- (id)rootController;	// IMP=0x00000000002f50a4
- (void)setRootController:(id)arg1;	// IMP=0x00000000002f5090
- (id)parentController;	// IMP=0x00000000002f507b
- (void)setParentController:(id)arg1;	// IMP=0x00000000002f5067

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

