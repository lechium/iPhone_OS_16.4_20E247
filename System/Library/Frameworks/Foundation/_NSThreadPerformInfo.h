//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSCondition;

__attribute__((visibility("hidden")))
@interface _NSThreadPerformInfo : NSObject
{
    id _target;	// 8 = 0x8
    SEL _selector;	// 16 = 0x10
    id _argument;	// 24 = 0x18
    NSArray *_modes;	// 32 = 0x20
    NSCondition *_waiter;	// 40 = 0x28
    int _state;	// 48 = 0x30
}

- (void)dealloc;	// IMP=0x0000000000507976
- (int)wait;	// IMP=0x0000000000507913
- (void)signal:(int)arg1;	// IMP=0x00000000005078c2

@end
