//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSDate, NSDateComponentsFormatter, NSDateFormatter, NSTimeZone;

@interface TransitSchedulesDepartureBaseViewCell : UICollectionViewCell
{
    unsigned long long _timeDisplayStyle;	// 8 = 0x8
    NSTimeZone *_timeZone;	// 16 = 0x10
    NSDate *_referenceDate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000005b3392
@property(retain, nonatomic) NSDate *referenceDate; // @synthesize referenceDate=_referenceDate;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(nonatomic) unsigned long long timeDisplayStyle; // @synthesize timeDisplayStyle=_timeDisplayStyle;
- (long long)effectiveLiveStatusForDeparture:(id)arg1;	// IMP=0x00100000005b32e7
- (id)timeStringForDeparture:(id)arg1;	// IMP=0x00100000005b301c
- (id)emphasizedLowFrequencyDepartureDateForDeparture:(id)arg1;	// IMP=0x00100000005b2fbc
@property(readonly, nonatomic) NSDateComponentsFormatter *timeFormatter;
@property(readonly, nonatomic) NSDateFormatter *dateFormatter;

@end
