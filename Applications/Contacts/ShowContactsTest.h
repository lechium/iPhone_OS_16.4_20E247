//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNTestNavigationControllerDelegate, NSString;

@interface ShowContactsTest
{
    int _nextContactIndex;	// 8 = 0x8
    int _maxContactIndex;	// 12 = 0xc
    CNTestNavigationControllerDelegate *_navControllerDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000b5ad
@property(retain, nonatomic) CNTestNavigationControllerDelegate *navControllerDelegate; // @synthesize navControllerDelegate=_navControllerDelegate;
@property(nonatomic) int maxContactIndex; // @synthesize maxContactIndex=_maxContactIndex;
@property(nonatomic) int nextContactIndex; // @synthesize nextContactIndex=_nextContactIndex;
- (void)showContactsListForIPhone;	// IMP=0x001000000000b386
- (void)showNextContact;	// IMP=0x001000000000b067
- (void)iterateContact;	// IMP=0x001000000000adf0
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x001000000000addb
- (void)didShow:(id)arg1;	// IMP=0x001000000000ac63
- (void)resetDelegate;	// IMP=0x001000000000ab67
- (void)prepareForNextTest;	// IMP=0x001000000000ab29
- (_Bool)prepareForTestWithOptions:(id)arg1;	// IMP=0x001000000000a80a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

