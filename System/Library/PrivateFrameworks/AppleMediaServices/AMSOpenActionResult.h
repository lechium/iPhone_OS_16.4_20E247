//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSURLAction;

__attribute__((visibility("hidden")))
@interface AMSOpenActionResult : NSObject
{
    _Bool _engagementPresented;	// 8 = 0x8
    _Bool _interruptionResult;	// 9 = 0x9
    AMSURLAction *_action;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000022bd9d
@property(nonatomic) _Bool interruptionResult; // @synthesize interruptionResult=_interruptionResult;
@property(nonatomic) _Bool engagementPresented; // @synthesize engagementPresented=_engagementPresented;
@property(retain, nonatomic) AMSURLAction *action; // @synthesize action=_action;

@end

