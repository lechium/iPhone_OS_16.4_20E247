//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSUBacktrace : NSObject
{
    void **_callstack;	// 8 = 0x8
    int _frames;	// 16 = 0x10
    int _initAdjustment;	// 20 = 0x14
}

+ (id)callee;	// IMP=0x006000000029d734
+ (id)caller;	// IMP=0x006000000029d704
+ (id)new;	// IMP=0x006000000029d6e5
+ (id)backtrace;	// IMP=0x006000000029d6be
- (unsigned long long)hash;	// IMP=0x000000000029d922
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000029d8af
- (id)callee;	// IMP=0x000000000029d89b
- (id)caller;	// IMP=0x000000000029d884
- (id)callerAtIndex:(long long)arg1;	// IMP=0x000000000029d801
- (id)backtraceString;	// IMP=0x000000000029d764
- (void)dealloc;	// IMP=0x000000000029d684
- (id)init;	// IMP=0x000000000029d66d
- (id)initWithAdjustment:(int)arg1;	// IMP=0x000000000029d5ac

@end
