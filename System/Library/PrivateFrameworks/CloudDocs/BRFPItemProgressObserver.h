//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPItemID, NSNumber, NSProgress;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRFPItemProgressObserver : NSObject
{
    _Bool _started;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSProgress *_downloadProgress;	// 24 = 0x18
    NSProgress *_uploadProgress;	// 32 = 0x20
    CDUnknownBlockType _progressHandler;	// 40 = 0x28
    FPItemID *_fpItemID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000088bc4
@property(readonly, nonatomic) FPItemID *fpItemID; // @synthesize fpItemID=_fpItemID;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000088b3b
- (void)start;	// IMP=0x0000000000088a7f
- (void)stop;	// IMP=0x00000000000889a9
- (void)updateWithFPItem:(id)arg1;	// IMP=0x00000000000887e7
- (void)_startObservingProgress:(id)arg1;	// IMP=0x00000000000887bc
- (id)description;	// IMP=0x000000000008871e
- (id)initWithFPItem:(id)arg1 queue:(id)arg2;	// IMP=0x000000000008861a
@property(readonly, nonatomic) NSNumber *downloadPercentCompleted;
@property(readonly, nonatomic) NSNumber *uploadPercentCompleted;

@end

