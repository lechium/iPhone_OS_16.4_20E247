//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MUDayRowViewModel : NSObject
{
    NSString *_labelHeaderString;	// 8 = 0x8
    NSString *_dayString;	// 16 = 0x10
    NSArray *_hourStrings;	// 24 = 0x18
    NSArray *_AMPMStrings;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000d56a0
@property(retain, nonatomic) NSArray *AMPMStrings; // @synthesize AMPMStrings=_AMPMStrings;
@property(retain, nonatomic) NSArray *hourStrings; // @synthesize hourStrings=_hourStrings;
@property(retain, nonatomic) NSString *dayString; // @synthesize dayString=_dayString;
@property(retain, nonatomic) NSString *labelHeaderString; // @synthesize labelHeaderString=_labelHeaderString;
- (id)buildDefaultPlacecardHoursString;	// IMP=0x00000000000d55d2

@end

