//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GCHIDDeviceSnapshot;

@protocol _GCGenericDeviceDBServiceXPCInterface
- (void)preparedModelForDevice:(GCHIDDeviceSnapshot *)arg1 reply:(void (^)(GCGenericDeviceModel *, NSError *))arg2;
- (void)hasModelForDevice:(GCHIDDeviceSnapshot *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
@end

