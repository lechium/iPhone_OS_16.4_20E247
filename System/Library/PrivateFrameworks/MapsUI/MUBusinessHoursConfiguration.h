//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSTimeZone;

__attribute__((visibility("hidden")))
@interface MUBusinessHoursConfiguration : NSObject
{
    _Bool _isServiceHours;	// 8 = 0x8
    NSTimeZone *_placeTimeZone;	// 16 = 0x10
    NSArray *_businessHours;	// 24 = 0x18
    NSString *_hoursName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000381d8
@property(nonatomic) _Bool isServiceHours; // @synthesize isServiceHours=_isServiceHours;
@property(copy, nonatomic) NSString *hoursName; // @synthesize hoursName=_hoursName;
@property(readonly, nonatomic) NSArray *businessHours; // @synthesize businessHours=_businessHours;
@property(readonly, nonatomic) NSTimeZone *placeTimeZone; // @synthesize placeTimeZone=_placeTimeZone;
- (id)initWithBusinessHours:(id)arg1 timeZone:(id)arg2;	// IMP=0x0000000000038100

@end

