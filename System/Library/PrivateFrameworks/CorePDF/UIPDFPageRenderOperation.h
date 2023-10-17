//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class UIPDFPageRenderJob;

__attribute__((visibility("hidden")))
@interface UIPDFPageRenderOperation : NSOperation
{
    UIPDFPageRenderJob *_job;	// 8 = 0x8
    _Bool executing;	// 16 = 0x10
    _Bool finished;	// 17 = 0x11
}

@property(retain) UIPDFPageRenderJob *job; // @synthesize job=_job;
- (_Bool)isFinished;	// IMP=0x000000000008168a
- (_Bool)isExecuting;	// IMP=0x000000000008167a
- (_Bool)isConcurrent;	// IMP=0x0000000000081672
- (void)completeOperation;	// IMP=0x00000000000815eb
- (void)main;	// IMP=0x0000000000081544
- (void)start;	// IMP=0x00000000000814a3
- (void)dealloc;	// IMP=0x0000000000081463
- (id)initWithJob:(id)arg1;	// IMP=0x000000000008140d

@end
