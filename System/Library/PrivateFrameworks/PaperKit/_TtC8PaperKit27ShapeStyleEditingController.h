//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit27ShapeStyleEditingController : NSObject
{
    MISSING_TYPE *controller;	// 8 = 0x8
    MISSING_TYPE *viewControllerProvider;	// 16 = 0x10
    MISSING_TYPE *shapeStyleEditingView;	// 32 = 0x20
    MISSING_TYPE *isCompactUI;	// 40 = 0x28
    MISSING_TYPE *defaultStrokeColor;	// 48 = 0x30
    MISSING_TYPE *defaultFillColor;	// 56 = 0x38
    MISSING_TYPE *editingAttribute;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000001eda0
- (id)init;	// IMP=0x000000000001ed40
- (void)valueEditingViewController:(id)arg1 didChangeValue:(long long)arg2;	// IMP=0x000000000001ece0
- (void)valueEditingViewController:(id)arg1 didFinishChangingValue:(long long)arg2;	// IMP=0x000000000001ec90
- (void)valueEditingViewController:(id)arg1 didStartChangingValue:(long long)arg2;	// IMP=0x000000000001ec20
- (void)_colorPickerViewControllerDidDeselectColor:(id)arg1;	// IMP=0x000000000001ebb0
- (void)colorPickerViewController:(id)arg1 didSelectColor:(id)arg2 continuously:(_Bool)arg3;	// IMP=0x000000000001eb30
- (void)lineTypeControlValueChanged;	// IMP=0x000000000001ea60
- (void)didChangeOpacitySlider;	// IMP=0x000000000001e8c0
- (void)didFinishChangingOpacitySlider;	// IMP=0x000000000001e730
- (void)didStartChangingOpacitySlider;	// IMP=0x000000000001e6c0
- (void)didTapCompactOpacityButtonForEvent:(id)arg1;	// IMP=0x000000000001e670
- (void)didTapStrokeWidthButtonForEvent:(id)arg1;	// IMP=0x000000000001e620
- (void)didTapFillColorButtonForEvent:(id)arg1;	// IMP=0x000000000001e5d0
- (void)didTapStrokeColorButtonForEvent:(id)arg1;	// IMP=0x000000000001e580

@end
