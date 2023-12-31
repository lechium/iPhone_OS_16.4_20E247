//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLCanvasSpacing, CRLCanvasSpacingGuideUILayer, CRLSwappableAxesGeometry;

@interface CRLCanvasSpacingGuide
{
    CRLCanvasSpacing *mParentSpacing;	// 112 = 0x70
    struct CGRect mGeneratingObjectRect;	// 120 = 0x78
    CRLCanvasSpacingGuideUILayer *mSpacingUILayer;	// 152 = 0x98
    CRLSwappableAxesGeometry *mVerticalGeom;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x002000000051fc7e
@property(nonatomic) __weak CRLCanvasSpacing *parentSpacing; // @synthesize parentSpacing=mParentSpacing;
- (id)description;	// IMP=0x001000000051faf6
- (id)renderableWithICC:(id)arg1;	// IMP=0x001000000051f6db
- (long long)compare:(id)arg1;	// IMP=0x001000000051f64a
- (_Bool)canBeSnappedToByEdge:(int)arg1 ofFrame:(struct CGRect)arg2;	// IMP=0x001000000051f400
- (id)initForEdge:(int)arg1 ofGeneratingObjectRect:(struct CGRect)arg2 andParentSpacing:(id)arg3;	// IMP=0x001000000051ed72

@end

