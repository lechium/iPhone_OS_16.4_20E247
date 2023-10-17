//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDSPEnvironment, NSString;
@protocol HDSPWakeDetectorDelegate;

__attribute__((visibility("hidden")))
@interface HDSPWatchOnWristWakeDetector : NSObject
{
    _Bool _isDetecting;	// 8 = 0x8
    id <HDSPWakeDetectorDelegate> _wakeDetectorDelegate;	// 16 = 0x10
    HDSPEnvironment *_environment;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003da9a
@property(readonly, nonatomic) _Bool isDetecting; // @synthesize isDetecting=_isDetecting;
@property(readonly, nonatomic) __weak HDSPEnvironment *environment; // @synthesize environment=_environment;
@property(nonatomic) __weak id <HDSPWakeDetectorDelegate> wakeDetectorDelegate; // @synthesize wakeDetectorDelegate=_wakeDetectorDelegate;
- (void)detectedOffWristOnDate:(id)arg1;	// IMP=0x000000000003da4e
- (void)detectedOnWristOnDate:(id)arg1;	// IMP=0x000000000003d917
@property(readonly, nonatomic) unsigned long long type;
- (void)stopDetecting;	// IMP=0x000000000003d813
- (void)startDetecting;	// IMP=0x000000000003d616
- (id)onWristMonitor;	// IMP=0x000000000003d5a5
- (void)environmentDidBecomeReady:(id)arg1;	// IMP=0x000000000003d59f
- (id)initWithEnvironment:(id)arg1;	// IMP=0x000000000003d524

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
