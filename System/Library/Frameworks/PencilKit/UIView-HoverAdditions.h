//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSString;
@protocol PKScribbleInteractionDelegate;

@interface UIView (HoverAdditions)
+ (id)pk_hoverAttributedStringForColor:(id)arg1;	// IMP=0x00200000001ec003
+ (id)pk_hoverAttributedStringFromString:(id)arg1;	// IMP=0x00200000001ebeae
+ (id)pk_hoverLabelFont;	// IMP=0x00200000001ebde0
@property(retain, nonatomic, setter=pk_setHoverLabelAttributedString:) NSAttributedString *pk_hoverLabelAttributedString;
@property(retain, nonatomic, setter=pk_setHoverLabelString:) NSString *pk_hoverLabelString;
- (_Bool)PK_isBelowViewInDepth:(id)arg1;	// IMP=0x0010000000233b8e
- (id)pk_autoFadeOutShapePointLayer;	// IMP=0x001000000023388f
- (id)pk_autoFadeOutShapeRectLayer;	// IMP=0x00100000002337db
- (struct CGRect)PK_convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;	// IMP=0x00100000002336f3
- (struct CGRect)PK_convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;	// IMP=0x001000000023360b
- (struct CGPoint)PK_convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;	// IMP=0x00100000002335a6
- (struct CGPoint)PK_convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id)arg2;	// IMP=0x0010000000233541
- (struct CGRect)PK_convertRect:(struct CGRect)arg1 fromView:(id)arg2;	// IMP=0x00100000002334ee
- (struct CGRect)PK_convertRect:(struct CGRect)arg1 toView:(id)arg2;	// IMP=0x0010000000233169
- (struct CGPoint)PK_convertPoint:(struct CGPoint)arg1 toView:(id)arg2;	// IMP=0x0010000000233104
- (struct CGPoint)PK_convertPoint:(struct CGPoint)arg1 fromView:(id)arg2;	// IMP=0x00100000002330e9
- (id)PK_enclosingScrollableScrollView;	// IMP=0x0010000000233062
@property(retain, nonatomic) id <PKScribbleInteractionDelegate> fakeScribbleInteractionDelegate;
@end

