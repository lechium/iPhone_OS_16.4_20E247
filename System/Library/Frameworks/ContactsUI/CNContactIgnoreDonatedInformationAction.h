//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactAction.h"

@class CNDonationStore, CNUIExternalComponentsFactory;

__attribute__((visibility("hidden")))
@interface CNContactIgnoreDonatedInformationAction : CNContactAction
{
    CNUIExternalComponentsFactory *_componentsFactory;	// 8 = 0x8
    CNDonationStore *_donationStore;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001573d5
@property(readonly, nonatomic) CNDonationStore *donationStore; // @synthesize donationStore=_donationStore;
@property(readonly, nonatomic) CNUIExternalComponentsFactory *componentsFactory; // @synthesize componentsFactory=_componentsFactory;
- (void)showRejectionFailureAlert;	// IMP=0x00000000001571c0
- (_Bool)rejectAllDonations;	// IMP=0x000000000015702f
- (void)performActionWithSender:(id)arg1;	// IMP=0x0000000000156dc2
- (id)initWithContact:(id)arg1 donationStore:(id)arg2 componentsFactory:(id)arg3;	// IMP=0x0000000000156c5e
- (id)initWithContact:(id)arg1;	// IMP=0x0000000000156c0d

@end
