//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol STDeviceCapabilitiesServiceDelegate;

@interface STConcreteDeviceCapabilitiesService : NSObject
{
    id <STDeviceCapabilitiesServiceDelegate> delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000063ae2
@property __weak id <STDeviceCapabilitiesServiceDelegate> delegate; // @synthesize delegate;
- (void)isCapabilityEnabledForUser:(id)arg1 capability:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000063a26

@end
