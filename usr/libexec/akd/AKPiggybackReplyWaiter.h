//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKCircleRequestPayload, NSCondition;

@interface AKPiggybackReplyWaiter : NSObject
{
    NSCondition *_condition;	// 8 = 0x8
    AKCircleRequestPayload *_payload;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000a1ff8
@property(retain, nonatomic) AKCircleRequestPayload *payload; // @synthesize payload=_payload;
@property(retain, nonatomic) NSCondition *condition; // @synthesize condition=_condition;

@end
