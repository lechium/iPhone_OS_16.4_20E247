//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "COMeshRequest.h"

@class MTTimer;

__attribute__((visibility("hidden")))
@interface COTimerRequest : COMeshRequest
{
    MTTimer *_timer;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000474f7
- (void).cxx_destruct;	// IMP=0x0000000000047510
@property(readonly, copy, nonatomic) MTTimer *timer; // @synthesize timer=_timer;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004745c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000473c1
- (id)initWithTimer:(id)arg1;	// IMP=0x0000000000047347

@end
