//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC4Maps32AirQualityConditionsDataProvider : NSObject
{
    MISSING_TYPE *observers;	// 8 = 0x8
    MISSING_TYPE *airQualityConditions;	// 16 = 0x10
    MISSING_TYPE *updatingTimer;	// 24 = 0x18
    MISSING_TYPE *lastSavedLocation;	// 32 = 0x20
    MISSING_TYPE *weatherService;	// 40 = 0x28
    MISSING_TYPE *enabled;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00400000000070c0
- (id)init;	// IMP=0x0010000000009030
- (void)removeObserver:(id)arg1;	// IMP=0x00100000000073b0
- (void)addObserver:(id)arg1;	// IMP=0x0010000000007390
@property(nonatomic) _Bool enabled; // @synthesize enabled;
- (void)dealloc;	// IMP=0x00100000000070a0

@end

