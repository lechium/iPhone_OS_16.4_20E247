//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink;

__attribute__((visibility("hidden")))
@interface _UIActiveTimer : NSObject
{
    CADisplayLink *_displayLink;	// 8 = 0x8
    CDUnknownBlockType _updateHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000627d6a
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
- (void)invalidate;	// IMP=0x0000000000627d12
- (void)_tick:(id)arg1;	// IMP=0x0000000000627cff
- (id)initWithDuration:(double)arg1 updateHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000627a0f

@end

