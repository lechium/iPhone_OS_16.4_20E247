//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXData : NSObject
{
}

+ (id)chdDataFromXmlDataElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x008000000020aea1
+ (_Bool)isHiddenDataElement:(struct _xmlNode *)arg1 data:(id)arg2 state:(id)arg3;	// IMP=0x0080000000392619
+ (void)readStrDataFromXmlMultiLevelStrDataElement:(struct _xmlNode *)arg1 data:(id)arg2 state:(id)arg3;	// IMP=0x008000000020c475
+ (void)readStrDataFromXmlStrDataElement:(struct _xmlNode *)arg1 data:(id)arg2 state:(id)arg3;	// IMP=0x008000000020c314
+ (void)readNumDataFromXmlNumDataElement:(struct _xmlNode *)arg1 data:(id)arg2 state:(id)arg3;	// IMP=0x008000000020c552

@end
