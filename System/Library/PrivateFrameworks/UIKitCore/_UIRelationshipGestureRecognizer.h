//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

__attribute__((visibility("hidden")))
@interface _UIRelationshipGestureRecognizer : UIGestureRecognizer
{
    _Bool _succeedsOnTouchesEnded;	// 8 = 0x8
}

@property(nonatomic) _Bool succeedsOnTouchesEnded; // @synthesize succeedsOnTouchesEnded=_succeedsOnTouchesEnded;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000088a9ec
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000088a9ae
- (void)_succeed;	// IMP=0x000000000088a997
- (void)_fail;	// IMP=0x000000000088a980

@end

