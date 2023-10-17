//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAVStroke : NSObject
{
}

+ (id)readFromManager:(id)arg1;	// IMP=0x00800000001b47ee
+ (void)initialize;	// IMP=0x008000000032d1a2
+ (void)readFillStyleFromManager:(id)arg1 toStroke:(id)arg2;	// IMP=0x00800000001b4d70
+ (id)targetFgColorWithManager:(id)arg1;	// IMP=0x00800000001b4b6b
+ (void)readJoinStyleFromManager:(id)arg1 toStroke:(id)arg2;	// IMP=0x00800000001b538f
+ (void)readDashStyleFromManager:(id)arg1 toStroke:(id)arg2;	// IMP=0x00800000001b5054
+ (id)readLineEndWithType:(id)arg1 width:(id)arg2 length:(id)arg3;	// IMP=0x008000000032d4e2
+ (unsigned char)readCapStyle:(id)arg1;	// IMP=0x00800000001b590d
+ (unsigned char)readLineEndLength:(id)arg1;	// IMP=0x00800000001b56a7
+ (unsigned char)readLineEndWidth:(id)arg1;	// IMP=0x00800000001b568a
+ (unsigned char)readLineEndType:(id)arg1;	// IMP=0x00800000001b566d
+ (BOOL)readPresetDashStyle:(id)arg1;	// IMP=0x00800000001b5368
+ (unsigned char)readCompoundType:(id)arg1;	// IMP=0x00800000001b5987

@end
