//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL, UIColor, UIFont, UIImage;
@protocol VUINetworkRequestLoader;

__attribute__((visibility("hidden")))
@interface VUIMonogramDescription : NSObject
{
    _Bool _shouldFallBackToSilhouette;	// 8 = 0x8
    _Bool _isUsingLibraryImageLoader;	// 9 = 0x9
    _Bool _optimizedImageRendering;	// 10 = 0xa
    NSString *_firstName;	// 16 = 0x10
    NSString *_lastName;	// 24 = 0x18
    NSString *_text;	// 32 = 0x20
    NSURL *_imageURL;	// 40 = 0x28
    UIFont *_font;	// 48 = 0x30
    NSDictionary *_specialOffsetByFirstLetter;	// 56 = 0x38
    long long _scaleMode;	// 64 = 0x40
    UIColor *_backgroundColor;	// 72 = 0x48
    UIColor *_textColor;	// 80 = 0x50
    double _upscaleAdjustment;	// 88 = 0x58
    double _cornerRadius;	// 96 = 0x60
    UIColor *_fillColor;	// 104 = 0x68
    UIColor *_gradientStartColor;	// 112 = 0x70
    UIColor *_gradientEndColor;	// 120 = 0x78
    double _borderWidth;	// 128 = 0x80
    UIColor *_borderColor;	// 136 = 0x88
    id <VUINetworkRequestLoader> _requestLoader;	// 144 = 0x90
    UIImage *_placeholderImage;	// 152 = 0x98
    struct CGSize _size;	// 160 = 0xa0
    struct CGSize _defaultImageSize;	// 176 = 0xb0
    struct UIEdgeInsets _padding;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x00000000000914f0
@property(nonatomic) _Bool optimizedImageRendering; // @synthesize optimizedImageRendering=_optimizedImageRendering;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(nonatomic) __weak id <VUINetworkRequestLoader> requestLoader; // @synthesize requestLoader=_requestLoader;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) _Bool isUsingLibraryImageLoader; // @synthesize isUsingLibraryImageLoader=_isUsingLibraryImageLoader;
@property(nonatomic) _Bool shouldFallBackToSilhouette; // @synthesize shouldFallBackToSilhouette=_shouldFallBackToSilhouette;
@property(retain, nonatomic) UIColor *gradientEndColor; // @synthesize gradientEndColor=_gradientEndColor;
@property(retain, nonatomic) UIColor *gradientStartColor; // @synthesize gradientStartColor=_gradientStartColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double upscaleAdjustment; // @synthesize upscaleAdjustment=_upscaleAdjustment;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) long long scaleMode; // @synthesize scaleMode=_scaleMode;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(retain, nonatomic) NSDictionary *specialOffsetByFirstLetter; // @synthesize specialOffsetByFirstLetter=_specialOffsetByFirstLetter;
@property(nonatomic) struct CGSize defaultImageSize; // @synthesize defaultImageSize=_defaultImageSize;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, copy, nonatomic) UIFont *font; // @synthesize font=_font;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (unsigned long long)preferedMonogramType;	// IMP=0x00000000000910c7
- (unsigned long long)hash;	// IMP=0x0000000000090f7d
- (struct CGPoint)specialOffsetForString:(id)arg1;	// IMP=0x0000000000090e80
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000090095
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008fcf3
- (id)copyWithType:(unsigned long long)arg1;	// IMP=0x000000000008fc47
- (id)init;	// IMP=0x000000000008fc2b
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 imageURL:(id)arg3 font:(id)arg4;	// IMP=0x000000000008fab1

@end

