//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _UITextInputSessionDynamicAccumulator
{
    NSDictionary *_lastResult;	// 112 = 0x70
}

+ (id)accumulatorWithName:(id)arg1 type:(long long)arg2 depthRange:(struct _NSRange)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00600000011a6df6
- (void).cxx_destruct;	// IMP=0x00000000011a7493
@property(readonly, nonatomic) NSDictionary *lastResult; // @synthesize lastResult=_lastResult;
- (void)enumerateAnalytics:(CDUnknownBlockType)arg1;	// IMP=0x00000000011a747c
- (void)increaseWithActions:(id)arg1;	// IMP=0x00000000011a6ef4

@end
