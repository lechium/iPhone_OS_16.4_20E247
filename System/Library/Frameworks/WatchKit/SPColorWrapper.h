//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface SPColorWrapper : NSObject
{
    UIColor *_color;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000b285
+ (id)wrapperForColor:(id)arg1;	// IMP=0x001000000000b214
- (void).cxx_destruct;	// IMP=0x000000000000b81d
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000b7be
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000b508
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000b28d

@end
