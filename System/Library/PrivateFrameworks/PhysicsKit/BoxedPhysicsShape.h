//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface BoxedPhysicsShape : NSObject
{
    int shapeType;	// 8 = 0x8
    NSArray *points;	// 16 = 0x10
}

+ (id)boxPhysicsShape:(struct PKPhysicsShape *)arg1;	// IMP=0x00600000000018cb
- (void).cxx_destruct;	// IMP=0x0000000000001e3e
- (struct PKPhysicsShape *)unboxShape;	// IMP=0x0000000000001e36

@end

