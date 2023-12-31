//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUICore/VUIImageScaleDecorator.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _VUIMonogramDecorator : VUIImageScaleDecorator
{
    UIColor *_borderColor;	// 8 = 0x8
    double _borderWidth;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000021bc8e
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
- (void)drawInContext:(id)arg1 imageRect:(struct CGRect)arg2;	// IMP=0x000000000021ba4b
- (_Bool)needsAlphaForImage:(id)arg1;	// IMP=0x000000000021ba43
- (id)decoratorIdentifier;	// IMP=0x000000000021b9d1

@end

