//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXFill : NSObject
{
}

+ (id)edFillFromXmlFillElement:(struct _xmlNode *)arg1 differentialFill:(_Bool)arg2 state:(id)arg3;	// IMP=0x00800000001b8f8f
+ (id)edFillFromXmlFillElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00800000001b8f68
+ (id)gradientFillTypeEnumMap;	// IMP=0x00800000003b2c35
+ (id)patternFillTypeEnumMap;	// IMP=0x00800000003b2b81
+ (id)edStopFromXmlGradientElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00800000003b2fe7
+ (int)edGradientTypeFromXmlGradientTypeString:(id)arg1 state:(id)arg2;	// IMP=0x00800000003b2f47
+ (id)edGradientFillFromXmlElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00800000003b2ce9
+ (int)edPatternTypeFromXmlPatternTypeString:(id)arg1;	// IMP=0x00800000001b94c8
+ (id)edPatternFillFromXmlElement:(struct _xmlNode *)arg1 differentialFill:(_Bool)arg2 state:(id)arg3;	// IMP=0x00800000001b9178

@end

