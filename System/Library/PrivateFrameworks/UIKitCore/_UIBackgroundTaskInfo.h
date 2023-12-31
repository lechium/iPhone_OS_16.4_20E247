//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, NSString;

__attribute__((visibility("hidden")))
@interface _UIBackgroundTaskInfo : NSObject
{
    unsigned long long _taskId;	// 8 = 0x8
    CDUnknownBlockType _expireHandler;	// 16 = 0x10
    BKSProcessAssertion *_processAssertion;	// 24 = 0x18
    NSString *_taskName;	// 32 = 0x20
    long long _creationTime;	// 40 = 0x28
    _Bool _alreadyWarnedAboutExpiration;	// 48 = 0x30
}

+ (id)backgroundTaskAssertionQueue;	// IMP=0x0060000000e4d802
- (void).cxx_destruct;	// IMP=0x0000000000e4dc60
- (id)description;	// IMP=0x0000000000e4dbaa
- (void)invalidate;	// IMP=0x0000000000e4db89
- (void)fireExpirationHandler;	// IMP=0x0000000000e4d997
- (void)dealloc;	// IMP=0x0000000000e4d959
- (id)initWithProcessAssertion:(id)arg1 taskName:(id)arg2 expirationHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000e4d859

@end

