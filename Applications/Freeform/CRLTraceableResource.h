//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray, NSString;
@protocol CRLLogContext, OS_dispatch_queue;

@interface CRLTraceableResource : NSObject
{
    NSMutableArray *_tokens;	// 8 = 0x8
    NSMapTable *_timeoutBlocksMap;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    _Bool _printTimeoutAsError;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    NSObject<CRLLogContext> *_logContext;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000004a702a
@property(nonatomic) _Bool printTimeoutAsError; // @synthesize printTimeoutAsError=_printTimeoutAsError;
@property(retain, nonatomic) NSObject<CRLLogContext> *logContext; // @synthesize logContext=_logContext;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x00100000004a6f2a
- (id)p_tokenSerializationDescriptionFromQueue;	// IMP=0x00100000004a6ad8
- (void)p_logDebugTokenSerializationDescriptionFromQueue;	// IMP=0x00100000004a6033
- (void)p_logErrorTokenSerializationDescriptionFromQueueWithPrefix:(id)arg1;	// IMP=0x00100000004a5414
- (void)logSerializationAsErrorWithPrefix:(id)arg1;	// IMP=0x00100000004a536a
- (void)logSerializationAsError;	// IMP=0x00100000004a5351
- (id)tokenSerializationDescription;	// IMP=0x00100000004a5235
- (void)scheduleRelinquishTimeoutForToken:(id)arg1 timeout:(unsigned long long)arg2 isForTemporaryRelinquish:(_Bool)arg3;	// IMP=0x00100000004a4ba5
- (void)removeToken:(id)arg1 isForTemporaryRelinquish:(_Bool)arg2;	// IMP=0x00100000004a48cb
- (void)addToken:(id)arg1 isForTemporaryRelinquish:(_Bool)arg2;	// IMP=0x00100000004a4840
- (void)temporarilyRelinquishForToken:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000004a3f0e
- (void)didRelinquishResourceWithToken:(id)arg1;	// IMP=0x00100000004a38a7
- (void)didAcquireResourceWithToken:(id)arg1;	// IMP=0x00100000004a35fc
- (id)willAcquireResourceWithIntent:(id)arg1 timeout:(unsigned long long)arg2 parent:(id)arg3;	// IMP=0x00100000004a35e7
- (id)willAcquireResourceWithIntent:(id)arg1 timeout:(unsigned long long)arg2 parent:(id)arg3 context:(id)arg4;	// IMP=0x00100000004a3460
- (id)initWithName:(id)arg1 logContext:(id)arg2;	// IMP=0x00100000004a32a3
- (id)init;	// IMP=0x00100000004a2fbb

@end
