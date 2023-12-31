//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAShapeLayer, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _UIDropInteractionHighlightEffect : NSObject
{
    long long _visualState;	// 8 = 0x8
    double _highlightWidth;	// 16 = 0x10
    double _cornerRadius;	// 24 = 0x18
    double _highlightInset;	// 32 = 0x20
    UIColor *_highlightColor;	// 40 = 0x28
    CAShapeLayer *_shapeLayer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000633ff8
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(copy, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(nonatomic) double highlightInset; // @synthesize highlightInset=_highlightInset;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double highlightWidth; // @synthesize highlightWidth=_highlightWidth;
- (void)dealloc;	// IMP=0x0000000000633f44
- (struct CGRect)highlightRectInView:(id)arg1 forDragInteraction:(id)arg2 withContext:(id)arg3;	// IMP=0x0000000000633e87
- (struct CGRect)clippingRectInView:(id)arg1 forView:(id)arg2;	// IMP=0x0000000000633b83
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;	// IMP=0x000000000063397b
- (void)removeShapeLayer;	// IMP=0x0000000000633949
- (id)updateShapeLayerForFrame:(struct CGRect)arg1 inView:(id)arg2;	// IMP=0x00000000006335de
- (id)init;	// IMP=0x000000000063355f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

