//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CRLCGImage
{
    struct CGImage *mCGImage;	// 8 = 0x8
    long long mOrientation;	// 16 = 0x10
    double mScale;	// 24 = 0x18
}

- (void)dealloc;	// IMP=0x00200000004d762d
- (long long)imageOrientation;	// IMP=0x00100000004d761c
- (double)scale;	// IMP=0x00100000004d75ed
- (struct CGSize)size;	// IMP=0x00100000004d751c
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1;	// IMP=0x00100000004d74ff
- (struct CGImage *)CGImage;	// IMP=0x00100000004d74e2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000004d7494
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;	// IMP=0x00100000004d7404

@end

