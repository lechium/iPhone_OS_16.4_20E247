//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServicesHost/NSObject-Protocol.h>

@class BLSBacklightChangeRequest, NSError, NSNumber;

@protocol BLSXPCBacklightProxyHostInterface <NSObject>
- (oneway void)endObservation;
- (oneway void)beginObservation;
- (NSError *)performChangeRequest:(BLSBacklightChangeRequest *)arg1;
- (_Bool)isAlwaysOnEnabled;
- (_Bool)isTransitioning;
- (NSNumber *)getFlipbookState;
- (NSNumber *)getBacklightState;
@end
