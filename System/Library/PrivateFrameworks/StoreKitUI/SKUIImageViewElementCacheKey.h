//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface SKUIImageViewElementCacheKey : NSObject
{
    long long _imageTreatment;	// 8 = 0x8
    struct CGSize _size;	// 16 = 0x10
    NSURL *_url;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000066353
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000662bc
- (unsigned long long)hash;	// IMP=0x00000000000662a6
- (id)initWithURL:(id)arg1 size:(struct CGSize)arg2 imageTreatment:(id)arg3;	// IMP=0x00000000000661ef

@end
