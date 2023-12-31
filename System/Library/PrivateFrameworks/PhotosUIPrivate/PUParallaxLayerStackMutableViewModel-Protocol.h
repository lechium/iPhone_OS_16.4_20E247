//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class NSString, PFParallaxLayerStack, PIParallaxStyle;

@protocol PUParallaxLayerStackMutableViewModel <NSObject>
@property(nonatomic) double visibilityAmount;
@property(nonatomic) struct CGRect containerFrame;
@property(nonatomic) unsigned long long clockIntersection;
@property(nonatomic) long long backlightLuminance;
@property(nonatomic) struct CGPoint parallaxVector;
@property(nonatomic) _Bool parallaxDisabled;
@property(nonatomic) _Bool depthEnabled;
@property(nonatomic) struct CGRect normalizedVisibleFrame;
@property(nonatomic) long long layoutOrder;
@property(retain, nonatomic) PIParallaxStyle *style;
- (void)setClockAreaLuminance:(double)arg1;
- (void)setClockLayerOrder:(NSString *)arg1;
- (void)updateLayerStack:(PFParallaxLayerStack *)arg1;
@end

