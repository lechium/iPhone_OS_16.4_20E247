//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImage;
@protocol UINamedLayerContentProvider, UINamedLayerImage;

__attribute__((visibility("hidden")))
@interface VUINamedLayerImage : NSObject
{
    int _blendMode;	// 8 = 0x8
    UIImage *_decodedImage;	// 16 = 0x10
    NSObject<UINamedLayerImage> *_namedLayerImage;	// 24 = 0x18
}

+ (id)decodedNamedLayerImageFromNamedLayerImage:(id)arg1;	// IMP=0x001000000000695c
+ (id)namedLayerImageFromNamedLayerImage:(id)arg1;	// IMP=0x00100000000068e8
- (void).cxx_destruct;	// IMP=0x0000000000006da4
@property(retain, nonatomic) NSObject<UINamedLayerImage> *namedLayerImage; // @synthesize namedLayerImage=_namedLayerImage;
@property(retain, nonatomic) UIImage *decodedImage; // @synthesize decodedImage=_decodedImage;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
- (id)imageObj;	// IMP=0x0000000000006d53
@property(nonatomic) _Bool fixedFrame;
@property(readonly, nonatomic) double opacity;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) NSString *name;
- (id)_init;	// IMP=0x00000000000068ad
- (id)init;	// IMP=0x000000000000689f

// Remaining properties
@property(readonly, nonatomic) id <UINamedLayerContentProvider> contentProvider;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

