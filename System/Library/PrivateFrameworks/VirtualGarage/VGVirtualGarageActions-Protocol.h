//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VGVehicle;

@protocol VGVirtualGarageActions
- (void)virtualGarageGetLatestStateOfVehicleWithIdentifier:(NSString *)arg1 syncAcrossDevices:(_Bool)arg2 withReply:(void (^)(VGVehicle *, NSError *))arg3;
- (void)virtualGarageGetListOfUnpairedVehiclesWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)virtualGarageGetGarageWithReply:(void (^)(VGVirtualGarage *, NSError *))arg1;
- (void)virtualGarageForceFetchAllVehicles;
- (void)virtualGarageSetAssumesFullCharge:(_Bool)arg1;
- (void)virtualGarageEndContinuousUpdates;
- (void)virtualGarageStartContinuousUpdatesIfNeeded;
- (void)virtualGarageOnboardVehicle:(VGVehicle *)arg1;
- (void)virtualGarageSelectVehicle:(VGVehicle *)arg1;
- (void)virtualGarageSaveVehicle:(VGVehicle *)arg1;
- (void)virtualGarageRemoveVehicle:(VGVehicle *)arg1;
- (void)virtualGarageAddVehicle:(VGVehicle *)arg1;
@end

