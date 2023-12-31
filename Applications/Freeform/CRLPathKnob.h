//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLBezierNode, CRLCanvasRep, CRLCanvasShapeRenderable;
@protocol CRLPathEditableRep;

@interface CRLPathKnob
{
    _Bool _hovering;	// 8 = 0x8
    _Bool _hoveringSharp;	// 9 = 0x9
    CRLCanvasShapeRenderable *_handleLine;	// 16 = 0x10
    CRLBezierNode *_node;	// 24 = 0x18
    CRLBezierNode *_nextNode;	// 32 = 0x20
    CRLBezierNode *_prevNode;	// 40 = 0x28
    unsigned long long _nodeIndex;	// 48 = 0x30
    double _parametricT;	// 56 = 0x38
    unsigned long long _subpathIndex;	// 64 = 0x40
    double _bendParameter;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000016729f
@property(nonatomic) double bendParameter; // @synthesize bendParameter=_bendParameter;
@property(nonatomic) unsigned long long subpathIndex; // @synthesize subpathIndex=_subpathIndex;
@property(nonatomic) double tValue; // @synthesize tValue=_parametricT;
@property(nonatomic) unsigned long long nodeIndex; // @synthesize nodeIndex=_nodeIndex;
@property(retain, nonatomic) CRLBezierNode *prevNode; // @synthesize prevNode=_prevNode;
@property(retain, nonatomic) CRLBezierNode *nextNode; // @synthesize nextNode=_nextNode;
@property(retain, nonatomic) CRLBezierNode *node; // @synthesize node=_node;
- (void)updatePositionWithTransform:(struct CGAffineTransform)arg1;	// IMP=0x0010000000166e95
- (void)updateImage;	// IMP=0x0010000000166c24
- (id)knobImage;	// IMP=0x0010000000166a71
- (struct CGAffineTransform)p_underlayRenderableTransformForRep:(id)arg1;	// IMP=0x001000000016689b
- (id)underlayRenderableForRep:(id)arg1;	// IMP=0x0010000000166678
- (_Bool)isHitByUnscaledPoint:(struct CGPoint)arg1 inputType:(long long)arg2 returningDistance:(double *)arg3;	// IMP=0x0010000000165cf0
- (_Bool)overlapsWithKnob:(id)arg1;	// IMP=0x0010000000165c67
- (_Bool)obscuresKnob:(id)arg1;	// IMP=0x0010000000165bdd
@property(nonatomic) _Bool hoveringSharp;
@property(nonatomic) _Bool hovering;
@property(readonly, nonatomic) CRLCanvasRep<CRLPathEditableRep> *pathEditableRep;
- (id)p_knobHitPath;	// IMP=0x0010000000165af4
- (id)initWithOutControlForNode:(id)arg1 onRep:(id)arg2;	// IMP=0x0010000000165a0b
- (id)initWithInControlForNode:(id)arg1 onRep:(id)arg2;	// IMP=0x0010000000165922
- (id)initWithNode:(id)arg1 onRep:(id)arg2;	// IMP=0x0010000000165839
- (id)initBendKnobOnRep:(id)arg1;	// IMP=0x00100000001657e8

@end

