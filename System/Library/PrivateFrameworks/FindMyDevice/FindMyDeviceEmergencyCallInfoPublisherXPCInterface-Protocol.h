//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FindMyDevice/NSObject-Protocol.h>

@class NSDictionary;

@protocol FindMyDeviceEmergencyCallInfoPublisherXPCInterface <NSObject>
- (oneway void)publishInfo:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
@end
