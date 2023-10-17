//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

__attribute__((visibility("hidden")))
@interface VSViewServiceRequestCenter : NSObject
{
    NSOperationQueue *_requestQueue;	// 8 = 0x8
    NSOperationQueue *_completionQueue;	// 16 = 0x10
}

+ (id)sharedViewServiceRequestCenter;	// IMP=0x006000000005fdb2
- (void).cxx_destruct;	// IMP=0x0000000000060311
@property(retain, nonatomic) NSOperationQueue *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain, nonatomic) NSOperationQueue *requestQueue; // @synthesize requestQueue=_requestQueue;
- (id)enqueueRequest:(id)arg1 withAccountManagerDelegate:(id)arg2 operationDelegate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000005ff62
- (id)enqueueCompletionHandlerBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000005fec7
- (id)init;	// IMP=0x000000000005fe07

@end
