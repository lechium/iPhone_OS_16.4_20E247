//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

__attribute__((visibility("hidden")))
@interface UIHeldAction
{
    _Bool _holding;	// 72 = 0x48
    NSDate *_holdBegan;	// 80 = 0x50
    double _baseDelay;	// 88 = 0x58
    double _timeBalance;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000001c41
- (void)cancel;	// IMP=0x0000000000001c03
- (void)unschedule;	// IMP=0x0000000000001bae
- (void)touchWithDelay:(double)arg1;	// IMP=0x0000000000001b43
- (_Bool)isHolding;	// IMP=0x0000000000001b33
- (void)resume;	// IMP=0x0000000000001a31
- (void)hold;	// IMP=0x0000000000001925

@end
