//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CMDrawingContext, NSString, OADOrientedBounds, ODDPoint;

__attribute__((visibility("hidden")))
@interface CMDiagramPointMapper
{
    ODDPoint *mPoint;	// 40 = 0x28
    CMDrawingContext *mDrawingContext;	// 48 = 0x30
    OADOrientedBounds *mOrientedBounds;	// 56 = 0x38
    NSString *mPresentationName;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000045f48a
- (float)defaultFontSize;	// IMP=0x00000000001e9491
- (id)diagram;	// IMP=0x00000000001e7c10
- (id)baseTextListStyleWithBounds:(id)arg1 isCentered:(_Bool)arg2;	// IMP=0x00000000001e9247
- (id)plainText;	// IMP=0x00000000001e729a
- (id)transformPresentationName;	// IMP=0x00000000001e6db8
- (id)transformForPresentationWithName:(id)arg1;	// IMP=0x00000000001e6dc0
- (void)mapSiblingTextAt:(id)arg1 style:(id)arg2 level:(int)arg3 withState:(id)arg4;	// IMP=0x00000000001ffa13
- (void)mapChildrenTextAt:(id)arg1 style:(id)arg2 level:(int)arg3 withState:(id)arg4;	// IMP=0x00000000001ffc4e
- (void)mapTextAt:(id)arg1 withBounds:(id)arg2 isCentered:(_Bool)arg3 includeChildren:(_Bool)arg4 withState:(id)arg5;	// IMP=0x00000000001e8f2f
- (void)renderShapeAsBackgroundInBounds:(id)arg1;	// IMP=0x00000000001e86f2
- (id)stroke;	// IMP=0x00000000001e8ac2
- (id)fill;	// IMP=0x00000000001e8927
- (void)applyDiagramStyleToShapeProperties;	// IMP=0x00000000001e7806
- (id)styleMatrix;	// IMP=0x00000000001e83ff
- (id)shapeStyle;	// IMP=0x00000000001e7910
- (id)presentationWithName:(id)arg1;	// IMP=0x00000000001e702d
- (void)mapChlidrenAt:(id)arg1 withState:(id)arg2;	// IMP=0x00000000001e9a06
- (void)setPresentationName:(id)arg1;	// IMP=0x0000000000228eef
- (id)presentationName;	// IMP=0x00000000001e7cf5
- (void)mapStyledRectangle:(struct CGRect)arg1 at:(id)arg2 withState:(id)arg3;	// IMP=0x00000000001e86f8
- (void)mapAt:(id)arg1 withState:(id)arg2;	// IMP=0x00000000001e75aa
- (id)initWithPoint:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 parent:(id)arg4;	// IMP=0x00000000001e6b7e
- (void)mapPointTextAt:(id)arg1 style:(id)arg2 level:(int)arg3 withState:(id)arg4;	// IMP=0x00000000001e956c

@end

