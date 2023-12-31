//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, _SFPBActivityIndicatorCardSection, _SFPBAppIconCardSection, _SFPBAppLinkCardSection, _SFPBArchiveViewCardSection, _SFPBAttributionFooterCardSection, _SFPBAudioPlaybackCardSection, _SFPBButtonCardSection, _SFPBButtonListCardSection, _SFPBCollectionCardSection, _SFPBColorBarCardSection, _SFPBCombinedCardSection, _SFPBCommandRowCardSection, _SFPBCompactRowCardSection, _SFPBDescriptionCardSection, _SFPBDetailedRowCardSection, _SFPBFindMyCardSection, _SFPBFlightCardSection, _SFPBGridCardSection, _SFPBHeroCardSection, _SFPBHeroTitleCardSection, _SFPBHorizontalButtonCardSection, _SFPBHorizontalScrollCardSection, _SFPBImagesCardSection, _SFPBInfoCardSection, _SFPBKeyValueDataCardSection, _SFPBLeadingTrailingCardSection, _SFPBLinkPresentationCardSection, _SFPBListenToCardSection, _SFPBMapCardSection, _SFPBMapPlaceCardSection, _SFPBMapsDetailedRowCardSection, _SFPBMediaInfoCardSection, _SFPBMediaPlayerCardSection, _SFPBMediaRemoteControlCardSection, _SFPBMessageCardSection, _SFPBMetaInfoCardSection, _SFPBMiniCardSection, _SFPBNewsCardSection, _SFPBNowPlayingCardSection, _SFPBPersonHeaderCardSection, _SFPBProductCardSection, _SFPBResponseWrapperCardSection, _SFPBRichTitleCardSection, _SFPBRowCardSection, _SFPBScoreboardCardSection, _SFPBSectionHeaderCardSection, _SFPBSelectableGridCardSection, _SFPBSocialMediaPostCardSection, _SFPBSplitCardSection, _SFPBStockChartCardSection, _SFPBStrokeAnimationCardSection, _SFPBSuggestionCardSection, _SFPBTableHeaderRowCardSection, _SFPBTableRowCardSection, _SFPBTextColumnsCardSection, _SFPBTitleCardSection, _SFPBTrackListCardSection, _SFPBVerticalLayoutCardSection, _SFPBWatchListCardSection, _SFPBWatchNowCardSection, _SFPBWebCardSection, _SFPBWorldMapCardSection;

