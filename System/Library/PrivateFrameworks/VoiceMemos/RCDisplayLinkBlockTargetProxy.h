//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface RCDisplayLinkBlockTargetProxy
{
    CDUnknownBlockType _handlerBlock;	// 8 = 0x8
}

@property(readonly, copy, nonatomic) CDUnknownBlockType handlerBlock; // @synthesize handlerBlock=_handlerBlock;
- (void)displayLinkFired:(id)arg1;	// IMP=0x000000000004e5c0
- (void)dealloc;	// IMP=0x000000000004e57e
- (id)initWithHandlerBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004e53a

@end
