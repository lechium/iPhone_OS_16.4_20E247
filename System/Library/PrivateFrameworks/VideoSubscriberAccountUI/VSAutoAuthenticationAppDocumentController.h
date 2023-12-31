//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IKViewElement, NSString;

__attribute__((visibility("hidden")))
@interface VSAutoAuthenticationAppDocumentController
{
    IKViewElement *_buttonLockupElement;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001b762
@property(retain, nonatomic) IKViewElement *buttonLockupElement; // @synthesize buttonLockupElement=_buttonLockupElement;
- (_Bool)_updateAutoAuthenticationViewModel:(id)arg1 withTemplate:(id)arg2;	// IMP=0x000000000001af26
- (_Bool)_updateAutoAuthenticationViewModel:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001ae31
- (id)_autoAuthenticationViewModelWithViewModel:(id)arg1;	// IMP=0x000000000001ad6f
- (void)autoAuthenticationViewModelDidManualSignInButton:(id)arg1;	// IMP=0x000000000001acdd
- (_Bool)_updateViewModel:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001abb9
- (id)_newViewModel;	// IMP=0x000000000001ab85

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

