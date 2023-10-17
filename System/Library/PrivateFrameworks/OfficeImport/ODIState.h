//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, OADDrawingTheme, OADGroup, OADOrientedBounds, OADShapeStyle, ODDDiagram;

__attribute__((visibility("hidden")))
@interface ODIState : NSObject
{
    ODDDiagram *mDiagram;	// 8 = 0x8
    OADOrientedBounds *mDiagramOrientedBounds;	// 16 = 0x10
    struct CGRect mLogicalBounds;	// 24 = 0x18
    double mScale;	// 56 = 0x38
    OADGroup *mGroup;	// 64 = 0x40
    NSMutableArray *mPresentationNames;	// 72 = 0x48
    NSMutableArray *mDefaultStyleLabelNames;	// 80 = 0x50
    int mPointCount;	// 88 = 0x58
    int mPointIndex;	// 92 = 0x5c
    OADShapeStyle *mTextStyle;	// 96 = 0x60
    OADDrawingTheme *mDrawingTheme;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000003333bb
- (id)drawingTheme;	// IMP=0x00000000003333ad
- (void)setTextStyle:(id)arg1;	// IMP=0x000000000033339c
- (id)textStyle;	// IMP=0x000000000033338e
- (void)setPointIndex:(int)arg1;	// IMP=0x0000000000333385
- (int)pointIndex;	// IMP=0x000000000033337c
- (void)setPointCount:(int)arg1;	// IMP=0x0000000000333373
- (int)pointCount;	// IMP=0x000000000033336a
- (void)setDefaultStyleLabelName:(id)arg1 forPointType:(int)arg2;	// IMP=0x000000000033334b
- (id)defaultStyleLabelNameForPointType:(int)arg1;	// IMP=0x00000000003332ce
- (void)setPresentationName:(id)arg1 forPointType:(int)arg2;	// IMP=0x0000000000333221
- (id)presentationNameForPointType:(int)arg1;	// IMP=0x00000000003331a4
- (void)setGroup:(id)arg1;	// IMP=0x0000000000333193
- (id)group;	// IMP=0x0000000000333185
- (void)setLogicalBounds:(struct CGRect)arg1;	// IMP=0x000000000033316e
- (double)scale;	// IMP=0x0000000000333163
- (void)setLogicalBounds:(struct CGRect)arg1 maintainAspectRatio:(_Bool)arg2;	// IMP=0x0000000000332f1b
- (struct CGRect)logicalBounds;	// IMP=0x0000000000332f03
- (id)diagramOrientedBounds;	// IMP=0x0000000000332ef5
- (id)diagram;	// IMP=0x0000000000332ee7
- (id)initWithDiagram:(id)arg1 group:(id)arg2 drawingTheme:(id)arg3;	// IMP=0x0000000000332c17

@end
