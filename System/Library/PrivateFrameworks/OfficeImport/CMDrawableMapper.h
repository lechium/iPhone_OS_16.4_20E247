//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CMDrawableStyle, NSData, NSString, OADDrawable, OADOrientedBounds;

__attribute__((visibility("hidden")))
@interface CMDrawableMapper
{
    OADDrawable *mDrawable;	// 40 = 0x28
    CMDrawableStyle *mStyle;	// 48 = 0x30
    NSData *mImageBinaryData;	// 56 = 0x38
    NSString *mName;	// 64 = 0x40
    NSString *mExtension;	// 72 = 0x48
    int mResourceType;	// 80 = 0x50
    NSString *mSourcePath;	// 88 = 0x58
    struct CGRect mBox;	// 96 = 0x60
    float mRotation;	// 128 = 0x80
    _Bool mIsSupported;	// 132 = 0x84
    _Bool mIsCropped;	// 133 = 0x85
    struct CGRect mUncroppedBox;	// 136 = 0x88
    OADOrientedBounds *mOrientedBounds;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x0000000000460abf
- (id)convertMetafileToPdf;	// IMP=0x00000000000f2ec2
- (void)mapTextBoxAt:(id)arg1 withState:(id)arg2;	// IMP=0x0000000000460ab8
- (struct CGRect)shapeTextBoxRect;	// IMP=0x000000000018ca4c
- (void)mapDrawingContext:(id)arg1 at:(id)arg2 relative:(_Bool)arg3 withState:(id)arg4;	// IMP=0x0000000000460884
- (void)mapShapeGraphicsAt:(id)arg1 withState:(id)arg2;	// IMP=0x0000000000145049
- (void)calculateUncroppedBox:(id)arg1;	// IMP=0x0000000000164d7e
- (void)mapBounds;	// IMP=0x000000000046087c
- (void)mapImageBinaryData;	// IMP=0x0000000000460876
- (id)blipAtIndex:(unsigned int)arg1;	// IMP=0x0000000000143f0e
- (id)saveResourceAndReturnPath:(id)arg1 withType:(int)arg2;	// IMP=0x00000000000f0780
- (void)setWithOadImage:(id)arg1;	// IMP=0x00000000000f0085
- (void)setBoundingBox;	// IMP=0x000000000046086f
- (void)setRotation:(float)arg1;	// IMP=0x000000000046085d
- (float)rotation;	// IMP=0x000000000046084b
- (struct CGRect)uncroppedBox;	// IMP=0x00000000001d51af
- (_Bool)isCropped;	// IMP=0x0000000000164fc3
- (struct CGRect)box;	// IMP=0x0000000000144177
- (id)initWithOadDrawable:(id)arg1 parent:(id)arg2;	// IMP=0x00000000000a5364
- (id)initWithParent:(id)arg1;	// IMP=0x00000000001e4388

@end

