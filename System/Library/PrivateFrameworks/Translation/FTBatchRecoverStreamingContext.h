//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OspreyClientStreamingContext;

__attribute__((visibility("hidden")))
@interface FTBatchRecoverStreamingContext : NSObject
{
    id <OspreyClientStreamingContext> _grpcContext;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001961db
- (void)closeStream;	// IMP=0x00000000001961c5
- (void)sendBatchRecoverStreamingRequest:(id)arg1;	// IMP=0x0000000000196161
- (id)initWithGRPCStreamingCallContext:(id)arg1;	// IMP=0x00000000001960cf

@end
