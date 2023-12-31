//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, VUITVSeasonManagedObject, VUITVSeriesManagedObject;

__attribute__((visibility("hidden")))
@interface VUITVEpisodeManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x0080000000242bcc

// Remaining properties
@property(copy, nonatomic) NSNumber *episodeNumberInSeason; // @dynamic episodeNumberInSeason;
@property(copy, nonatomic) NSNumber *episodeNumberInSeries; // @dynamic episodeNumberInSeries;
@property(copy, nonatomic) NSNumber *fractionalEpisodeNumberInSeason; // @dynamic fractionalEpisodeNumberInSeason;
@property(retain, nonatomic) VUITVSeasonManagedObject *season; // @dynamic season;
@property(retain, nonatomic) VUITVSeriesManagedObject *series; // @dynamic series;

@end

