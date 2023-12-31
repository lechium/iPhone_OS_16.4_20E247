//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MTSDeviceCredential, NSArray, NSUUID;

@protocol HMAccessorySetupCoordinatorDelegate <NSObject>
- (void)didReceiveThreadScanResults:(NSArray *)arg1 forStagingRequestUUID:(NSUUID *)arg2;
- (void)didReceiveWiFiScanResults:(NSArray *)arg1 forStagingRequestUUID:(NSUUID *)arg2;
- (void)didReceiveDeviceCredential:(MTSDeviceCredential *)arg1 forStagingRequestUUID:(NSUUID *)arg2;
@end

