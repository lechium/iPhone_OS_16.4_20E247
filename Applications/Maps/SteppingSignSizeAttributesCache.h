//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SteppingSignSizeAttributesCache : NSObject
{
    NSMutableDictionary *_attributesCache;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000008de101
- (void)invalidateSizeAttributesForSignAtIndex:(long long)arg1;	// IMP=0x00100000008de0ad
- (void)invalidateSizeAttributes;	// IMP=0x00100000008de097
- (void)setSizeAttributes:(id)arg1 forSignAtIndex:(long long)arg2 fittingSize:(struct CGSize)arg3;	// IMP=0x00100000008ddf4c
- (id)sizeAttributesForSignAtIndex:(long long)arg1 fittingSize:(struct CGSize)arg2;	// IMP=0x00100000008dde8c
- (id)init;	// IMP=0x00100000008dde36

@end

