//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

@class NSDictionary, UIFont, UIImage;

@interface FRCollectionViewFeedPickerLayoutAttributes : UICollectionViewLayoutAttributes
{
    UIFont *_placeholderTopicFont;	// 8 = 0x8
    UIFont *_placeholderChannelFont;	// 16 = 0x10
    NSDictionary *_placeholderTopicAttributes;	// 24 = 0x18
    NSDictionary *_placeholderChannelAttributes;	// 32 = 0x20
    UIImage *_placeholderTopicImage;	// 40 = 0x28
    UIImage *_placeholderChannelImage;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000007ed27
@property(retain, nonatomic) UIImage *placeholderChannelImage; // @synthesize placeholderChannelImage=_placeholderChannelImage;
@property(retain, nonatomic) UIImage *placeholderTopicImage; // @synthesize placeholderTopicImage=_placeholderTopicImage;
@property(retain, nonatomic) NSDictionary *placeholderChannelAttributes; // @synthesize placeholderChannelAttributes=_placeholderChannelAttributes;
@property(retain, nonatomic) NSDictionary *placeholderTopicAttributes; // @synthesize placeholderTopicAttributes=_placeholderTopicAttributes;
@property(retain, nonatomic) UIFont *placeholderChannelFont; // @synthesize placeholderChannelFont=_placeholderChannelFont;
@property(retain, nonatomic) UIFont *placeholderTopicFont; // @synthesize placeholderTopicFont=_placeholderTopicFont;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007ea41
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000007e55a

@end

