//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIUpdateHIDInput : NSObject
{
    struct _UIUpdateInputInternal _input;	// 8 = 0x8
    NSMutableArray *_events;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000f9bdea
- (struct __IOHIDEvent *)stopEventForModelTime:(unsigned long long)arg1 alignment:(int)arg2;	// IMP=0x0000000000f9bde2
- (void)removeEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000000f9bd8d
- (void)addEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000000f9bd4c
- (id)init;	// IMP=0x0000000000f9bcae

@end

