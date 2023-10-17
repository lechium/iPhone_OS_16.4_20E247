//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXBaseTypes : NSObject
{
}

+ (id)readRotation3DFromXmlNode:(struct _xmlNode *)arg1;	// IMP=0x00800000001dc602
+ (id)readPoint3DFromXmlNode:(struct _xmlNode *)arg1;	// IMP=0x00800000002eaef8
+ (id)readVector3DFromXmlNode:(struct _xmlNode *)arg1;	// IMP=0x00800000002eae57
+ (void)writeRectAlignment:(int)arg1 to:(id)arg2;	// IMP=0x00800000002ead98
+ (int)readRectAlignmentFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;	// IMP=0x008000000002708b
+ (void)writeRelativeRect:(id)arg1 to:(id)arg2;	// IMP=0x00800000002eaa83
+ (id)stringForRectAlignment:(int)arg1;	// IMP=0x00800000002eaa10
+ (id)readRelativeRectFromXmlNode:(struct _xmlNode *)arg1;	// IMP=0x00800000000273e9
+ (struct CGSize)readSize2DFromXmlNode:(struct _xmlNode *)arg1;	// IMP=0x00800000001a8c0a
+ (struct CGPoint)readPoint2DFromXmlNode:(struct _xmlNode *)arg1;	// IMP=0x00800000001a8b7e
+ (float)readOptionalFractionFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;	// IMP=0x00800000000274cc
+ (float)readRequiredFractionFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;	// IMP=0x0080000000025f71
+ (double)readOptionalAngleFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;	// IMP=0x008000000019456c
+ (double)readRequiredAngleFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;	// IMP=0x00800000001dc6af
+ (float)readOptionalLengthFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;	// IMP=0x00800000001ea12a
+ (float)readRequiredLengthFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;	// IMP=0x00800000001a8be0
+ (long long)readOptionalLongFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2 desiredOutputUnit:(int)arg3;	// IMP=0x00800000002ea9f4
+ (long long)readRequiredLongFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2 desiredOutputUnit:(int)arg3;	// IMP=0x00800000002ea9d7
+ (long long)readOptionalLongFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;	// IMP=0x00800000000274ee
+ (long long)readRequiredLongFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;	// IMP=0x0080000000025f90
+ (id)rectAlignmentEnumMap;	// IMP=0x00800000001d7386

@end
