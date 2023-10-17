//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextRange.h"

@class DOMRange;

__attribute__((visibility("hidden")))
@interface UITextRangeImpl : UITextRange
{
    DOMRange *_domRange;	// 16 = 0x10
    long long _affinityIfCollapsed;	// 24 = 0x18
}

+ (id)wrapDOMRange:(id)arg1;	// IMP=0x0060000000d16dc5
+ (id)wrapDOMRange:(id)arg1 withAffinity:(long long)arg2;	// IMP=0x0060000000d16d50
- (void).cxx_destruct;	// IMP=0x0000000000d1731a
@property(nonatomic) long long affinity; // @synthesize affinity=_affinityIfCollapsed;
@property(retain, nonatomic) DOMRange *domRange; // @synthesize domRange=_domRange;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d170d0
- (_Bool)isEmpty;	// IMP=0x0000000000d17081
- (id)end;	// IMP=0x0000000000d16fd7
- (id)start;	// IMP=0x0000000000d16f2a
- (void)adjustAffinityOfPosition:(id)arg1 isStart:(_Bool)arg2;	// IMP=0x0000000000d16e92
- (id)description;	// IMP=0x0000000000d16ddc

@end
