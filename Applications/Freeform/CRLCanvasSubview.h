//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol CALayerDelegate;

@interface CRLCanvasSubview : UIView
{
    id <CALayerDelegate> _layerDelegate;	// 8 = 0x8
}

+ (Class)layerClass;	// IMP=0x00400000005593cb
- (void).cxx_destruct;	// IMP=0x0020000000559952
@property(nonatomic) __weak id <CALayerDelegate> layerDelegate; // @synthesize layerDelegate=_layerDelegate;
- (void)layoutSublayersOfLayer:(id)arg1;	// IMP=0x00100000005598c0
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000559811
- (_Bool)containsView:(id)arg1;	// IMP=0x00100000005597f6
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00100000005597a9
@property(copy, nonatomic) NSArray *subviews; // @dynamic subviews;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000005593dc

@end

