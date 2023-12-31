//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDAboutFilter, GEOPDActionDataFilter, GEOPDAddressFilter, GEOPDAddressObjectFilter, GEOPDAmenitiesFilter, GEOPDAnnotatedItemListFilter, GEOPDAssociatedAppFilter, GEOPDBoundsFilter, GEOPDBrowseCategoriesFilter, GEOPDBusinessClaimFilter, GEOPDBusinessHoursFilter, GEOPDCaptionedPhotoFilter, GEOPDCategorizedPhotosFilter, GEOPDCollectionIdsFilter, GEOPDContainedPlaceFilter, GEOPDContainmentPlaceFilter, GEOPDETAFilter, GEOPDEnhancedPlacementFilter, GEOPDEnrichmentDataFilter, GEOPDEnrichmentInfoFilter, GEOPDEntityFilter, GEOPDExploreGuidesFilter, GEOPDExternalActionFilter, GEOPDFactoidFilter, GEOPDFlyoverFilter, GEOPDGroundViewLabelFilter, GEOPDGuideGroupFilter, GEOPDHoursFilter, GEOPDISO3166CodeFilter, GEOPDIconFilter, GEOPDLabelGeometryFilter, GEOPDLinkedServiceFilter, GEOPDLocationEventFilter, GEOPDMessageLinkFilter, GEOPDPOIClaimFilter, GEOPDPhotoFilter, GEOPDPlaceCollectionFilter, GEOPDPlaceCollectionItemFilter, GEOPDPlaceInfoFilter, GEOPDPlaceQuestionnaireFilter, GEOPDPlacecardLayoutConfigurationFilter, GEOPDPlacecardURLFilter, GEOPDPoiEventFilter, GEOPDPriceDescriptionFilter, GEOPDPrototypeContainerFilter, GEOPDPublisherFilter, GEOPDQuickLinkFilter, GEOPDRapFilter, GEOPDRatingFilter, GEOPDRawAttributeFilter, GEOPDRelatedPlaceFilter, GEOPDRestaurantReservationLinkFilter, GEOPDResultSnippetFilter, GEOPDReviewFilter, GEOPDRoadAccessInfoFilter, GEOPDSimpleRestaurantMenuTextFilter, GEOPDSpatialLookupFilter, GEOPDStorefrontFacesFilter, GEOPDStorefrontFilter, GEOPDStorefrontPresentationFilter, GEOPDStyleAttributesFilter, GEOPDTemplatePlaceFilter, GEOPDTextBlockFilter, GEOPDTipFilter, GEOPDTransitAttributionFilter, GEOPDTransitIncidentFilter, GEOPDTransitInfoFilter, GEOPDTransitInfoSnippetFilter, GEOPDTransitPaymentMethodInfoFilter, GEOPDTransitScheduleFilter, GEOPDTransitTripGeometryFilter, GEOPDTransitTripStopFilter, GEOPDTransitTripStopTimeFilter, GEOPDVehiclePositionFilter, GEOPDVendorAmenitiesFilter, GEOPDVenueInfoFilter, GEOPDWalletCategoryInformationFilter, GEOPDWifiFingerprintFilter, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDComponentFilter : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDAboutFilter *_aboutFilter;	// 24 = 0x18
    GEOPDRoadAccessInfoFilter *_accessInfoFilter;	// 32 = 0x20
    GEOPDActionDataFilter *_actionDataFilter;	// 40 = 0x28
    GEOPDAddressFilter *_addressFilter;	// 48 = 0x30
    GEOPDAddressObjectFilter *_addressObjectFilter;	// 56 = 0x38
    GEOPDAmenitiesFilter *_amenitiesFilter;	// 64 = 0x40
    GEOPDAnnotatedItemListFilter *_annotatedItemListFilter;	// 72 = 0x48
    GEOPDAssociatedAppFilter *_associatedAppFilter;	// 80 = 0x50
    GEOPDBoundsFilter *_boundsFilter;	// 88 = 0x58
    GEOPDBrowseCategoriesFilter *_browseCategoriesFilter;	// 96 = 0x60
    GEOPDBusinessClaimFilter *_businessClaimFilter;	// 104 = 0x68
    GEOPDBusinessHoursFilter *_businessHoursFilter;	// 112 = 0x70
    GEOPDCaptionedPhotoFilter *_captionedPhotoFilter;	// 120 = 0x78
    GEOPDCategorizedPhotosFilter *_categorizedPhotosFilter;	// 128 = 0x80
    GEOPDCollectionIdsFilter *_collectionIdsFilter;	// 136 = 0x88
    GEOPDContainedPlaceFilter *_containedPlaceFilter;	// 144 = 0x90
    GEOPDContainmentPlaceFilter *_containmentPlaceFilter;	// 152 = 0x98
    GEOPDEnhancedPlacementFilter *_enhancedPlacementFilter;	// 160 = 0xa0
    GEOPDEnrichmentDataFilter *_enrichmentDataFilter;	// 168 = 0xa8
    GEOPDEnrichmentInfoFilter *_enrichmentInfoFilter;	// 176 = 0xb0
    GEOPDEntityFilter *_entityFilter;	// 184 = 0xb8
    GEOPDETAFilter *_etaFilter;	// 192 = 0xc0
    GEOPDExploreGuidesFilter *_exploreGuidesFilter;	// 200 = 0xc8
    GEOPDExternalActionFilter *_externalActionFilter;	// 208 = 0xd0
    GEOPDFactoidFilter *_factoidFilter;	// 216 = 0xd8
    GEOPDFlyoverFilter *_flyoverFilter;	// 224 = 0xe0
    GEOPDGroundViewLabelFilter *_groundViewLabelFilter;	// 232 = 0xe8
    GEOPDGuideGroupFilter *_guideGroupFilter;	// 240 = 0xf0
    GEOPDHoursFilter *_hoursFilter;	// 248 = 0xf8
    GEOPDIconFilter *_iconFilter;	// 256 = 0x100
    GEOPDISO3166CodeFilter *_iso3166CodeFilter;	// 264 = 0x108
    GEOPDLabelGeometryFilter *_labelGeometryFilter;	// 272 = 0x110
    GEOPDLinkedServiceFilter *_linkedServiceFilter;	// 280 = 0x118
    GEOPDLocationEventFilter *_locationEventFilter;	// 288 = 0x120
    GEOPDMessageLinkFilter *_messageLinkFilter;	// 296 = 0x128
    GEOPDPhotoFilter *_photoFilter;	// 304 = 0x130
    GEOPDPlaceCollectionFilter *_placeCollectionFilter;	// 312 = 0x138
    GEOPDPlaceCollectionItemFilter *_placeCollectionItemFilter;	// 320 = 0x140
    GEOPDPlaceInfoFilter *_placeInfoFilter;	// 328 = 0x148
    GEOPDPlaceQuestionnaireFilter *_placeQuestionnaireFilter;	// 336 = 0x150
    GEOPDPlacecardLayoutConfigurationFilter *_placecardLayoutConfigurationFilter;	// 344 = 0x158
    GEOPDPlacecardURLFilter *_placecardUrlFilter;	// 352 = 0x160
    GEOPDPOIClaimFilter *_poiClaimFilter;	// 360 = 0x168
    GEOPDPoiEventFilter *_poiEventFilter;	// 368 = 0x170
    GEOPDPriceDescriptionFilter *_priceDescriptionFilter;	// 376 = 0x178
    GEOPDPrototypeContainerFilter *_protoTypeContainerFilter;	// 384 = 0x180
    GEOPDPublisherFilter *_publisherFilter;	// 392 = 0x188
    GEOPDQuickLinkFilter *_quickLinkFilter;	// 400 = 0x190
    GEOPDRapFilter *_rapFilter;	// 408 = 0x198
    GEOPDRatingFilter *_ratingFilter;	// 416 = 0x1a0
    GEOPDRawAttributeFilter *_rawAttributeFilter;	// 424 = 0x1a8
    GEOPDRelatedPlaceFilter *_relatedPlaceFilter;	// 432 = 0x1b0
    GEOPDRestaurantReservationLinkFilter *_restaurantReservationLinkFilter;	// 440 = 0x1b8
    GEOPDResultSnippetFilter *_resultSnippetFilter;	// 448 = 0x1c0
    GEOPDReviewFilter *_reviewFilter;	// 456 = 0x1c8
    GEOPDSimpleRestaurantMenuTextFilter *_simpleRestaurantMenuTextFilter;	// 464 = 0x1d0
    GEOPDSpatialLookupFilter *_spatialLookupFilter;	// 472 = 0x1d8
    GEOPDStorefrontFacesFilter *_storefrontFacesFilter;	// 480 = 0x1e0
    GEOPDStorefrontFilter *_storefrontFilter;	// 488 = 0x1e8
    GEOPDStorefrontPresentationFilter *_storefrontPresentationFilter;	// 496 = 0x1f0
    GEOPDStyleAttributesFilter *_styleAttributesFilter;	// 504 = 0x1f8
    GEOPDTemplatePlaceFilter *_templatePlaceFilter;	// 512 = 0x200
    GEOPDTextBlockFilter *_textBlockFilter;	// 520 = 0x208
    GEOPDTipFilter *_tipFilter;	// 528 = 0x210
    GEOPDTransitAttributionFilter *_transitAttributionFilter;	// 536 = 0x218
    GEOPDTransitIncidentFilter *_transitIncidentFilter;	// 544 = 0x220
    GEOPDTransitInfoFilter *_transitInfoFilter;	// 552 = 0x228
    GEOPDTransitInfoSnippetFilter *_transitInfoSnippetFilter;	// 560 = 0x230
    GEOPDTransitPaymentMethodInfoFilter *_transitPaymentMethodInfoFilter;	// 568 = 0x238
    GEOPDTransitScheduleFilter *_transitScheduleFilter;	// 576 = 0x240
    GEOPDTransitTripGeometryFilter *_transitTripGeometryFilter;	// 584 = 0x248
    GEOPDTransitTripStopFilter *_transitTripStopFilter;	// 592 = 0x250
    GEOPDTransitTripStopTimeFilter *_transitTripStopTimeFilter;	// 600 = 0x258
    GEOPDVehiclePositionFilter *_transitVehiclePositionFilter;	// 608 = 0x260
    GEOPDVendorAmenitiesFilter *_vendorAmenitiesFilter;	// 616 = 0x268
    GEOPDVenueInfoFilter *_venueInfoFilter;	// 624 = 0x270
    GEOPDWalletCategoryInformationFilter *_walletCategoryInformationFilter;	// 632 = 0x278
    GEOPDWifiFingerprintFilter *_wifiFingerprintFilter;	// 640 = 0x280
    unsigned int _readerMarkPos;	// 648 = 0x288
    unsigned int _readerMarkLength;	// 652 = 0x28c
    struct os_unfair_lock_s _readerLock;	// 656 = 0x290
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_aboutFilter:1;
        unsigned int read_accessInfoFilter:1;
        unsigned int read_actionDataFilter:1;
        unsigned int read_addressFilter:1;
        unsigned int read_addressObjectFilter:1;
        unsigned int read_amenitiesFilter:1;
        unsigned int read_annotatedItemListFilter:1;
        unsigned int read_associatedAppFilter:1;
        unsigned int read_boundsFilter:1;
        unsigned int read_browseCategoriesFilter:1;
        unsigned int read_businessClaimFilter:1;
        unsigned int read_businessHoursFilter:1;
        unsigned int read_captionedPhotoFilter:1;
        unsigned int read_categorizedPhotosFilter:1;
        unsigned int read_collectionIdsFilter:1;
        unsigned int read_containedPlaceFilter:1;
        unsigned int read_containmentPlaceFilter:1;
        unsigned int read_enhancedPlacementFilter:1;
        unsigned int read_enrichmentDataFilter:1;
        unsigned int read_enrichmentInfoFilter:1;
        unsigned int read_entityFilter:1;
        unsigned int read_etaFilter:1;
        unsigned int read_exploreGuidesFilter:1;
        unsigned int read_externalActionFilter:1;
        unsigned int read_factoidFilter:1;
        unsigned int read_flyoverFilter:1;
        unsigned int read_groundViewLabelFilter:1;
        unsigned int read_guideGroupFilter:1;
        unsigned int read_hoursFilter:1;
        unsigned int read_iconFilter:1;
        unsigned int read_iso3166CodeFilter:1;
        unsigned int read_labelGeometryFilter:1;
        unsigned int read_linkedServiceFilter:1;
        unsigned int read_locationEventFilter:1;
        unsigned int read_messageLinkFilter:1;
        unsigned int read_photoFilter:1;
        unsigned int read_placeCollectionFilter:1;
        unsigned int read_placeCollectionItemFilter:1;
        unsigned int read_placeInfoFilter:1;
        unsigned int read_placeQuestionnaireFilter:1;
        unsigned int read_placecardLayoutConfigurationFilter:1;
        unsigned int read_placecardUrlFilter:1;
        unsigned int read_poiClaimFilter:1;
        unsigned int read_poiEventFilter:1;
        unsigned int read_priceDescriptionFilter:1;
        unsigned int read_protoTypeContainerFilter:1;
        unsigned int read_publisherFilter:1;
        unsigned int read_quickLinkFilter:1;
        unsigned int read_rapFilter:1;
        unsigned int read_ratingFilter:1;
        unsigned int read_rawAttributeFilter:1;
        unsigned int read_relatedPlaceFilter:1;
        unsigned int read_restaurantReservationLinkFilter:1;
        unsigned int read_resultSnippetFilter:1;
        unsigned int read_reviewFilter:1;
        unsigned int read_simpleRestaurantMenuTextFilter:1;
        unsigned int read_spatialLookupFilter:1;
        unsigned int read_storefrontFacesFilter:1;
        unsigned int read_storefrontFilter:1;
        unsigned int read_storefrontPresentationFilter:1;
        unsigned int read_styleAttributesFilter:1;
        unsigned int read_templatePlaceFilter:1;
        unsigned int read_textBlockFilter:1;
        unsigned int read_tipFilter:1;
        unsigned int read_transitAttributionFilter:1;
        unsigned int read_transitIncidentFilter:1;
        unsigned int read_transitInfoFilter:1;
        unsigned int read_transitInfoSnippetFilter:1;
        unsigned int read_transitPaymentMethodInfoFilter:1;
        unsigned int read_transitScheduleFilter:1;
        unsigned int read_transitTripGeometryFilter:1;
        unsigned int read_transitTripStopFilter:1;
        unsigned int read_transitTripStopTimeFilter:1;
        unsigned int read_transitVehiclePositionFilter:1;
        unsigned int read_vendorAmenitiesFilter:1;
        unsigned int read_venueInfoFilter:1;
        unsigned int read_walletCategoryInformationFilter:1;
        unsigned int read_wifiFingerprintFilter:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 660 = 0x294
}

