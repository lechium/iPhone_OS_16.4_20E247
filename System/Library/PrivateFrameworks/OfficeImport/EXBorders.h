//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXBorders : NSObject
{
}

+ (id)edBordersFromXmlBordersElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00800000001b9898
+ (id)borderStyleEnumMap;	// IMP=0x00800000003b04e8
+ (int)edDiagStyleFromXmlElement:(struct _xmlNode *)arg1;	// IMP=0x00800000001ba04a
+ (int)edBorderStyleFromXmlBorderStyleString:(id)arg1;	// IMP=0x00800000001b9faa
+ (id)edBorderFromXmlElement:(struct _xmlNode *)arg1 diagonalType:(int)arg2 state:(id)arg3;	// IMP=0x00800000001b9dcd

@end

