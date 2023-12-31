//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TCMessageContext, TCProgressContext;
@protocol OS_dispatch_group, OS_dispatch_queue, TCCancelDelegate;

__attribute__((visibility("hidden")))
@interface TCBackgroundThreadManager : NSObject
{
    id <TCCancelDelegate> mCancelDelegate;	// 8 = 0x8
    _Bool mIsWaiting;	// 16 = 0x10
    unsigned long long mBlockCount;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *mQueue;	// 32 = 0x20
    NSObject<OS_dispatch_group> *mGroup;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *mProgressReportingQueue;	// 48 = 0x30
    TCMessageContext *mMessageContext;	// 56 = 0x38
    TCProgressContext *mProgressContext;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000002e56a3
@property(retain) TCProgressContext *progressContext; // @synthesize progressContext=mProgressContext;
@property(retain) TCMessageContext *messageContext; // @synthesize messageContext=mMessageContext;
- (void)waitUntilComplete;	// IMP=0x00000000002e55e9
- (void)addASyncBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002e5408
- (void)dealloc;	// IMP=0x00000000002e5392
- (id)initWithCancelDelegate:(id)arg1;	// IMP=0x00000000002e51c4
@property(readonly) _Bool isCancelled;

@end

