//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PSSpecifier;

__attribute__((visibility("hidden")))
@interface STDisableScreenTimeGroupSpecifierProvider
{
    PSSpecifier *_disableScreenTimeSpecifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000549b6
@property(retain, nonatomic) PSSpecifier *disableScreenTimeSpecifier; // @synthesize disableScreenTimeSpecifier=_disableScreenTimeSpecifier;
- (void)disableScreenTime:(id)arg1;	// IMP=0x00000000000548df
- (id)disableScreenTimeConfirmationPrompt;	// IMP=0x000000000005469d
- (void)updateDisableScreenTimeSpecifier;	// IMP=0x0000000000054541
- (void)confirmDisableScreenTime:(id)arg1;	// IMP=0x00000000000542f9
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000541ad
- (void)setCoordinator:(id)arg1;	// IMP=0x000000000005409f
- (id)init;	// IMP=0x0000000000053f55
- (id)passcodeGatedDeleteButtonSpecifierWithName:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000053e12

@end
