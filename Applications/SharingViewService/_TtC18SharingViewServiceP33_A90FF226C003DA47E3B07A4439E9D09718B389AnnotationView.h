//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/_MKPuckAnnotationView.h>

@class MISSING_TYPE, UIColor, UIImage;

@interface _TtC18SharingViewServiceP33_A90FF226C003DA47E3B07A4439E9D09718B389AnnotationView : _MKPuckAnnotationView
{
    MISSING_TYPE *calloutInnerDiameter;	// 8 = 0x8
}

+ (Class)calloutViewClass;	// IMP=0x00400000000fc0e0
- (void).cxx_destruct;	// IMP=0x00200000000fc260
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000fc1e0
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000000fc110
- (id)_balloonImage;	// IMP=0x00100000000fc390
- (id)_balloonTintColor;	// IMP=0x00100000000fc2c0
- (id)_balloonStrokeColor;	// IMP=0x00100000000fc2a0
- (long long)_balloonCalloutStyle;	// IMP=0x00100000000fc290

// Remaining properties
@property(nonatomic, readonly) long long balloonCalloutStyle;
@property(nonatomic, readonly) UIImage *balloonImage;
@property(nonatomic, readonly) UIColor *balloonStrokeColor;
@property(nonatomic, readonly) UIColor *balloonTintColor;

@end

