//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXLayout : NSObject
{
}

+ (void)readFrom:(struct _xmlNode *)arg1 graphicProperties:(id)arg2 state:(id)arg3;	// IMP=0x0080000000209290
+ (id)orientedBoundsFromLayoutElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x008000000039448c
+ (id)stringFromLayoutMode:(int)arg1;	// IMP=0x0080000000394a81
+ (struct CGRect)boundsRectFromXmlManualLayoutElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x0080000000394786

@end
