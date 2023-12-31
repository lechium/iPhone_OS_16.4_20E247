//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CAMetalDrawable, MTLDevice;

@interface CRLBrushStrokeDirectMetalRenderingContext : NSObject
{
    id <CAMetalDrawable> _metalDrawable;	// 8 = 0x8
    double _contentsScale;	// 16 = 0x10
    struct CGColorSpace *_destinationColorSpaceOverride;	// 24 = 0x18
    id <MTLDevice> _metalDeviceOverride;	// 32 = 0x20
    struct CGRect _frame;	// 40 = 0x28
    struct CGAffineTransform _transform;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000005031dc
@property(readonly, nonatomic) id <MTLDevice> metalDeviceOverride; // @synthesize metalDeviceOverride=_metalDeviceOverride;
@property(readonly, nonatomic) struct CGColorSpace *destinationColorSpaceOverride; // @synthesize destinationColorSpaceOverride=_destinationColorSpaceOverride;
@property(readonly, nonatomic) double contentsScale; // @synthesize contentsScale=_contentsScale;
@property(readonly, nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) id <CAMetalDrawable> metalDrawable; // @synthesize metalDrawable=_metalDrawable;
- (void)dealloc;	// IMP=0x00100000005030fa
- (id)initWithMetalDrawable:(id)arg1 frame:(struct CGRect)arg2 transform:(struct CGAffineTransform)arg3 contentsScale:(double)arg4 destinationColorSpaceOverride:(struct CGColorSpace *)arg5 metalDeviceOverride:(id)arg6;	// IMP=0x0010000000502fe3

@end

