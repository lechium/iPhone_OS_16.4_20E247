//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetWriterInputPassDescription;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputPassDescriptionResponder : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 8 = 0x8
    int _stoppedResponding;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serializationQueue;	// 24 = 0x18
    _Bool _hasRespondedAtLeastOnce;	// 32 = 0x20
    AVAssetWriterInputPassDescription *_mostRecentPassDescription;	// 40 = 0x28
    CDUnknownBlockType _callbackBlock;	// 48 = 0x30
}

- (_Bool)_hasStoppedResponding;	// IMP=0x00000000000b12ab
- (void)stopRespondingToPassDescriptions;	// IMP=0x00000000000b123f
- (void)_releaseAndClearCallbackBlock_invokeOnSerializationQueue;	// IMP=0x00000000000b121d
- (void)respondToNewPassDescription:(id)arg1;	// IMP=0x00000000000b10ab
- (void)dealloc;	// IMP=0x00000000000b1045
- (id)initWithCallbackQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b0f0a
- (id)init;	// IMP=0x00000000000b0ef4

@end
