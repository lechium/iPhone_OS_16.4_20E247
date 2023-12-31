//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSString;

@interface CRLCADisplayLinkPlatformAdapter : NSObject
{
    CADisplayLink *_displayLink;	// 8 = 0x8
    id _target;	// 16 = 0x10
    SEL _action;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001e5e9a
- (void)p_displayLinkDidTrigger:(id)arg1;	// IMP=0x00100000001e5e06
@property(nonatomic) _Bool paused;
- (void)invalidate;	// IMP=0x00100000001e581b
- (void)dealloc;	// IMP=0x00100000001e5618
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00100000001e550f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

