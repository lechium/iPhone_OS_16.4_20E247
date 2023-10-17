//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CNContact, CNMeCardSharingOnboardingAvatarCarouselItem, CNMeCardSharingOnboardingAvatarCarouselLayout, CNSharingProfileLogger, NSArray, NSString, PRMonogramColor, UICollectionView;
@protocol AVTAvatarRecord, CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingOnboardingAvatarCarouselViewController : UIViewController
{
    id <CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate> _delegate;	// 8 = 0x8
    PRMonogramColor *_monogramColor;	// 16 = 0x10
    NSArray *_items;	// 24 = 0x18
    UICollectionView *_collectionView;	// 32 = 0x20
    CNMeCardSharingOnboardingAvatarCarouselLayout *_layout;	// 40 = 0x28
    id <AVTAvatarRecord> _avatarRecord;	// 48 = 0x30
    CNContact *_contact;	// 56 = 0x38
    CNMeCardSharingOnboardingAvatarCarouselItem *_photoPickerItem;	// 64 = 0x40
    CNMeCardSharingOnboardingAvatarCarouselItem *_animojiItem;	// 72 = 0x48
    CNMeCardSharingOnboardingAvatarCarouselItem *_photoItem;	// 80 = 0x50
    CNMeCardSharingOnboardingAvatarCarouselItem *_monogramItem;	// 88 = 0x58
    CNSharingProfileLogger *_logger;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000ddd5c
@property(readonly, nonatomic) CNSharingProfileLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *monogramItem; // @synthesize monogramItem=_monogramItem;
@property(retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *photoItem; // @synthesize photoItem=_photoItem;
@property(retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *animojiItem; // @synthesize animojiItem=_animojiItem;
@property(retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *photoPickerItem; // @synthesize photoPickerItem=_photoPickerItem;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) id <AVTAvatarRecord> avatarRecord; // @synthesize avatarRecord=_avatarRecord;
@property(retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) PRMonogramColor *monogramColor; // @synthesize monogramColor=_monogramColor;
@property(nonatomic) __weak id <CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000dd9ff
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000dd71e
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000000dd701
- (void)scrollToItemAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000dd659
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000000dd647
@property(readonly, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *selectedItem;
- (void)notifyDelegateOfUpdateToCenterMostItem;	// IMP=0x00000000000dd545
- (id)monogramImageItemWithContact:(id)arg1;	// IMP=0x00000000000dd389
- (id)contactImageItemWithContact:(id)arg1;	// IMP=0x00000000000dd249
- (void)reloadForUpdatedMonogram;	// IMP=0x00000000000dd1f7
- (void)reloadForUpdatedContactPhoto;	// IMP=0x00000000000dd093
- (id)standardItems;	// IMP=0x00000000000dce72
- (id)itemsForNoAnimojiAndNoPhoto;	// IMP=0x00000000000dccfc
- (void)buildItems;	// IMP=0x00000000000dcc8a
- (void)viewWillLayoutSubviews;	// IMP=0x00000000000dc7fe
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000dc7bd
- (void)viewDidLoad;	// IMP=0x00000000000dc580
- (id)initWithContact:(id)arg1 avatarRecord:(id)arg2 logger:(id)arg3;	// IMP=0x00000000000dc449

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
