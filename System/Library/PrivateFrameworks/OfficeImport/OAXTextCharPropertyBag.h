//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXTextCharPropertyBag : NSObject
{
}

+ (void)readCharacterProperties:(struct _xmlNode *)arg1 characterProperties:(id)arg2 drawingState:(id)arg3;	// IMP=0x00800000001956e9
+ (id)stringWithUnderlineType:(unsigned char)arg1;	// IMP=0x00800000002fa028
+ (id)stringWithStrikeThroughType:(unsigned char)arg1;	// IMP=0x00800000002fa006
+ (id)stringWithCapsType:(unsigned char)arg1;	// IMP=0x00800000002f9fe4
+ (void)readFont:(struct _xmlNode *)arg1 characterProperties:(id)arg2;	// IMP=0x00800000001c4fd3
+ (void)readFormatting:(struct _xmlNode *)arg1 characterProperties:(id)arg2 drawingState:(id)arg3;	// IMP=0x00800000002f9e01
+ (unsigned char)readUnderlineType:(id)arg1;	// IMP=0x00800000002f9d5f
+ (id)oaxUnderlineMap;	// IMP=0x00800000002f9cab

@end

