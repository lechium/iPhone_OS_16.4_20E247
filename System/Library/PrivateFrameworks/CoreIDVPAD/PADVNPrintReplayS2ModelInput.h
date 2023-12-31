//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface PADVNPrintReplayS2ModelInput : NSObject
{
    struct __CVBuffer *_image;	// 8 = 0x8
}

@property(nonatomic) struct __CVBuffer *image; // @synthesize image=_image;
- (id)featureValueForName:(id)arg1;	// IMP=0x000000000001bf81
@property(readonly, nonatomic) NSSet *featureNames;
- (_Bool)setImageWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001be3d
- (_Bool)setImageWithCGImage:(struct CGImage *)arg1 error:(id *)arg2;	// IMP=0x000000000001bd28
- (id)initWithImageAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001bc05
- (id)initWithImageFromCGImage:(struct CGImage *)arg1 error:(id *)arg2;	// IMP=0x000000000001bb07
- (void)dealloc;	// IMP=0x000000000001bacd
- (id)initWithImage:(struct __CVBuffer *)arg1;	// IMP=0x000000000001ba7e

@end

