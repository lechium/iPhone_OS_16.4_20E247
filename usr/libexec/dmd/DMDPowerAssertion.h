//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UMUserSwitchBlockingTask;

@interface DMDPowerAssertion : NSObject
{
    _Bool _isParked;	// 8 = 0x8
    NSString *_operation;	// 16 = 0x10
    UMUserSwitchBlockingTask *_blockingTask;	// 24 = 0x18
}

+ (id)assertionForOperation:(id)arg1;	// IMP=0x0040000000075c48
- (void).cxx_destruct;	// IMP=0x00200000000763f2
@property(retain, nonatomic) UMUserSwitchBlockingTask *blockingTask; // @synthesize blockingTask=_blockingTask;
@property(retain, nonatomic) NSString *operation; // @synthesize operation=_operation;
@property(nonatomic) _Bool isParked; // @synthesize isParked=_isParked;
- (void)_release;	// IMP=0x001000000007628b
- (void)_retain;	// IMP=0x0010000000076103
- (void)unpark;	// IMP=0x0010000000076010
- (void)park;	// IMP=0x0010000000075f1a
- (void)stayAliveThroughHereAtLeast;	// IMP=0x0010000000075f14
- (void)dealloc;	// IMP=0x0010000000075e71
- (id)initForOperation:(id)arg1;	// IMP=0x0010000000075d79

@end
