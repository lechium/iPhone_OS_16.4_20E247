//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PSSpecifier;

__attribute__((visibility("hidden")))
@interface STManageContactsGroupSpecifierProvider
{
    PSSpecifier *_manageContactsRequestSpecifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000071f9d
@property(retain) PSSpecifier *manageContactsRequestSpecifier; // @synthesize manageContactsRequestSpecifier=_manageContactsRequestSpecifier;
- (void)_updateContactManagementState:(long long)arg1;	// IMP=0x0000000000071eae
- (void)_showManageContactsRequestAlert:(id)arg1;	// IMP=0x0000000000071bca
- (void)_communicationLimitsDidChange:(id)arg1;	// IMP=0x000000000007188f
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000071726
- (void)setCoordinator:(id)arg1;	// IMP=0x0000000000071669
- (id)init;	// IMP=0x000000000007158b

@end

