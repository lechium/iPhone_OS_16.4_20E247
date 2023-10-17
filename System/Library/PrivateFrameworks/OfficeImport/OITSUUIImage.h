//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OITSUUIImageAutoreleasePoolGuard, UIImage;

__attribute__((visibility("hidden")))
@interface OITSUUIImage
{
    UIImage *mUIImage;	// 8 = 0x8
    OITSUUIImageAutoreleasePoolGuard *mGuard;	// 16 = 0x10
}

+ (id)imageNamed:(id)arg1;	// IMP=0x0060000000283695
+ (void)i_performBlockWithUIImageLock:(CDUnknownBlockType)arg1;	// IMP=0x006000000028362b
- (long long)imageOrientation;	// IMP=0x0000000000283bc5
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1;	// IMP=0x0000000000283b80
- (struct CGImage *)CGImage;	// IMP=0x0000000000283b3b
- (double)scale;	// IMP=0x0000000000283af6
- (struct CGSize)size;	// IMP=0x0000000000283ab1
- (id)UIImage;	// IMP=0x0000000000283a78
- (void)dealloc;	// IMP=0x0000000000283a1f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002839e8
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x0000000000283991
- (id)initWithUIImage:(id)arg1;	// IMP=0x000000000028397d
- (id)p_initWithUIImage:(id)arg1 needsGuard:(_Bool)arg2;	// IMP=0x00000000002838c7

@end
