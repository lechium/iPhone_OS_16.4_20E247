//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC11ActivityKitP33_D074D31B035C9B27F4F7807A7D21110D9Singleton : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *connection;	// 16 = 0x10
    MISSING_TYPE *serverStartupToken;	// 24 = 0x18
    MISSING_TYPE *activities;	// 32 = 0x20
    MISSING_TYPE *activityDiffPublisher;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000037ec0
- (id)init;	// IMP=0x0000000000037200
- (void)activityDidUnsubscribeForIdentifier:(id)arg1;	// IMP=0x0000000000038070
- (void)activityDidExceedReducedPushBudgetForIdentifier:(id)arg1;	// IMP=0x0000000000038020

@end
