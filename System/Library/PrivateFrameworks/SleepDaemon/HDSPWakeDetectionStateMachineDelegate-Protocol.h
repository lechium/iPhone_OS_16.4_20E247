//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SleepDaemon/HKSPPersistentStateMachineDelegate-Protocol.h>

@protocol HDSPWakeDetectionStateMachineDelegate <HKSPPersistentStateMachineDelegate>
- (void)postWakeDetectionNotification:(unsigned long long)arg1;
- (void)stopWakeDetection;
- (void)startWakeDetection:(unsigned long long)arg1;
@end
