//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUPlaceSectionController.h"

@class MKUGCCallToActionViewAppearance, MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderViewModel, MUPlaceSectionView, MUPlaceVerticalCardContainerView, NSArray, NSDictionary, NSString, UIView, UIViewController;
@protocol MUInfoCardAnalyticsDelegate, MUPersonalGuidesViewProvider;

__attribute__((visibility("hidden")))
@interface MUPersonalGuidesSectionController : MUPlaceSectionController
{
    id <MUPersonalGuidesViewProvider> _viewProvider;	// 8 = 0x8
    MUPlaceVerticalCardContainerView *_containerView;	// 16 = 0x10
    MUPlaceSectionView *_sectionView;	// 24 = 0x18
    NSDictionary *_collectionViews;	// 32 = 0x20
    NSDictionary *_wrappedSectionViewsByIdentifier;	// 40 = 0x28
    _Bool _active;	// 48 = 0x30
    MUPlaceSectionHeaderViewModel *_sectionHeaderViewModel;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000061e1d
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (_Bool)isImpressionable;	// IMP=0x0000000000061e05
- (int)analyticsModuleType;	// IMP=0x0000000000061dfa
- (void)verticalCardContainerView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000061bb6
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly, nonatomic) UIView *sectionView;
@property(readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel; // @synthesize sectionHeaderViewModel=_sectionHeaderViewModel;
- (void)reloadCollectionsAnimated:(_Bool)arg1;	// IMP=0x000000000006111a
- (void)_setupSectionView;	// IMP=0x0000000000060f21
- (id)initWithMapItem:(id)arg1 collectionViewProvider:(id)arg2;	// IMP=0x0000000000060dd6

// Remaining properties
@property(nonatomic) __weak id <MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property(readonly, nonatomic) UIViewController *sectionViewController;
@property(readonly, nonatomic) NSArray *sectionViews;
@property(retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property(readonly) Class superclass;

@end

