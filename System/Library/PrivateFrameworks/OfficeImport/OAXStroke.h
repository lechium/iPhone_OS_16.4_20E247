//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXStroke : NSObject
{
}

+ (id)readStrokeFromXmlNode:(struct _xmlNode *)arg1 packagePart:(id)arg2 drawingState:(id)arg3;	// IMP=0x00800000000263c6
+ (id)readCustomDashFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;	// IMP=0x00800000002f930c
+ (id)readPresetDashFromXmlNode:(struct _xmlNode *)arg1;	// IMP=0x0080000000026a5b
+ (id)readLineEndFromXmlNode:(struct _xmlNode *)arg1;	// IMP=0x00800000002f90c4
+ (id)presetDashEnumMap;	// IMP=0x0080000000026b3d
+ (id)lineEndLengthEnumMap;	// IMP=0x00800000001d728c
+ (id)lineEndWidthEnumMap;	// IMP=0x00800000001d725c
+ (id)lineEndTypeEnumMap;	// IMP=0x00800000001d722c
+ (id)penAlignmentEnumMap;	// IMP=0x0080000000026a2b
+ (id)lineCapEnumMap;	// IMP=0x00800000000269cb
+ (id)compoundLineEnumMap;	// IMP=0x00800000000269fb

@end

