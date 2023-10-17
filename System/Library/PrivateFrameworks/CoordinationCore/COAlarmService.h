//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class COClientObserverSet, NSString;

__attribute__((visibility("hidden")))
@interface COAlarmService
{
    COClientObserverSet *_observers;	// 8 = 0x8
}

+ (_Bool)_isAllowedClient:(id)arg1;	// IMP=0x00100000000491dc
+ (id)serviceWithDelegate:(id)arg1;	// IMP=0x00100000000490de
- (void).cxx_destruct;	// IMP=0x000000000004cb6e
@property(readonly, nonatomic) COClientObserverSet *observers; // @synthesize observers=_observers;
- (void)_didResetAlarmAddOn:(id)arg1;	// IMP=0x000000000004cb34
- (void)didChangeCompositionForAlarmAddOn:(id)arg1;	// IMP=0x000000000004ca52
- (void)didResetAlarmAddOn:(id)arg1;	// IMP=0x000000000004c984
- (void)alarmAddOn:(id)arg1 didChangeFiringAlarms:(id)arg2;	// IMP=0x000000000004c877
- (void)alarmAddOn:(id)arg1 didDismissAlarms:(id)arg2;	// IMP=0x000000000004c76a
- (void)alarmAddOn:(id)arg1 didFireAlarms:(id)arg2;	// IMP=0x000000000004c65d
- (void)alarmAddOn:(id)arg1 didChangeAlarms:(id)arg2;	// IMP=0x000000000004c553
- (void)alarmAddOn:(id)arg1 didUpdateAlarms:(id)arg2;	// IMP=0x000000000004c449
- (void)alarmAddOn:(id)arg1 didRemoveAlarms:(id)arg2;	// IMP=0x000000000004c33f
- (void)alarmAddOn:(id)arg1 didAddAlarms:(id)arg2;	// IMP=0x000000000004c235
- (void)canDispatchForAccessoryUniqueIdentifier:(id)arg1 categoryType:(id)arg2 asInstance:(id)arg3 cluster:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000004bf4c
- (void)removeObserverForNotificationName:(id)arg1 cluster:(id)arg2 withCallback:(CDUnknownBlockType)arg3;	// IMP=0x000000000004bcb1
- (void)addObserverForNotificationName:(id)arg1 constraints:(id)arg2 asInstance:(id)arg3 cluster:(id)arg4 withCallback:(CDUnknownBlockType)arg5;	// IMP=0x000000000004ba39
- (void)dismissAlarmWithIdentifier:(id)arg1 cluster:(id)arg2 withCallback:(CDUnknownBlockType)arg3;	// IMP=0x000000000004b78c
- (void)snoozeAlarmWithIdentifier:(id)arg1 cluster:(id)arg2 withCallback:(CDUnknownBlockType)arg3;	// IMP=0x000000000004b4df
- (void)removeAlarm:(id)arg1 forAccessoryUniqueIdentifier:(id)arg2 categoryType:(id)arg3 asInstance:(id)arg4 cluster:(id)arg5 withCallback:(CDUnknownBlockType)arg6;	// IMP=0x000000000004b154
- (void)updateAlarm:(id)arg1 forAccessoryUniqueIdentifier:(id)arg2 categoryType:(id)arg3 asInstance:(id)arg4 cluster:(id)arg5 withCallback:(CDUnknownBlockType)arg6;	// IMP=0x000000000004adc9
- (void)addAlarm:(id)arg1 forAccessoryUniqueIdentifier:(id)arg2 categoryType:(id)arg3 asInstance:(id)arg4 cluster:(id)arg5 withCallback:(CDUnknownBlockType)arg6;	// IMP=0x000000000004aa3e
- (void)alarmsForAccessories:(id)arg1 cluster:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x000000000004a749
- (void)alarmsforAccessoryUniqueIdentifier:(id)arg1 categoryType:(id)arg2 asInstance:(id)arg3 cluster:(id)arg4 withCallback:(CDUnknownBlockType)arg5;	// IMP=0x000000000004a38d
- (void)_postNotificationName:(id)arg1 forAlarms:(id)arg2 toAddOn:(id)arg3 requiresUserInfo:(_Bool)arg4;	// IMP=0x0000000000049b49
- (_Bool)_applicableToCluster:(id)arg1;	// IMP=0x0000000000049af8
- (_Bool)_canRequestCreationOfCluster:(id)arg1;	// IMP=0x0000000000049a07
- (void)_addOnRemoved:(id)arg1;	// IMP=0x00000000000499a1
- (void)_addOnAdded:(id)arg1;	// IMP=0x000000000004991b
- (void)_clientLost:(id)arg1;	// IMP=0x00000000000496ba
- (void)_configureServiceInterfacesOnConnection:(id)arg1;	// IMP=0x0000000000049245
- (id)initWithListenerProvider:(id)arg1 addOnProvider:(id)arg2 delegate:(id)arg3;	// IMP=0x000000000004916f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
