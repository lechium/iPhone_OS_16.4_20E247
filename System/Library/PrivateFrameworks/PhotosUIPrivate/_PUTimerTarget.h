//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _PUTimerTarget : NSObject
{
    id _target;	// 8 = 0x8
    SEL _selector;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000033580
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void)handleTimer:(id)arg1;	// IMP=0x00000000000334cd

@end

