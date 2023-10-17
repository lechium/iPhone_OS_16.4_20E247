//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLGpsAssistantAdapter
{
}

+ (id)getSilo;	// IMP=0x0020000000a601f6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000a601dd
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000a60180
- (void)setTunnelEndPointPositionAssistance:(struct TunnelEndPositionAssistance)arg1;	// IMP=0x0020000000a60b1f
- (void)setTunnelBridgeAssistance:(struct TunnelBridgeAssistance)arg1;	// IMP=0x0010000000a60a87
- (void)setMapMatchedPositionAssistance:(struct MapMatchedPositionAssistance)arg1;	// IMP=0x0010000000a609ef
- (void)setDirectionOfTravelAssistance:(struct DirectionOfTravelAssistance)arg1;	// IMP=0x0010000000a60937
- (void)setVehicleGyroAssistance:(double)arg1 vehicleGyro:(CDStruct_15521927)arg2;	// IMP=0x0010000000a606bb
- (void)setVehicleSpeedAssistance:(double)arg1 vehicleSpeed:(CDStruct_5e97c62c)arg2;	// IMP=0x0010000000a6040a
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000a603e2
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000a603b5
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000a6038d
- (void *)adaptee;	// IMP=0x0010000000a6035a
- (void)endService;	// IMP=0x0010000000a6033f
- (void)beginService;	// IMP=0x0010000000a6028f
- (id)init;	// IMP=0x0010000000a60252

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
