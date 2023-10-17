//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CollectionHandler, NSArray, NSAttributedString, UIColor, UIImage;

@interface PlaceContextViewModel : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    UIImage *_image;	// 16 = 0x10
    UIColor *_imageTintColor;	// 24 = 0x18
    double _imageContinuousCornerRadius;	// 32 = 0x20
    NSAttributedString *_attributedString;	// 40 = 0x28
    NSAttributedString *_highlightedAttributedString;	// 48 = 0x30
    NSArray *_placeCollections;	// 56 = 0x38
    CollectionHandler *_userGeneratedCollection;	// 64 = 0x40
    NSArray *_stringHighlightRanges;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000005df5f7
@property(copy, nonatomic) NSArray *stringHighlightRanges; // @synthesize stringHighlightRanges=_stringHighlightRanges;
@property(copy, nonatomic) CollectionHandler *userGeneratedCollection; // @synthesize userGeneratedCollection=_userGeneratedCollection;
@property(copy, nonatomic) NSArray *placeCollections; // @synthesize placeCollections=_placeCollections;
@property(copy, nonatomic) NSAttributedString *highlightedAttributedString; // @synthesize highlightedAttributedString=_highlightedAttributedString;
@property(copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(nonatomic) double imageContinuousCornerRadius; // @synthesize imageContinuousCornerRadius=_imageContinuousCornerRadius;
@property(retain, nonatomic) UIColor *imageTintColor; // @synthesize imageTintColor=_imageTintColor;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)userGeneratedCollectionContainingMapItem:(id)arg1;	// IMP=0x00100000005df31a
- (_Bool)isRTL;	// IMP=0x00100000005df2ca
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000005df1ce
- (unsigned long long)hash;	// IMP=0x00100000005df18f
@property(readonly, nonatomic) _Bool isTappable;
- (id)initWithMapItem:(id)arg1 context:(unsigned long long)arg2;	// IMP=0x00100000005dec5c
- (id)initWithUGCRatingsWithMapItem:(id)arg1;	// IMP=0x00100000005deb50
- (id)initWithUGCUserSubmittedRecommendationWithReviewedPlace:(id)arg1;	// IMP=0x00100000005dea94
- (id)initWithChargerNumberString:(id)arg1;	// IMP=0x00100000005de93b
- (id)initWithUserGeneratedCollection:(id)arg1;	// IMP=0x00100000005de6a0
- (id)initWithRatingsWithMapItem:(id)arg1;	// IMP=0x00100000005de594
- (id)initWithCurrentLocation;	// IMP=0x00100000005de40c
- (id)initWithPlaceCollections:(id)arg1;	// IMP=0x00100000005de14f
- (id)initWithPlaceCollection:(id)arg1;	// IMP=0x00100000005dddf2
- (id)attributedStringWithString:(id)arg1 stringHighlightRanges:(id)arg2;	// IMP=0x00100000005ddb7b
- (id)attributedStringHighlightedWithString:(id)arg1 stringHighlightRanges:(id)arg2;	// IMP=0x00100000005dd904
- (id)initWithType:(unsigned long long)arg1 image:(id)arg2 attributedString:(id)arg3;	// IMP=0x00100000005dd85f
- (id)initWithType:(unsigned long long)arg1 image:(id)arg2 string:(id)arg3 stringHighlightRanges:(id)arg4;	// IMP=0x00100000005dd752

@end
