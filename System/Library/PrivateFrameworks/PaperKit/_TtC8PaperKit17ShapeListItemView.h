//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit17ShapeListItemView : UIControl
{
    MISSING_TYPE *imageView;	// 8 = 0x8
    MISSING_TYPE *cornerRadius;	// 16 = 0x10
    MISSING_TYPE *symbolPointSize;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000064620
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000645c0
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x0000000000064550
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x0000000000064460
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000643e0
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;	// IMP=0x0000000000064350
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000064200

@end

