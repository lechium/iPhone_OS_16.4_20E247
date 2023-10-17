//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGLayout.h>

@class MISSING_TYPE, NSIndexSet;

@interface PUXStoryColorGradeEditorItemOverlayLayout : PXGLayout
{
    MISSING_TYPE *colorGradeKind;	// 8 = 0x8
    MISSING_TYPE *viewModel;	// 16 = 0x10
    MISSING_TYPE *backgroundSpriteIndex;	// 24 = 0x18
    MISSING_TYPE *captionSpriteIndex;	// 28 = 0x1c
    MISSING_TYPE *captionBackgroundSpriteIndex;	// 32 = 0x20
    MISSING_TYPE *selectionBadgeSpriteIndex;	// 36 = 0x24
    MISSING_TYPE *accessibleSpriteIndexes;	// 0 = 0x0
    MISSING_TYPE *cachedCaptionSpriteFrame;	// 0 = 0x0
    MISSING_TYPE *updateFlags;	// 0 = 0x0
    MISSING_TYPE *captionSpriteVersion;	// 0 = 0x0
    MISSING_TYPE *captionBackgroundSpriteVersion;	// 0 = 0x0
    MISSING_TYPE *captionHeight;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000000bdbc0
- (id)init;	// IMP=0x00000000000bdb70
@property(nonatomic, readonly) NSIndexSet *axSelectedSpriteIndexes;
- (id)axContentInfoAtSpriteIndex:(unsigned int)arg1;	// IMP=0x00000000000bd9f0
@property(nonatomic, readonly) NSIndexSet *axVisibleSpriteIndexes;
@property(nonatomic, readonly) NSIndexSet *axSpriteIndexes;
- (id)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000000bd570
- (id)imageConfigurationAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000000bd470
- (id)attributedStringForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000000bd420
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000000bd3d0
- (id)stringAttributesAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000000bd310
- (id)stringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000000bd290
- (id)hitTestResultForSpriteIndex:(unsigned int)arg1;	// IMP=0x00000000000bd240
- (unsigned int)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(id *)arg3;	// IMP=0x00000000000bc600
- (id)objectReferenceForSpriteIndex:(unsigned int)arg1;	// IMP=0x00000000000bc5b0
- (void)viewEnvironmentDidChange;	// IMP=0x00000000000bc580
- (void)screenScaleDidChange;	// IMP=0x00000000000bc400
- (void)referenceSizeDidChange;	// IMP=0x00000000000bc340
- (void)update;	// IMP=0x00000000000bc250

@end
