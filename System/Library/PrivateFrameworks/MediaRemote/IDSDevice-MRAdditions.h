//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDS/IDSDevice.h>

@class MRAVOutputDevice, MRDeviceInfo;

@interface IDSDevice (MRAdditions)
@property(readonly, nonatomic) unsigned int mr_deviceSubType;
@property(readonly, nonatomic) long long mr_deviceClass;
@property(readonly, nonatomic) MRAVOutputDevice *mr_outputDevice;
@property(readonly, nonatomic) MRDeviceInfo *mr_deviceInfo;
@end
