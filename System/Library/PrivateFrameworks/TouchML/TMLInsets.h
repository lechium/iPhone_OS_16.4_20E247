//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TMLInsets : NSObject
{
    struct UIEdgeInsets _insets;	// 8 = 0x8
}

+ (void)initializeJSContext:(id)arg1;	// IMP=0x001000000002c277
- (id)description;	// IMP=0x000000000002c4ce
@property(readonly, nonatomic) double right;
@property(readonly, nonatomic) double bottom;
@property(readonly, nonatomic) double left;
@property(readonly, nonatomic) double top;
- (struct UIEdgeInsets)UIEdgeInsets;	// IMP=0x000000000002c25f
- (id)UIEdgeInsetsValue;	// IMP=0x000000000002c229
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002c1d1
- (id)initWithInsets:(struct UIEdgeInsets)arg1;	// IMP=0x000000000002c18a

@end
