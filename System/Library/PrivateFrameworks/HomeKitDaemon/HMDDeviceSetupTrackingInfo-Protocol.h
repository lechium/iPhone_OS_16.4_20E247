//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSUUID;

@protocol HMDDeviceSetupTrackingInfo
@property(readonly, copy) NSUUID *identifier;
@property(readonly) long long role;
@property(readonly, copy) NSError *sessionError;
@property(readonly) unsigned long long endTime;
@property(readonly) unsigned long long startTime;
@property(readonly, copy) NSUUID *accessoryUUID;
@end

