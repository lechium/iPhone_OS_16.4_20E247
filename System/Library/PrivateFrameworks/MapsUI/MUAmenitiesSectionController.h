//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUPlaceSectionController.h"

@class GEOBusinessInfoModuleConfiguration, MKUGCCallToActionViewAppearance, MUAmenityListSectionView, MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderViewModel, MUPlaceSectionView, NSArray, NSString, UIView, UIViewController;
@protocol MUInfoCardAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MUAmenitiesSectionController : MUPlaceSectionController
{
    MUPlaceSectionView *_sectionView;	// 8 = 0x8
    GEOBusinessInfoModuleConfiguration *_moduleConfig;	// 16 = 0x10
    MUAmenityListSectionView *_amenitySectionView;	// 24 = 0x18
    MUPlaceSectionHeaderViewModel *_sectionHeaderViewModel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000006e45a
- (_Bool)isImpressionable;	// IMP=0x000000000006e452
- (int)analyticsModuleType;	// IMP=0x000000000006e447
- (id)infoCardChildUnactionableUIElements;	// IMP=0x000000000006e339
@property(readonly, nonatomic) UIView *sectionView;
- (void)_setupAmenitiyRows;	// IMP=0x000000000006dd48
- (id)initWithMapItem:(id)arg1 moduleConiguration:(id)arg2;	// IMP=0x000000000006dbf6
@property(readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel; // @synthesize sectionHeaderViewModel=_sectionHeaderViewModel;

// Remaining properties
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic) __weak id <MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property(readonly, nonatomic) UIViewController *sectionViewController;
@property(readonly, nonatomic) NSArray *sectionViews;
@property(retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property(readonly) Class superclass;

@end

