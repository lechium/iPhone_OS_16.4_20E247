//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface Synchronize : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

+ (void)async:(CDUnknownBlockType)arg1;	// IMP=0x002000000000638e
+ (void)sync:(CDUnknownBlockType)arg1;	// IMP=0x001000000000620a
+ (id)queue;	// IMP=0x00100000000061b3
- (void).cxx_destruct;	// IMP=0x002000000000650e
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)async:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006444
- (void)sync:(CDUnknownBlockType)arg1;	// IMP=0x00100000000062d8
- (id)initWithQueueName:(id)arg1;	// IMP=0x001000000000612e

@end

