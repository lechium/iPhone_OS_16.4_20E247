//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UILabel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableViewCountView : UILabel
{
    NSString *_countString;	// 144 = 0x90
    long long _count;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000011245fa
- (long long)count;	// IMP=0x00000000011245e9
- (void)setCount:(long long)arg1;	// IMP=0x000000000112431f
- (void)setCountString:(id)arg1 withCount:(long long)arg2;	// IMP=0x00000000011242ca
- (id)initWithFrame:(struct CGRect)arg1 withCountString:(id)arg2 withCount:(long long)arg3;	// IMP=0x000000000112418f

@end

