//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MUAMSResultCache;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MUAMSResultProvider : NSObject
{
    MUAMSResultCache *_amsResultCache;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000fbe24
- (void)_finishWithResults:(id)arg1 error:(id)arg2 onCallbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000fbd2e
- (void)fetchResultsForBundleIds:(id)arg1 options:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000fb2f1
- (void)fetchResultsForAdamIds:(id)arg1 options:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000fa834
- (id)initWithCache:(id)arg1;	// IMP=0x00000000000fa7a2

@end

