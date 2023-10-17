//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerGlyphProviderItem
{
    unsigned long long _addItemType;	// 8 = 0x8
    UIView *_symbolImageView;	// 16 = 0x10
    NSString *_symbolImageName;	// 24 = 0x18
    UIColor *_tintColor;	// 32 = 0x20
}

+ (id)thumbnailViewForImage:(id)arg1;	// IMP=0x006000000024aef0
- (void).cxx_destruct;	// IMP=0x000000000024b699
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) NSString *symbolImageName; // @synthesize symbolImageName=_symbolImageName;
@property(retain, nonatomic) UIView *symbolImageView; // @synthesize symbolImageView=_symbolImageView;
@property(nonatomic) unsigned long long addItemType; // @synthesize addItemType=_addItemType;
- (void)updateTintColorIfNeeded:(id)arg1;	// IMP=0x000000000024b4c6
- (id)backgroundColorWithTintColor:(id)arg1;	// IMP=0x000000000024b34c
- (id)imageForImageNamed:(id)arg1 withTintColor:(id)arg2;	// IMP=0x000000000024b29a
- (long long)scaleForImageNamed:(id)arg1;	// IMP=0x000000000024b266
- (void)thumbnailViewWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000024b1fa
- (unsigned long long)imageType;	// IMP=0x000000000024b1f2
- (void)setupSymbolImageView;	// IMP=0x000000000024b174
- (id)initWithSymbolImageNamed:(id)arg1;	// IMP=0x000000000024b094
- (id)initWithSymbolImageNamed:(id)arg1 withAddItemType:(unsigned long long)arg2;	// IMP=0x000000000024b050

@end
