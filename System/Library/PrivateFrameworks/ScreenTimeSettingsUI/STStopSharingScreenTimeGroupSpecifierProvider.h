//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PSSpecifier;

__attribute__((visibility("hidden")))
@interface STStopSharingScreenTimeGroupSpecifierProvider
{
    PSSpecifier *_stopSharingScreenTimeSpecifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000009269a
@property(retain, nonatomic) PSSpecifier *stopSharingScreenTimeSpecifier; // @synthesize stopSharingScreenTimeSpecifier=_stopSharingScreenTimeSpecifier;
- (void)disableScreenTime:(id)arg1;	// IMP=0x00000000000925e9
- (void)confirmStopSharingScreenTime:(id)arg1;	// IMP=0x00000000000923a8
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000092262
- (void)setCoordinator:(id)arg1;	// IMP=0x000000000009219e
- (id)init;	// IMP=0x0000000000092028

@end
