//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_GCDefaultLogicalDevice.h"

@protocol _GCPhysicalDevice;

__attribute__((visibility("hidden")))
@interface _GCFusedLogicalDevice : _GCDefaultLogicalDevice
{
    id <_GCPhysicalDevice> _secondaryDevice;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000006770c
@property(readonly, nonatomic) id <_GCPhysicalDevice> secondaryDevice; // @synthesize secondaryDevice=_secondaryDevice;
- (id)_makeControllerGamepadEventSource;	// IMP=0x0000000000067240
- (id)underlyingDevices;	// IMP=0x00000000000671b6
- (id)init;	// IMP=0x000000000006718b
- (id)initWithPrimaryPhysicalDevice:(id)arg1 secondaryPhysicalDevice:(id)arg2 configuration:(id)arg3 manager:(id)arg4;	// IMP=0x0000000000067111

@end
