//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (IMKeyValueCollectionUserDefaultsStorage)
+ (id)__im_dateFromEncodedString:(id)arg1;	// IMP=0x0000000000062b94
+ (id)__im_serialization_dateFormatter;	// IMP=0x0000000000062a69
+ (id)__im_iMessageDateFromTimeStamp:(id)arg1;	// IMP=0x00000000000627ce
+ (id)__im_clampDate:(id)arg1;	// IMP=0x0000000000062777
+ (_Bool)useCourierTime;	// IMP=0x00000000000622a0
+ (id)__im_dateWithCurrentServerTime;	// IMP=0x0000000000062127
+ (id)__im_dateWithNanosecondTimeIntervalSinceReferenceDate:(long long)arg1;	// IMP=0x00000000000620ff
- (_Bool)isArchivable_im;	// IMP=0x001000000003308b
- (id)__im_dateByAddingDays:(long long)arg1;	// IMP=0x0010000000062c17
- (id)__im_encodeAsString;	// IMP=0x0010000000062b2d
- (_Bool)__im_isEqualToSeconds:(id)arg1;	// IMP=0x0010000000062991
- (long long)secondsDifferenceFromDate:(id)arg1;	// IMP=0x00100000000626cf
- (long long)minutesDifferenceFromDate:(id)arg1;	// IMP=0x0010000000062627
- (long long)hoursDifferenceFromDate:(id)arg1;	// IMP=0x001000000006257f
- (long long)differenceFromDate:(id)arg1;	// IMP=0x00100000000624d7
- (_Bool)isToday;	// IMP=0x0010000000062376
- (_Bool)__im_isApproximatelyEqualToDate:(id)arg1;	// IMP=0x00100000000622e8
- (long long)__im_nanosecondTimeIntervalSinceEpochTime;	// IMP=0x00100000000622c8
- (long long)__im_nanosecondTimeInterval;	// IMP=0x00100000000622a8
@end
