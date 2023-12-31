//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImageView.h>

@class CAShapeLayer, NSObject, PHAssetCollection, UIGraphicsImageRenderer, UIImage;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface PUPeopleAvatarView : UIImageView
{
    _Bool _isRTL;	// 8 = 0x8
    _Bool _enabled;	// 9 = 0x9
    PHAssetCollection *_sharedAlbumCollection;	// 16 = 0x10
    UIGraphicsImageRenderer *_imageRenderer;	// 24 = 0x18
    UIImage *_firstAvatar;	// 32 = 0x20
    UIImage *_secondAvatar;	// 40 = 0x28
    UIImage *_thirdAvatar;	// 48 = 0x30
    CAShapeLayer *_overlayLayer;	// 56 = 0x38
}

+ (void)_requestPersonPhoto:(id)arg1 displayScale:(double)arg2 highQualityFormat:(_Bool)arg3 resultHandler:(CDUnknownBlockType)arg4;	// IMP=0x00400000004708b6
+ (struct CGSize)_sizeForNumberOfAvatars:(unsigned long long)arg1;	// IMP=0x0040000000470827
+ (id)serialQueue;	// IMP=0x00400000004707f7
- (void).cxx_destruct;	// IMP=0x000000000046fe46
@property(retain, nonatomic) CAShapeLayer *overlayLayer; // @synthesize overlayLayer=_overlayLayer;
@property(retain, nonatomic) UIImage *thirdAvatar; // @synthesize thirdAvatar=_thirdAvatar;
@property(retain, nonatomic) UIImage *secondAvatar; // @synthesize secondAvatar=_secondAvatar;
@property(retain, nonatomic) UIImage *firstAvatar; // @synthesize firstAvatar=_firstAvatar;
@property(retain, nonatomic) UIGraphicsImageRenderer *imageRenderer; // @synthesize imageRenderer=_imageRenderer;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) PHAssetCollection *sharedAlbumCollection; // @synthesize sharedAlbumCollection=_sharedAlbumCollection;
@property(readonly) NSObject<OS_os_log> *log;
- (void)accessibilityInvertColorsStatusDidChange:(id)arg1;	// IMP=0x000000000046fca1
- (void)_renderAvatarsForAlbumCollection:(id)arg1;	// IMP=0x000000000046f837
- (void)setPersonPhoto:(id)arg1 atIndex:(long long)arg2 albumCollection:(id)arg3;	// IMP=0x000000000046f794
- (void)_requestSubscriberMonogram:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000046f657
- (void)_setImage:(id)arg1 forIndex:(unsigned long long)arg2;	// IMP=0x000000000046f608
- (void)_setContentsImage:(id)arg1 withShadowPath:(struct CGPath *)arg2 forAlbumCollection:(id)arg3;	// IMP=0x000000000046f3cb
- (void)_resetViewContentsIfNeededForAlbumCollection:(id)arg1;	// IMP=0x000000000046f35a
- (void)_resetViewContents;	// IMP=0x000000000046f309
- (void)_resetImages;	// IMP=0x000000000046f2c8
- (void)_generateAvatars;	// IMP=0x000000000046e979
- (void)_updateAvatars;	// IMP=0x000000000046e7ba
- (void)embedInView:(id)arg1;	// IMP=0x000000000046e65e
- (void)prepareForReuse;	// IMP=0x000000000046e621
- (void)setSharedAlbumCollection:(id)arg1 forceLayoutSubscriberAvatars:(_Bool)arg2;	// IMP=0x000000000046e54b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000046e218

@end

