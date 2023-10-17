//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString, XCDeviceEvent, XCSynthesizedEventRecord;

@protocol XCTouchGesturePerforming <NSObject>
+ (_Bool)validEventRecord:(XCSynthesizedEventRecord *)arg1 error:(id *)arg2;
@property(readonly) unsigned long long currentKeyboardModifierFlags;
@property(readonly, nonatomic) Class eventPlayer;
- (void)typeString:(NSString *)arg1 keysPerSecond:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)performDeviceEvent:(XCDeviceEvent *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)synthesizeEvent:(XCSynthesizedEventRecord *)arg1 implicitConfirmationInterval:(double)arg2 completion:(void (^)(NSError *))arg3;
- (void)synthesizeEvent:(XCSynthesizedEventRecord *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end
