//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSProxy.h"

__attribute__((visibility("hidden")))
@interface NSAutoContentAccessingProxy : NSProxy
{
    id _target;	// 8 = 0x8
}

+ (id)proxyWithTarget:(id)arg1;	// IMP=0x00600000004a3229
- (void)dealloc;	// IMP=0x00000000004a3302
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000004a32c6
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000004a32a9
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000004a3298

@end
