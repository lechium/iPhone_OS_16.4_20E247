//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DDRemoteActionViewController;

__attribute__((visibility("hidden")))
@interface DDAddToAddressBookAction
{
}

+ (_Bool)actionAvailableForContact:(id)arg1;	// IMP=0x006000000003daee
+ (_Bool)isAvailable;	// IMP=0x006000000003da0b
- (id)notificationURL;	// IMP=0x000000000003e8f6
- (id)notificationIconBundleIdentifier;	// IMP=0x000000000003e8e9
- (id)notificationTitle;	// IMP=0x000000000003dec9
- (id)contact;	// IMP=0x000000000003dc23
- (id)compactTitle;	// IMP=0x000000000003db09
- (void)adaptForPresentationInPopover:(_Bool)arg1;	// IMP=0x000000000003daa2
- (void)prepareViewControllerForActionController:(id)arg1;	// IMP=0x000000000003da24
- (int)interactionType;	// IMP=0x000000000003da00
- (id)localizedName;	// IMP=0x000000000003d9e8
- (void)invalidate;	// IMP=0x000000000003d98c

// Remaining properties
@property(retain, nonatomic) DDRemoteActionViewController *viewController; // @dynamic viewController;

@end

