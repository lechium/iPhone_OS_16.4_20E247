//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUPlaceSectionController.h"

@class MKUGCCallToActionViewAppearance, MUBrowseCategoryViewController, MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderViewModel, MUPlaceSectionView, NSArray, NSString, UIView, UIViewController;
@protocol MUBrowseCategorySectionControllerDelegate, MUInfoCardAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MUBrowseCategorySectionController : MUPlaceSectionController
{
    MUBrowseCategoryViewController *_browseCategoryVC;	// 8 = 0x8
    MUPlaceSectionView *_sectionView;	// 16 = 0x10
    id <MUBrowseCategorySectionControllerDelegate> _browseCategoryDelegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006ff6c
@property(nonatomic) __weak id <MUBrowseCategorySectionControllerDelegate> browseCategoryDelegate; // @synthesize browseCategoryDelegate=_browseCategoryDelegate;
- (_Bool)isImpressionable;	// IMP=0x000000000006ff37
- (int)analyticsModuleType;	// IMP=0x000000000006ff2c
- (void)categoryBrowseViewControllerDidDisplayBrowseCategories:(id)arg1;	// IMP=0x000000000006fed5
- (void)categoryBrowseViewController:(id)arg1 didTapOnSearchCategory:(id)arg2;	// IMP=0x000000000006fe60
@property(readonly, nonatomic) UIViewController *sectionViewController;
@property(readonly, nonatomic) UIView *sectionView;
- (void)_setupSectionView;	// IMP=0x000000000006fca2
- (id)initWithMapItem:(id)arg1;	// IMP=0x000000000006fb88

// Remaining properties
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic) __weak id <MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property(readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property(readonly, nonatomic) NSArray *sectionViews;
@property(retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property(readonly) Class superclass;

@end
