//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OADBevel : NSObject
{
    int mType;	// 8 = 0x8
    float mWidth;	// 12 = 0xc
    float mHeight;	// 16 = 0x10
}

- (id)description;	// IMP=0x000000000031986a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000319762
- (unsigned long long)hash;	// IMP=0x000000000031970b
- (void)setHeight:(float)arg1;	// IMP=0x00000000001e4e9a
- (float)height;	// IMP=0x0000000000319700
- (void)setWidth:(float)arg1;	// IMP=0x00000000001e4e8f
- (float)width;	// IMP=0x00000000003196f5
- (void)setType:(int)arg1;	// IMP=0x0000000000219c91
- (int)type;	// IMP=0x00000000003196ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000031968e
- (id)init;	// IMP=0x00000000001dcb45

@end
