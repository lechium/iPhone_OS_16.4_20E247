//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CARSessionRequestHandling;

__attribute__((visibility("hidden")))
@interface CARSessionRequestHandlerProxy : NSObject
{
    id <CARSessionRequestHandling> _requestHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000d73f
@property(nonatomic) __weak id <CARSessionRequestHandling> requestHandler; // @synthesize requestHandler=_requestHandler;
- (void)service_cancelRequestsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d60e
- (void)service_prepareForRemovingWiFiUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d4c2
- (void)service_startAdvertisingCarPlayControlForUSBWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d3b8
- (void)service_startAdvertisingCarPlayControlForWiFiUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d259
- (void)service_stoppedSessionWithHostIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d0fa
- (void)service_startSessionWithHost:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000cfae

@end

