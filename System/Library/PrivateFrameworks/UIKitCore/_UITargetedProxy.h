//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

__attribute__((visibility("hidden")))
@interface _UITargetedProxy : NSProxy
{
    id __target;	// 8 = 0x8
}

+ (id)proxyWithTarget:(id)arg1;	// IMP=0x00600000013415e3
- (void).cxx_destruct;	// IMP=0x00000000013417f3
@property(retain, nonatomic, setter=_setTarget:) id _target; // @synthesize _target=__target;
- (id)description;	// IMP=0x0000000001341752
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000134172f
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000001341661

@end
