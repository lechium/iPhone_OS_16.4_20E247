//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WXOfficeArt : NSObject
{
}

+ (void)readFrom:(struct _xmlNode *)arg1 parentRElement:(struct _xmlNode *)arg2 parentParagraph:(id)arg3 state:(id)arg4 to:(id)arg5;	// IMP=0x00800000001a51ce
+ (id)textWrappingModeTypeEnumMap;	// IMP=0x008000000040c8ea
+ (id)relativeVerticalPositionEnumMap;	// IMP=0x008000000040c836
+ (id)relativeHorizontalPositionEnumMap;	// IMP=0x008000000040c782
+ (void)writeWrapPolygonChildren:(id)arg1 to:(id)arg2;	// IMP=0x008000000040d016
+ (_Bool)writeWrapTightlyWith:(id)arg1 toWriter:(id)arg2;	// IMP=0x008000000040cdf5
+ (void)readVml:(struct _xmlNode *)arg1 parentRElement:(struct _xmlNode *)arg2 parentParagraph:(id)arg3 state:(id)arg4 to:(id)arg5;	// IMP=0x00800000001b0318
+ (void)writeWrapBottomDistance:(id)arg1 to:(id)arg2;	// IMP=0x008000000040cd13
+ (void)writeWrapTopDistance:(id)arg1 to:(id)arg2;	// IMP=0x008000000040cc31
+ (void)writeWrapRightDistance:(id)arg1 to:(id)arg2;	// IMP=0x008000000040cb4f
+ (void)writeWrapLeftDistance:(id)arg1 to:(id)arg2;	// IMP=0x008000000040ca6d
+ (void)writeWrapText:(id)arg1 to:(id)arg2;	// IMP=0x008000000040c99e
+ (void)readWrapDistance:(struct _xmlNode *)arg1 parentElement:(struct _xmlNode *)arg2 state:(id)arg3 to:(id)arg4;	// IMP=0x00800000002125f3
+ (void)readWrap:(struct _xmlNode *)arg1 state:(id)arg2 to:(id)arg3;	// IMP=0x00800000001aa68c
+ (void)readPosition:(struct _xmlNode *)arg1 state:(id)arg2 to:(id)arg3 isHorizontal:(_Bool)arg4;	// IMP=0x00800000001aa217
+ (void)readClientData:(struct _xmlNode *)arg1 state:(id)arg2 to:(id)arg3;	// IMP=0x00800000001a960e
+ (void)readOAX:(struct _xmlNode *)arg1 parentRElement:(struct _xmlNode *)arg2 parentParagraph:(id)arg3 state:(id)arg4 to:(id)arg5;	// IMP=0x00800000001a5a25

@end