@protocol _SFPBCardSectionValue <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) _SFPBAppIconCardSection *appIconCardSection;
@property(retain, nonatomic) _SFPBArchiveViewCardSection *archiveViewCardSection;
@property(retain, nonatomic) _SFPBHeroTitleCardSection *heroTitleCardSection;
@property(retain, nonatomic) _SFPBLeadingTrailingCardSection *leadingTrailingCardSection;
@property(retain, nonatomic) _SFPBCommandRowCardSection *commandRowCardSection;
@property(retain, nonatomic) _SFPBButtonListCardSection *buttonListCardSection;
@property(retain, nonatomic) _SFPBStrokeAnimationCardSection *strokeAnimationCardSection;
@property(retain, nonatomic) _SFPBWatchNowCardSection *watchNowCardSection;
@property(retain, nonatomic) _SFPBListenToCardSection *listenToCardSection;
@property(retain, nonatomic) _SFPBResponseWrapperCardSection *responseWrapperCardSection;
@property(retain, nonatomic) _SFPBCombinedCardSection *combinedCardSection;
@property(retain, nonatomic) _SFPBCollectionCardSection *collectionCardSection;
@property(retain, nonatomic) _SFPBInfoCardSection *infoCardSection;
@property(retain, nonatomic) _SFPBMiniCardSection *miniCardSection;
@property(retain, nonatomic) _SFPBNewsCardSection *newsCardSection;
@property(retain, nonatomic) _SFPBHeroCardSection *heroCardSection;
@property(retain, nonatomic) _SFPBFindMyCardSection *findMyCardSection;
@property(retain, nonatomic) _SFPBLinkPresentationCardSection *linkPresentationCardSection;
@property(retain, nonatomic) _SFPBSplitCardSection *splitCardSection;
@property(retain, nonatomic) _SFPBColorBarCardSection *colorBarCardSection;
@property(retain, nonatomic) _SFPBPersonHeaderCardSection *personHeaderCardSection;
@property(retain, nonatomic) _SFPBGridCardSection *gridCardSection;
@property(retain, nonatomic) _SFPBAttributionFooterCardSection *attributionFooterCardSection;
@property(retain, nonatomic) _SFPBWorldMapCardSection *worldMapCardSection;
@property(retain, nonatomic) _SFPBCompactRowCardSection *compactRowCardSection;
@property(retain, nonatomic) _SFPBMapPlaceCardSection *mapPlaceCardSection;
@property(retain, nonatomic) _SFPBMediaRemoteControlCardSection *mediaRemoteControlCardSection;
@property(retain, nonatomic) _SFPBHorizontalScrollCardSection *horizontalScrollCardSection;
@property(retain, nonatomic) _SFPBProductCardSection *productCardSection;
@property(retain, nonatomic) _SFPBVerticalLayoutCardSection *verticalLayoutCardSection;
@property(retain, nonatomic) _SFPBHorizontalButtonCardSection *horizontalButtonCardSection;
@property(retain, nonatomic) _SFPBButtonCardSection *buttonCardSection;
@property(retain, nonatomic) _SFPBMapsDetailedRowCardSection *mapsDetailedRowCardSection;
@property(retain, nonatomic) _SFPBWatchListCardSection *watchListCardSection;
@property(retain, nonatomic) _SFPBMetaInfoCardSection *metaInfoCardSection;
@property(retain, nonatomic) _SFPBSectionHeaderCardSection *sectionHeaderCardSection;
@property(retain, nonatomic) _SFPBSelectableGridCardSection *selectableGridCardSection;
@property(retain, nonatomic) _SFPBSuggestionCardSection *suggestionCardSection;
@property(retain, nonatomic) _SFPBImagesCardSection *imagesCardSection;
@property(retain, nonatomic) _SFPBDetailedRowCardSection *detailedRowCardSection;
@property(retain, nonatomic) _SFPBMessageCardSection *messageCardSection;
@property(retain, nonatomic) _SFPBWebCardSection *webCardSection;
@property(retain, nonatomic) _SFPBActivityIndicatorCardSection *activityIndicatorCardSection;
@property(retain, nonatomic) _SFPBFlightCardSection *flightCardSection;
@property(retain, nonatomic) _SFPBAudioPlaybackCardSection *audioPlaybackCardSection;
@property(retain, nonatomic) _SFPBTrackListCardSection *trackListCardSection;
@property(retain, nonatomic) _SFPBTitleCardSection *titleCardSection;
@property(retain, nonatomic) _SFPBTextColumnsCardSection *textColumnsCardSection;
@property(retain, nonatomic) _SFPBTableRowCardSection *tableRowCardSection;
@property(retain, nonatomic) _SFPBTableHeaderRowCardSection *tableHeaderRowCardSection;
@property(retain, nonatomic) _SFPBStockChartCardSection *stockChartCardSection;
@property(retain, nonatomic) _SFPBSocialMediaPostCardSection *socialMediaPostCardSection;
@property(retain, nonatomic) _SFPBScoreboardCardSection *scoreboardCardSection;
@property(retain, nonatomic) _SFPBRowCardSection *rowCardSection;
@property(retain, nonatomic) _SFPBRichTitleCardSection *richTitleCardSection;
@property(retain, nonatomic) _SFPBNowPlayingCardSection *nowPlayingCardSection;
@property(retain, nonatomic) _SFPBMediaPlayerCardSection *mediaPlayerCardSection;
@property(retain, nonatomic) _SFPBMediaInfoCardSection *mediaInfoCardSection;
@property(retain, nonatomic) _SFPBMapCardSection *mapCardSection;
@property(retain, nonatomic) _SFPBKeyValueDataCardSection *keyValueDataCardSection;
@property(retain, nonatomic) _SFPBDescriptionCardSection *descriptionCardSection;
@property(retain, nonatomic) _SFPBAppLinkCardSection *appLinkCardSection;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

