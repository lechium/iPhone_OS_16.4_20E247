//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SKUIViewElement;

__attribute__((visibility("hidden")))
@interface _SKUIDynamicGridSizeCacheKey : NSObject
{
    long long _position;	// 8 = 0x8
    SKUIViewElement *_viewElement;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000019d268
@property(retain, nonatomic) SKUIViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(nonatomic) long long position; // @synthesize position=_position;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019d1ce
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000019d163
- (unsigned long long)hash;	// IMP=0x000000000019d13a
- (_Bool)__isSKUIDynamicGridSizeCacheKey;	// IMP=0x000000000019d132

@end

