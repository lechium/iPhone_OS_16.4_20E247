//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFAnalytics.h>

@interface HFAnalytics (HUAdditions)
+ (id)_overrideBannerItemClassName:(id)arg1 withOverrideClassName:(id)arg2;	// IMP=0x0080000000347816
+ (void)sendGeneralButtonTapEventWithButtonTitle:(id)arg1 sourceViewController:(id)arg2;	// IMP=0x0080000000347744
+ (void)sendBannerInteractionforItem:(id)arg1 tappedBannerItemOverrideClassName:(id)arg2 hiddenBannerEvents:(id)arg3;	// IMP=0x0080000000347319
+ (void)sendSwitchCellToggleEventForItem:(id)arg1 isOn:(_Bool)arg2 title:(id)arg3 fromSourceViewController:(id)arg4;	// IMP=0x0080000000347029
+ (void)logAndSendTileInteractionEventOfType:(unsigned long long)arg1 withPresentationContext:(id)arg2 presentationCoordinator:(id)arg3;	// IMP=0x0080000000346201
@end

