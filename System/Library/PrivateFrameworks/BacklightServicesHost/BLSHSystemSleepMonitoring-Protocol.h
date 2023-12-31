//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServicesHost/NSObject-Protocol.h>

@protocol SWSystemSleepObserver;

@protocol BLSHSystemSleepMonitoring <NSObject>
@property(readonly, getter=isSleepImminent) _Bool sleepImminent;
@property(readonly, getter=hasSleepBeenRequested) _Bool sleepRequested;
- (void)removeObserver:(id <SWSystemSleepObserver>)arg1;
- (void)addObserver:(id <SWSystemSleepObserver>)arg1;
@end

