//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDFTimerPrivate;

__attribute__((visibility("hidden")))
@interface PDFTimer : NSObject
{
    PDFTimerPrivate *_private;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000a4d5e
- (void)_execute;	// IMP=0x00000000000a4c28
- (void)cancel;	// IMP=0x00000000000a4bb2
- (_Bool)isUpdateQueued;	// IMP=0x00000000000a4ba0
- (void)update;	// IMP=0x00000000000a4ab2
- (void)dealloc;	// IMP=0x00000000000a4a6c
- (id)initWithThrottleDelay:(double)arg1 forSelector:(SEL)arg2 forTarget:(id)arg3;	// IMP=0x00000000000a492a
- (id)initWithSelector:(SEL)arg1 forTarget:(id)arg2;	// IMP=0x00000000000a47f5

@end

