//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;
@protocol SAMonitoringSessionManagerClientProtocol;

@protocol SAMonitoringSessionManagerServiceProtocol
- (unsigned long long)scenarioClassForDeviceUUID:(NSUUID *)arg1;
- (long long)earlyVehicularTriggerForDeviceUUID:(NSUUID *)arg1;
- (unsigned long long)stateForDeviceUUID:(NSUUID *)arg1;
- (void)removeClient:(id <SAMonitoringSessionManagerClientProtocol>)arg1;
- (void)addClient:(id <SAMonitoringSessionManagerClientProtocol>)arg1;
@end

