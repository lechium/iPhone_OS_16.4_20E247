//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HDSPEventRecordMessage.h"

@class NSDate;

__attribute__((visibility("hidden")))
@interface HDSPSleepAlarmDismissedIDSMessage : HDSPEventRecordMessage
{
}

- (id)dateDescription;	// IMP=0x0000000000050cd6
@property(readonly, nonatomic) NSDate *dismissedDate;
- (unsigned long long)destinations;	// IMP=0x0000000000050cb9
- (id)initWithDismissedDate:(id)arg1;	// IMP=0x0000000000050ca7

@end
