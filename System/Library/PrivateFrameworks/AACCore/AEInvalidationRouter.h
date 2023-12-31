//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;
@protocol AEInvalidationRouterDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AEInvalidationRouter : NSObject
{
    _Bool _processedInvalidation;	// 8 = 0x8
    _Bool _forwardError;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <AEInvalidationRouterDelegate> _delegate;	// 24 = 0x18
    long long _mode;	// 32 = 0x20
    NSError *_storedError;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000008c70
@property(readonly, nonatomic) CDUnknownBlockType invalidationHandler;
- (void)fetchCapturedErrorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008942
- (void)setRouterDelegate:(id)arg1;	// IMP=0x00000000000087d0
- (void)setRouterMode:(long long)arg1;	// IMP=0x0000000000008641
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000000085ce

@end