- (void).cxx_destruct;	// IMP=0x0000000000bf0ae5
- (unsigned long long)hash;	// IMP=0x0000000000beefcf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bedf81
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bed197
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bec353
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bec344
- (id)jsonRepresentation;	// IMP=0x0000000000bd5e30
- (id)dictionaryRepresentation;	// IMP=0x0000000000bd027b
- (id)description;	// IMP=0x0000000000bd01cc
- (id)initWithData:(id)arg1;	// IMP=0x0000000000bca82b
- (id)init;	// IMP=0x0000000000bca7cf
- (id)initAddressObjectFilterWithLibraryVersion:(id)arg1;	// IMP=0x00000000013e0ff6
- (id)initTransitTripStopTimeFilterWithTraits:(id)arg1;	// IMP=0x00000000013e0d45
- (id)initTransitScheduleFilterWithTraits:(id)arg1;	// IMP=0x00000000013e0a94
- (id)initTipUserPhotoFilterWithTraits:(id)arg1;	// IMP=0x00000000013e0859
- (id)initReviewUserPhotoFilterWithTraits:(id)arg1;	// IMP=0x00000000013e0600
- (id)initResultSnippetFilterWithTraits:(id)arg1;	// IMP=0x00000000013e046e
- (id)initRestaurantReservationLinkFilterWithTraits:(id)arg1;	// IMP=0x00000000013e03f9
- (id)initAnnotatedItemListFilterWithTraits:(id)arg1;	// IMP=0x00000000013e01be
- (id)initCaptionedPhotoFilterWithTraits:(id)arg1;	// IMP=0x00000000013dff83
- (id)initPhotoFilterWithTraits:(id)arg1;	// IMP=0x00000000013dfd48
- (id)initEntityFilterWithSpokenNames;	// IMP=0x00000000013dfcb8

@end

