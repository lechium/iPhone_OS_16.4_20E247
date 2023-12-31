//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GQDDrawable;

@interface GQDWrapPoint : NSObject
{
    struct CGPoint mPoint;	// 8 = 0x8
    float mDistance;	// 24 = 0x18
    GQDDrawable *mDrawable;	// 32 = 0x20
    int mFlowType;	// 40 = 0x28
    int mZIndex;	// 44 = 0x2c
}

- (int)zIndex;	// IMP=0x000000000000a2ec
- (long long)comparePoint:(id)arg1;	// IMP=0x000000000000a297
- (id)initWithX:(float)arg1 y:(float)arg2 flowType:(int)arg3 drawable:(id)arg4;	// IMP=0x000000000000a1fc

@end

