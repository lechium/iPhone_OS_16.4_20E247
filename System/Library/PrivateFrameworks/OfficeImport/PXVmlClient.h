//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PXVmlClient : NSObject
{
}

+ (int)vmlSupportLevel;	// IMP=0x001000000023e250
+ (void)readClientDataFromGroup:(struct _xmlNode *)arg1 toGroup:(id)arg2 state:(id)arg3;	// IMP=0x001000000044b376
+ (void)readClientDataFromShape:(struct _xmlNode *)arg1 toGraphic:(id)arg2 state:(id)arg3;	// IMP=0x00100000001db359
+ (id)colorWithRecolorInfoColorString:(id)arg1;	// IMP=0x001000000044b37c

@end
