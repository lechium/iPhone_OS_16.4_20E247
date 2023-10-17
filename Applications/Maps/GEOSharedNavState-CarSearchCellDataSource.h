//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOSharedNavState.h>

@class NSString;

@interface GEOSharedNavState (CarSearchCellDataSource)
- (void)updateModel:(id)arg1;	// IMP=0x00100000003ae62b
- (id)_transportTypeStringForAnalytics;	// IMP=0x00100000007807de
- (id)carPlayListCellSubtitle;	// IMP=0x001000000087615d
- (id)carPlayListCellTitle;	// IMP=0x001000000087614b
- (id)listCellSubtitle;	// IMP=0x0010000000876139
- (id)listCellTitle;	// IMP=0x0010000000876127
- (id)_lastUpdatedStringWithElapsedTime:(id)arg1;	// IMP=0x0010000000876068
- (id)_arrivingAroundStringWithETATimeString:(id)arg1;	// IMP=0x0010000000875f94
- (id)_transportTypeString;	// IMP=0x0010000000875da4
- (id)homeCellSubtitle;	// IMP=0x00100000008757ca
- (id)homeCellTitle;	// IMP=0x001000000087535b
- (id)alertMessageForClosedTrip;	// IMP=0x001000000087523f
- (id)alertMessageForTransportOrProtocolError;	// IMP=0x0010000000874d9f
- (id)alertMessageForChinaError;	// IMP=0x0010000000874b47
- (id)alertTitleForDisallowedDetails;	// IMP=0x0010000000874adf
- (_Bool)_disallowDetailsForAnyReason;	// IMP=0x0010000000874a92
- (_Bool)disallowDetailsForProtocolVersion;	// IMP=0x0010000000874a43
- (_Bool)disallowDetailsForTransportType;	// IMP=0x00100000008749ee
- (_Bool)disallowDetailsForChina;	// IMP=0x00100000008749b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
