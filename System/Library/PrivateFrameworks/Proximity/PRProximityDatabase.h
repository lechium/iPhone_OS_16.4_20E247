//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PRProximityDatabase : NSObject
{
}

+ (BOOL)getDeviceBtRxOffsetFromModel:(long long)arg1;	// IMP=0x008000000001af42
+ (BOOL)getDeviceBtTxPowerFromModel:(long long)arg1;	// IMP=0x008000000001af37
+ (long long)getScannerDeviceModel;	// IMP=0x008000000001aee1
+ (long long)getPRDeviceModelFromModelId:(id)arg1;	// IMP=0x008000000001ac7d
+ (_Bool)getProximityDeviceParameters:(id *)arg1 forDeviceModel:(id)arg2 withError:(id *)arg3;	// IMP=0x008000000001a79e
+ (id)getDeviceData;	// IMP=0x0080000000013fc7
- (id)init;	// IMP=0x0000000000013f89

@end

