//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface STPropVariant : NSObject
{
    struct _SsrwPropVariant mProp;	// 8 = 0x8
}

- (void)dealloc;	// IMP=0x000000000037058e
- (id)asDataOfType:(int *)arg1;	// IMP=0x00000000003703a3
- (struct _SsrwPropVariant *)propVariant;	// IMP=0x0000000000370399
- (void)setBlobValue:(id)arg1;	// IMP=0x0000000000370307
- (void)setStringValue:(id)arg1;	// IMP=0x00000000003702ac
- (void)setLongValue:(int)arg1;	// IMP=0x000000000037029d
- (void)setShortValue:(short)arg1;	// IMP=0x000000000037028d

@end

