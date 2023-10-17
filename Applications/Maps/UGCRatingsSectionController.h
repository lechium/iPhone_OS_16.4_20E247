//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapItem, NSArray, NSDictionary, NSString, UGCRatingsForm;
@protocol UGCPOIEnrichmentAnalyticsDelegate, UGCSectionControllerDelegate;

@interface UGCRatingsSectionController : NSObject
{
    UGCRatingsForm *_ratingsForm;	// 8 = 0x8
    MKMapItem *_mapItem;	// 16 = 0x10
    NSDictionary *_ratingCells;	// 24 = 0x18
    _Bool _formInteractionEnabled;	// 32 = 0x20
    NSArray *_rowItems;	// 40 = 0x28
    id <UGCSectionControllerDelegate> _delegate;	// 48 = 0x30
    id <UGCPOIEnrichmentAnalyticsDelegate> _analyticsDelegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000008cc0d8
@property(readonly, nonatomic) __weak id <UGCPOIEnrichmentAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(nonatomic) _Bool formInteractionEnabled; // @synthesize formInteractionEnabled=_formInteractionEnabled;
@property(nonatomic) __weak id <UGCSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)formDidChange:(id)arg1;	// IMP=0x00100000008cc080
- (id)_mapItemAppleRatings;	// IMP=0x00100000008cbc9e
- (long long)_countAdjustmentForCategory:(id)arg1;	// IMP=0x00100000008cbc33
- (id)_ratingKeyForAppleRating:(id)arg1;	// IMP=0x00100000008cbbd2
- (id)_ratingKeyForCategory:(id)arg1;	// IMP=0x00100000008cbb70
- (void)_updateCategoryViewModels;	// IMP=0x00100000008cb7e4
@property(readonly, nonatomic) NSArray *rowItems; // @synthesize rowItems=_rowItems;
- (void)handleSuccessfulSubmission;	// IMP=0x00100000008cb0f7
- (void)ratingCategoryCellChangedState:(long long)arg1 forKey:(id)arg2;	// IMP=0x00100000008cb013
- (void)ratingCategoryCell:(id)arg1 presentInformedConsentIfNeededWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000008caf7f
- (id)initWithRatingsForm:(id)arg1 mapItem:(id)arg2 analyticsDelegate:(id)arg3;	// IMP=0x00100000008caeb3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
// Error: Property attributes should begin with the type ('T') attribute, property name: superclass
// Property attributes: (null)


@end
